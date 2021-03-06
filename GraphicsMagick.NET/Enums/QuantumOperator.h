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
	/// Specifies the quantum operator.
	///</summary>
	public enum class QuantumOperator
	{
		Undefined = Magick::UndefinedQuantumOp,
		Add = Magick::AddQuantumOp,
		And = Magick::AndQuantumOp,
		Divide = Magick::DivideQuantumOp,
		Max = Magick::MaxQuantumOp,
		Min = Magick::MinQuantumOp,
		Multiply = Magick::MultiplyQuantumOp,
		Or = Magick::OrQuantumOp,
		Subtract = Magick::SubtractQuantumOp,
		Xor = Magick::XorQuantumOp,
		Pow = Magick::PowQuantumOp,
		Log = Magick::LogQuantumOp,
		Threshold = Magick::ThresholdQuantumOp,
		ThresholdBlack = Magick::ThresholdBlackQuantumOp,
		ThresholdWhite = Magick::ThresholdWhiteQuantumOp,
	};
	//==============================================================================================
}