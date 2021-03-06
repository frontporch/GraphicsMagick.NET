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

using System.IO;

namespace GraphicsMagick.NET.Tests
{
  public static class Files
  {
    private static readonly string _Root = GetRoot();

    private static string GetRoot()
    {
      string directory = Path.GetFullPath(@"..\..\..\");
      if (Directory.Exists(directory + "Images"))
        return directory;

      /* for mstest.exe */
      return Path.GetFullPath(@"..\..\..\..\..\..\");
    }

    public static string Circle
    {
      get
      {
        return _Root + @"Images\Circle.png";
      }
    }

    public static string CollectionScript
    {
      get
      {
        return _Root + @"Script\Collection.msl";
      }
    }

    public static string DrawScript
    {
      get
      {
        return _Root + @"Script\Draw.msl";
      }
    }

    public static string EightBimTIF
    {
      get
      {
        return _Root + @"Images\8Bim.tif";
      }
    }

    public static string EventsScript
    {
      get
      {
        return _Root + @"Script\Events.msl";
      }
    }

    public static string FujiFilmFinePixS1ProJPG
    {
      get
      {
        return _Root + @"Images\FujiFilmFinePixS1Pro.jpg";
      }
    }

    public static string ImageMagickJPG
    {
      get
      {
        return _Root + @"Images\ImageMagick.jpg";
      }
    }

    public static string ImageProfileScript
    {
      get
      {
        return _Root + @"Script\ImageProfile.msl";
      }
    }

    public static string InvalidScript
    {
      get
      {
        return _Root + @"Script\Invalid.msl";
      }
    }

    public static string InvitationTif
    {
      get
      {
        return _Root + @"Images\Invitation.tif";
      }
    }

    public static string GraphicsMagickNETIconPNG
    {
      get
      {
        return _Root + @"Images\GraphicsMagick.NET.icon.png";
      }
    }

    public static string Missing
    {
      get
      {
        return @"C:\Foo\Bar.png";
      }
    }

    public static string RedPNG
    {
      get
      {
        return _Root + @"Images\Red.png";
      }
    }

    public static string Root
    {
      get
      {
        return _Root;
      }
    }


    public static string ScaleScript
    {
      get
      {
        return _Root + @"Script\Scale.msl";
      }
    }

    public static string RoseSparkleGIF
    {
      get
      {
        return _Root + @"Images\RoseSparkle.gif";
      }
    }

    public static string SnakewarePNG
    {
      get
      {
        return _Root + @"Images\Snakeware.png";
      }
    }

    public static string VariablesScript
    {
      get
      {
        return _Root + @"Script\Variables.msl";
      }
    }
  }
}