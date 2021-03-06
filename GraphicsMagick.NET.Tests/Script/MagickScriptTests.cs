﻿//=================================================================================================
// Copyright 2014-2015 Dirk Lemstra <https://graphicsmagick.codeplex.com/>
//
// Licensed under the ImageMagick License (the "License"); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
//
//   http://www.imagemagick.org/script/license.php
//
// Unless required by applicable law or agreed to in writing, software distributed under the
// License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
// express or implied. See the License for the specific language governing permissions and
// limitations under the License.
//=================================================================================================

using System;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Xml;
using System.Xml.Schema;
using GraphicsMagick;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace GraphicsMagick.NET.Tests
{
	//==============================================================================================
	[TestClass]
	public class MagickScriptsTests
	{
		//===========================================================================================
		private const string _Category = "MagickScript";
		//===========================================================================================
		private void CollectionScriptRead(object sender, ScriptReadEventArgs arguments)
		{
			switch (arguments.Id)
			{
				case "icon":
					arguments.Image = new MagickImage(Files.GraphicsMagickNETIconPNG, arguments.Settings);
					break;
				case "snakeware":
					arguments.Image = new MagickImage(Files.SnakewarePNG, arguments.Settings);
					break;
				default:
					throw new NotImplementedException(arguments.Id);
			}
		}
		//===========================================================================================
		private void EventsScriptRead(object sender, ScriptReadEventArgs arguments)
		{
			Assert.AreEqual("read.id", arguments.Id);
			arguments.Image = new MagickImage(Files.SnakewarePNG, arguments.Settings);
		}
		//===========================================================================================
		private void EventsScriptWrite(object sender, ScriptWriteEventArgs arguments)
		{
			Assert.AreEqual("write.id", arguments.Id);
		}
		//===========================================================================================
		private void ScaleScriptRead(object sender, ScriptReadEventArgs arguments)
		{
			arguments.Image = new MagickImage(Files.ImageMagickJPG, arguments.Settings);
			Assert.AreEqual("64x64", arguments.Image.GetDefine(MagickFormat.Jpeg, "size"));
		}
		//===========================================================================================
		private void Script_ReadNothing(object sender, ScriptReadEventArgs arguments)
		{
		}
		//===========================================================================================
		private static void TestScriptScaleResult(MagickImage result)
		{
			Assert.AreEqual("GraphicsMagick.NET.Scale", result.Comment);
			Assert.AreEqual(62, result.Width);
			Assert.AreEqual(59, result.Height);
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Constructor()
		{
			ExceptionAssert.Throws<ArgumentException>(delegate()
			{
				new MagickScript((string)null);
			});

			ExceptionAssert.Throws<ArgumentException>(delegate()
			{
				new MagickScript((Stream)null);
			});

			ExceptionAssert.Throws<ArgumentException>(delegate()
			{
				new MagickScript(Files.Missing);
			});

			ExceptionAssert.Throws<XmlSchemaValidationException>(delegate()
			{
				new MagickScript(Files.InvalidScript);
			});
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Execute_Collection()
		{
			MagickScript script = new MagickScript(Files.CollectionScript);
			script.Read += CollectionScriptRead;

			MagickImage image = script.Execute();

			Assert.IsNotNull(image);
			Assert.AreEqual(MagickFormat.Png, image.Format);
			Assert.AreEqual(128, image.Width);
			Assert.AreEqual(30, image.Height);
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Execute_Draw()
		{
			XmlDocument doc = new XmlDocument();
			doc.Load(Files.DrawScript);

			MagickScript script = new MagickScript(doc);

			using (MagickImage image = new MagickImage(Files.ImageMagickJPG))
			{
				script.Execute(image);
			}
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Execute_Events()
		{
			MagickScript script = new MagickScript(Files.EventsScript);

			ExceptionAssert.Throws<InvalidOperationException>(delegate()
			{
				script.Execute();
			});

			script.Read += Script_ReadNothing;
			ExceptionAssert.Throws<InvalidOperationException>(delegate()
			{
				script.Execute();
			});
			script.Read -= Script_ReadNothing;

			ExceptionAssert.Throws<InvalidOperationException>(delegate()
			{
				script.Read += EventsScriptRead;
				script.Read -= EventsScriptRead;
				script.Execute();
			});

			script.Read += EventsScriptRead;

			ExceptionAssert.Throws<InvalidOperationException>(delegate()
			{
				script.Execute();
			});

			ExceptionAssert.Throws<InvalidOperationException>(delegate()
			{
				script.Write += EventsScriptWrite;
				script.Write -= EventsScriptWrite;
				script.Execute();
			});

			script.Write += EventsScriptWrite;
			script.Execute();
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Execute_ImageProfile()
		{
			MagickScript script = new MagickScript(Files.ImageProfileScript);

			using (MagickImage image = new MagickImage(Files.GraphicsMagickNETIconPNG))
			{
				ColorProfile colorProfile = image.GetColorProfile();
				Assert.IsNull(colorProfile);

				script.Execute(image);

				colorProfile = image.GetColorProfile();

				Assert.IsNotNull(colorProfile);
				Assert.AreEqual(colorProfile.ToByteArray().Length, ColorProfile.SRGB.ToByteArray().Length);
			}
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Execute_Scale()
		{
			MagickScript script = new MagickScript(Files.ScaleScript);

			using (MagickImage image = new MagickImage(Files.ImageMagickJPG))
			{
				script.Execute(image);
				TestScriptScaleResult(image);

				script.Read += ScaleScriptRead;
				using (MagickImage result = script.Execute())
				{
					TestScriptScaleResult(result);
				}
			}
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Execute_Variables()
		{
			MagickScript script = new MagickScript(Files.VariablesScript);
			string[] names = script.Variables.Names.ToArray();
			Assert.AreEqual(2, names.Length);
			Assert.AreEqual("width", names[0]);
			Assert.AreEqual("height", names[1]);

			using (MagickImage image = new MagickImage(Files.GraphicsMagickNETIconPNG))
			{
				ExceptionAssert.Throws<ArgumentException>(delegate()
				{
					script.Execute(image);
				});

				script.Variables["width"] = "test";

				ExceptionAssert.Throws<FormatException>(delegate()
				{
					script.Execute(image);
				});

				script.Variables.Set("width", 100);

				ExceptionAssert.Throws<ArgumentException>(delegate()
				{
					script.Execute(image);
				});

				script.Variables["height"] = "100";
				Assert.AreEqual("100", script.Variables.Get("height"));

				script.Execute(image);

				Assert.AreEqual(100, image.Width);
				Assert.AreEqual(100, image.Height);
			}
		}
		//===========================================================================================
	}
	//==============================================================================================
}
