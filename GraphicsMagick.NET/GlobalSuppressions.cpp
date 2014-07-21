// This file is used by Code Analysis to maintain 
// CA_GLOBAL_SUPPRESS_MESSAGE macros that are applied to this project.
// Project-level suppressions either have no target or are given 
// a specific target and scoped to a namespace, type, member, etc.
//
// To add a suppression to this file, right-click the message in the 
// Code Analysis results, point to "Suppress Message", and click 
// "In Suppression File".
// You do not need to add suppressions to this file manually.

CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Design", "CA1027:MarkEnumsWithFlags", Scope="type", Target="GraphicsMagick.ColorSpace");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Design", "CA1027:MarkEnumsWithFlags", Scope="type", Target="GraphicsMagick.CompressionMethod");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Design", "CA1027:MarkEnumsWithFlags", Scope="type", Target="GraphicsMagick.FilterType");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Design", "CA1030:UseEventsWhereAppropriate", Scope="member", Target="GraphicsMagick.MagickImage.#Raise(System.Int32)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Design", "CA1024:UsePropertiesWhereAppropriate", Scope="member", Target="GraphicsMagick.MagickImage.#Get8BimProfile()");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Design", "CA1024:UsePropertiesWhereAppropriate", Scope="member", Target="GraphicsMagick.MagickImage.#GetColorProfile()");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Design", "CA1024:UsePropertiesWhereAppropriate", Scope="member", Target="GraphicsMagick.MagickImage.#GetExifProfile()");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Naming", "CA2204:Literals should be spelled correctly", MessageId="PixelStorage", Scope="member", Target="GraphicsMagick.MagickReader.#Read(std.list<Magick::Image,std::allocator<Magick::Image> >*,System.Byte[],GraphicsMagick.MagickReadSettings)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Naming", "CA2204:Literals should be spelled correctly", MessageId="PixelStorage", Scope="member", Target="GraphicsMagick.MagickReader.#Read(std.list<Magick::Image,std::allocator<Magick::Image> >*,System.String,GraphicsMagick.MagickReadSettings)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Naming", "CA1724:TypeNamesShouldNotMatchNamespaces", Scope="type", Target="GraphicsMagick.Channels");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Naming", "CA1726:UsePreferredTerms", MessageId="flag", Scope="member", Target="GraphicsMagick.MagickImage.#SetDefine(GraphicsMagick.MagickFormat,System.String,System.Boolean)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Maintainability", "CA1506:AvoidExcessiveClassCoupling", Scope="type", Target="GraphicsMagick.MagickImage");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Maintainability", "CA1506:AvoidExcessiveClassCoupling", Scope="type", Target="GraphicsMagick.MagickScript");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Maintainability", "CA1502:AvoidExcessiveComplexity", Scope="member", Target="GraphicsMagick.ExifReader.#ConvertValue(GraphicsMagick.ExifDataType,System.Byte[],System.Int32)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Maintainability", "CA1502:AvoidExcessiveComplexity", Scope="member", Target="GraphicsMagick.ExifValue.#Create(GraphicsMagick.ExifTag,System.Object)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Maintainability", "CA1502:AvoidExcessiveComplexity", Scope="member", Target="GraphicsMagick.MagickScript.#ExecuteDrawable(System.Xml.XmlElement,System.Collections.ObjectModel.Collection`1<GraphicsMagick.Drawable>)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Maintainability", "CA1502:AvoidExcessiveComplexity", Scope="member", Target="GraphicsMagick.MagickScript.#ExecuteImage(System.Xml.XmlElement,GraphicsMagick.MagickImage)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Maintainability", "CA1502:AvoidExcessiveComplexity", Scope="member", Target="GraphicsMagick.MagickScript.#ExecutePath(System.Xml.XmlElement,System.Collections.ObjectModel.Collection`1<GraphicsMagick.PathBase>)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Maintainability", "CA1505:AvoidUnmaintainableCode", Scope="member", Target="GraphicsMagick.MagickScript.#ExecuteImage(System.Xml.XmlElement,GraphicsMagick.MagickImage)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1814:PreferJaggedArraysOverMultidimensional", MessageId="Body", Scope="member", Target="GraphicsMagick.DoubleMatrix.#Initialize(System.Int32)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1814:PreferJaggedArraysOverMultidimensional", MessageId="Member", Scope="member", Target="GraphicsMagick.DoubleMatrix.#_Values");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableRectangle.#Initialize(System.Double,System.Double,System.Double,System.Double)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableViewbox.#Initialize(System.Int32,System.Int32,System.Int32,System.Int32)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableAffine>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableArc>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableBezier>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableCircle>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableClipPath>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableColor>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableCompositeImage>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableDashArray>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableDashOffset>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableEllipse>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableFillColor>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableFillOpacity>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableFillRule>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableFont>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableGravity>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableLine>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableMatte>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableMiterLimit>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawablePath>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawablePoint>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawablePointSize>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawablePolygon>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawablePolyline>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawablePopClipPath>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawablePopGraphicContext>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawablePopPattern>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawablePushClipPath>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawablePushGraphicContext>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawablePushPattern>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableRectangle>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableRoundRectangle>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableRotation>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableScaling>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableSkewX>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableSkewY>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableStrokeAntialias>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableStrokeColor>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableStrokeLineCap>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableStrokeLineJoin>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableStrokeOpacity>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableStrokeWidth>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableText>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableTextAntialias>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableTextDecoration>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableTextUnderColor>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableTranslation>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.DrawableWrapper<Magick::DrawableViewbox>.#Value");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.ExifReader.#GetString(System.UInt32)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.ExifReader.#ToByte(System.Byte[])");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.ExifValue.#Initialize(GraphicsMagick.ExifTag,GraphicsMagick.ExifDataType,System.Boolean)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.ExifWriter.#Write<double>(System.Double,System.Byte[],System.Int32)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.ExifWriter.#Write<float>(System.Single,System.Byte[],System.Int32)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.ExifWriter.#Write<int>(System.Int32,System.Byte[],System.Int32)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.ExifWriter.#Write<short>(System.Int16,System.Byte[],System.Int32)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.ExifWriter.#Write<unsigned int>(System.UInt32,System.Byte[],System.Int32)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.MagickImageCollection.#CopyFrom(std.list<Magick::Image,std::allocator<Magick::Image> >*)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.MagickImageCollection.#CreateList(std.list<Magick::Image,std::allocator<Magick::Image> >*)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.MagickImageInfo.#HandleException(GraphicsMagick.MagickException)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.MagickWrapper<Magick::Image>.#!MagickWrapper<Magick::Image>()");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.Marshaller.#Marshal(System.Double[])");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.Pixel.#Initialize(System.Int32,System.Int32,System.UInt16[])");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.Quantum.#Scale(System.UInt16)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode", Scope="member", Target="GraphicsMagick.Throw.#FormatMessage(System.String,System.Object[])");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields", Scope="member", Target="GraphicsMagick.ExifWriter.#_StartIndex");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1819:PropertiesShouldNotReturnArrays", Scope="member", Target="GraphicsMagick.ImageProfile.#Data");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Performance", "CA1819:PropertiesShouldNotReturnArrays", Scope="member", Target="GraphicsMagick.MagickImage.#StrokeDashArray");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Usage", "CA2202:Do not dispose objects multiple times", Scope="member", Target="GraphicsMagick.MagickScript.#Initialize(System.Xml.XPath.XPathNavigator)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Usage", "CA2233:OperationsShouldNotOverflow", MessageId="order-1", Scope="member", Target="GraphicsMagick.ColorMatrix.#.ctor(System.Int32)");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Usage", "CA2225:OperatorOverloadsHaveNamedAlternates", Scope="member", Target="GraphicsMagick.MagickGeometry.#op_Explicit(System.Drawing.Rectangle):GraphicsMagick.MagickGeometry");
CA_GLOBAL_SUPPRESS_MESSAGE("Microsoft.Usage", "CA2225:OperatorOverloadsHaveNamedAlternates", Scope="member", Target="GraphicsMagick.MagickGeometry.#op_Explicit(System.String):GraphicsMagick.MagickGeometry");
