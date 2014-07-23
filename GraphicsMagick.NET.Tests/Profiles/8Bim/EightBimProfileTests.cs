﻿//=================================================================================================
// Copyright 2014 Dirk Lemstra <https://graphicsmagick.codeplex.com/>
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

using System.Linq;
using System.Xml.Linq;
using System.Xml.XPath;
using GraphicsMagick;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace GraphicsMagick.NET.Tests
{
	//==============================================================================================
	[TestClass]
	public class EightBimProfileTests
	{
		//===========================================================================================
		private const string _Category = "EightBimProfile";
		//===========================================================================================
		private static void TestProfile(EightBimProfile profile)
		{
			Assert.IsNotNull(profile);

			Assert.AreEqual(2, profile.ClippingPaths.Count());

			IXPathNavigable first = profile.ClippingPaths.First();
			XDocument doc = XDocument.Load(first.CreateNavigator().ReadSubtree());

			Assert.AreEqual(@"<svg width=""200"" height=""200""><g><path fill=""#00000000"" stroke=""#00000000"" stroke-width=""0"" stroke-antialiasing=""false"" d=""M 45 58&#xA;L 80 124&#xA;L 147 147&#xA;L 45 147&#xA;L 45 58 Z&#xA;"" /></g></svg>", doc.ToString(SaveOptions.DisableFormatting));

			IXPathNavigable second = profile.ClippingPaths.Skip(1).First();
			doc = XDocument.Load(second.CreateNavigator().ReadSubtree());

			Assert.AreEqual(@"<svg width=""200"" height=""200""><g><path fill=""#00000000"" stroke=""#00000000"" stroke-width=""0"" stroke-antialiasing=""false"" d=""M 52 144&#xA;L 130 57&#xA;L 157 121&#xA;L 131 106&#xA;L 52 144 Z&#xA;"" /></g></svg>", doc.ToString(SaveOptions.DisableFormatting));
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_ClippingPaths()
		{
			using (MagickImage image = new MagickImage(Files.EightBimTIF))
			{
				EightBimProfile profile = image.Get8BimProfile();
				TestProfile(profile);
				string test = System.Text.Encoding.Default.GetString(profile.ToByteArray());

				using (MagickImage emptyImage = new MagickImage(Files.EightBimTIF))
				{
					emptyImage.Strip();
					Assert.IsNull(emptyImage.Get8BimProfile());
					emptyImage.AddProfile(profile);

					profile = emptyImage.Get8BimProfile();
					TestProfile(profile);
				}
			}
		}
		//===========================================================================================
	}
	//==============================================================================================
}