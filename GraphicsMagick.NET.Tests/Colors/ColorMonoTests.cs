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

using System.Drawing;
using GraphicsMagick;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace GraphicsMagick.NET.Tests
{
	//==============================================================================================
	[TestClass]
	public class ColorMonoTests : ColorBaseTests<ColorMono>
	{
		//===========================================================================================
		private const string _Category = "ColorMono";
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_IComparable()
		{
			ColorMono first = new ColorMono(true);

			Test_IComparable(first);

			ColorMono second = new ColorMono(false);

			Test_IComparable_FirstLower(first, second);

			second = new ColorMono(true);

			Test_IComparable_Equal(first, second);
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_IEquatable()
		{
			ColorMono first = new ColorMono(true);

			Test_IEquatable_NullAndSelf(first);

			ColorMono second = new ColorMono(true);

			Test_IEquatable_Equal(first, second);

			second = new ColorMono(false);

			Test_IEquatable_NotEqual(first, second);
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Color()
		{
			ColorMono mono = new ColorMono(false);

			MagickColor white = new MagickColor("#fff");
			Assert.AreEqual(white, mono.ToMagickColor());
			ColorAssert.AreEqual(Color.White, mono.ToMagickColor());

			mono = new ColorMono(true);

			MagickColor black = new MagickColor("#000");
			Assert.AreEqual(black, mono.ToMagickColor());
			ColorAssert.AreEqual(Color.Black, mono.ToMagickColor());
		}
		//===========================================================================================
	}
	//==============================================================================================
}
