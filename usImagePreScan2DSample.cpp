/****************************************************************************
 *
 * This file is part of the UsTk software.
 * Copyright (C) 2014 by Inria. All rights reserved.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License ("GPL") as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 * See the file COPYING at the root directory of this source
 * distribution for additional information about the GNU GPL.
 *
 * This software was developed at:
 * INRIA Rennes - Bretagne Atlantique
 * Campus Universitaire de Beaulieu
 * 35042 Rennes Cedex
 * France
 * http://www.irisa.fr/lagadic
 *
 * If you have questions regarding the use of this file, please contact the
 * authors at Alexandre.Krupa@inria.fr
 *
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 *
 * Authors:
 * Pierre Chatelain
 *
 *****************************************************************************/

#include <visp3/ustk_core/usImagePreScan2D.h>

int main()
{
  // 2D pre-scan image settings
  unsigned int BModeSampleNumber = 200;
  double transducerRadius = 0.007;
  double scanLinePitch = 0.04;
  unsigned int scanLineNumber = 256;
  bool isTransducerConvex = true;
  double axialResolution = 0.005;

  vpImage<unsigned char> I(BModeSampleNumber, scanLineNumber);
  usImagePreScan2D<unsigned char> preScan2d;
  preScan2d.setTransducerRadius(transducerRadius);
  preScan2d.setScanLinePitch(scanLinePitch);
  preScan2d.setScanLineNumber(scanLineNumber);
  preScan2d.setTransducerConvexity(isTransducerConvex);
  preScan2d.setAxialResolution(axialResolution);
  preScan2d.setData(I);
}
