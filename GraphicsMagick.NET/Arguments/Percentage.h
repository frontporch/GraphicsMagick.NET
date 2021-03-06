//=================================================================================================
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
#pragma once

#include "Stdafx.h"

namespace GraphicsMagick
{
	///=============================================================================================
	///<summary>
	/// Represents a percentage value.
	///</summary>
	public value struct Percentage sealed : IEquatable<Percentage>
	{
		//===========================================================================================
	private:
		//===========================================================================================
		double _Value;
		//===========================================================================================
	internal:
		//===========================================================================================
		static explicit operator Magick::Quantum(Percentage percentage);
		//===========================================================================================
		static explicit operator int(Percentage percentage);
		//===========================================================================================
		static Percentage FromQuantum(double value);
		//===========================================================================================
		Magick::Quantum ToQuantum();
		//===========================================================================================
	public:
		///==========================================================================================
		///<summary>
		/// Initializes a new instance of the Percentage class using the specified value.
		/// (0% = 0.0, 100% = 100.0)
		///</summary>
		///<param name="value">The value (0% = 0.0, 100% = 100.0)</param>
		Percentage(double value);
		///==========================================================================================
		///<summary>
		/// Initializes a new instance of the Percentage class using the specified value.
		/// (0% = 0, 100% = 100)
		///</summary>
		///<param name="value">The value (0% = 0, 100% = 100)</param>
		Percentage(int value);
		//===========================================================================================
		static bool operator == (Percentage left, Percentage right);
		//===========================================================================================
		static bool operator != (Percentage left, Percentage right);
		//===========================================================================================
		static operator Percentage(double value);
		//===========================================================================================
		static explicit operator Percentage(int value);
		//===========================================================================================
		static explicit operator double(Percentage percentage);
		///==========================================================================================
		///<summary>
		/// Determines whether the specified object is equal to the current percentage.
		///</summary>
		///<param name="obj">The object to compare this percentage with.</param>
		virtual bool Equals(Object^ obj) override;
		///==========================================================================================
		///<summary>
		/// Determines whether the specified percentage is equal to the current percentage.
		///</summary>
		///<param name="other">The percentage to compare this percentage with.</param>
		virtual bool Equals(Percentage other);
		///==========================================================================================
		///<summary>
		/// Servers as a hash of this type.
		///</summary>
		virtual int GetHashCode() override;
		///==========================================================================================
		///<summary>
		/// Returns a string that represents the current percentage.
		///</summary>
		virtual String^ ToString() override;
		//===========================================================================================
	};
	//==============================================================================================
}