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
using System;
using System.Collections;
using System.IO;
using System.IO.Compression;
using System.Reflection;
using Fasterflect;

namespace GraphicsMagick
{
	//==============================================================================================
	internal sealed class AssemblyHelper
	{
		//===========================================================================================
		private static readonly Assembly _Assembly = LoadAssembly();
		private static Exception _LoadException;
		//===========================================================================================
		private static Assembly Assembly
		{
			get
			{
				if (_Assembly == null)
				{
					if (_LoadException == null)
						throw new InvalidOperationException("Failed to load embedded assembly.");
					else
						throw new InvalidOperationException("Failed to load embedded assembly: " + _LoadException.Message, _LoadException);
				}

				return _Assembly;
			}
		}
		//===========================================================================================
		private static string CreateCacheDirectory()
		{
			AssemblyFileVersionAttribute version = (AssemblyFileVersionAttribute)typeof(AssemblyHelper).Assembly.GetCustomAttributes(typeof(AssemblyFileVersionAttribute), false)[0];

			string path = Path.Combine(GraphicsMagickAnyCPU.CacheDirectory, "GraphicsMagick.NET." + version.Version);
			if (!Directory.Exists(path))
				Directory.CreateDirectory(path);

			return path;
		}
		//===========================================================================================
		private static Assembly LoadAssembly()
		{
#if Q8
			string name = "GraphicsMagick.NET-Q8-" + (Environment.Is64BitProcess ? "x64" : "x86");
			string resourcePrefix = "GraphicsMagick.Resources.ReleaseQ8.";
#elif Q16
			string name = "GraphicsMagick.NET-Q16-" + (Environment.Is64BitProcess ? "x64" : "x86");
			string resourcePrefix = "GraphicsMagick.Resources.ReleaseQ16.";
#else
#error Not implemented!
#endif

			try
			{
				string cacheDirectory = CreateCacheDirectory();

				string tempFile = Path.Combine(cacheDirectory, name + ".dll");
				string resourceName = resourcePrefix + "GraphicsMagick.NET-" + (Environment.Is64BitProcess ? "x64" : "x86") + ".gz";

				if (!File.Exists(tempFile))
					WriteAssembly(resourceName, tempFile);

				WriteXmlResources(cacheDirectory);

				Assembly assembly = Assembly.LoadFile(tempFile);

				Type graphicsMagickNET = assembly.GetType("GraphicsMagick.GraphicsMagickNET");
				graphicsMagickNET.CallMethod("Initialize", new Type[] { typeof(String) }, cacheDirectory);

				return assembly;
			}
			catch (Exception exception)
			{
				_LoadException = exception;
				return null;
			}
		}
		//===========================================================================================
		private static void WriteAssembly(string resourceName, string outputFile)
		{
			using (Stream stream = typeof(MagickImage).Assembly.GetManifestResourceStream(resourceName))
			{
				using (GZipStream compressedStream = new GZipStream(stream, CompressionMode.Decompress, false))
				{
					using (FileStream fileStream = File.Open(outputFile, FileMode.CreateNew))
					{
						compressedStream.CopyTo(fileStream);
					}
				}
			}
		}
		//===========================================================================================
		private static void WriteXmlResources(string cacheDirectory)
		{
			string[] xmlFiles = 
			{
				"colors.mgk", "delegates.mgk", "modules.mgk", "type.mgk", "type-ghostscript.mgk"
			};

			foreach (string xmlFile in xmlFiles)
			{
				string outputFile = Path.Combine(cacheDirectory, xmlFile);
				if (File.Exists(outputFile))
					continue;

				string resourceName = "GraphicsMagick.Resources.xml." + xmlFile;
				using (Stream stream = typeof(MagickImage).Assembly.GetManifestResourceStream(resourceName))
				{
					using (FileStream fileStream = File.Open(outputFile, FileMode.CreateNew))
					{
						stream.CopyTo(fileStream);
					}
				}
			}
		}
		//===========================================================================================
		public static Type GetType(string name)
		{
			return Assembly.GetType(name);
		}
		//===========================================================================================
		public static object CreateInstance(Type type)
		{
			try
			{
				return type.CreateInstance();
			}
			catch (Exception exception)
			{
				throw ExceptionHelper.Create(exception);
			}
		}
		//===========================================================================================
		public static object CreateInstance(Type type, Type[] parameterTypes, params object[] arguments)
		{
			try
			{
				return type.CreateInstance(parameterTypes, arguments);
			}
			catch (Exception exception)
			{
				throw ExceptionHelper.Create(exception);
			}
		}
		//===========================================================================================
	}
	//==============================================================================================
}
