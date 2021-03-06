/* +---------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)               |
   |                          http://www.mrpt.org/                             |
   |                                                                           |
   | Copyright (c) 2005-2015, Individual contributors, see AUTHORS file        |
   | See: http://www.mrpt.org/Authors - All rights reserved.                   |
   | Released under BSD License. See details in http://www.mrpt.org/License    |
   +---------------------------------------------------------------------------+ */

#pragma once

#define _USE_MATH_DEFINES // (For VS to define M_PI, etc. in cmath)

/* ------------------------------------
          Disable some warnings
   ------------------------------------ */
#if defined(_MSC_VER)
	#pragma warning(disable:4786) // (Compiler: Visual C++) Disable warning for too long debug names:
	#pragma warning(disable:4503) // (Compiler: Visual C++ 2010) Disable warning for too long decorated name
	#pragma warning(disable:4702) // (Compiler: Visual C++) Disable warning for unreachable code (I don't know why some of these errors appear in the STANDARD LIBRARY headers with Visual Studio 2003!):
	#pragma warning(disable:4244) // (Compiler: Visual C++) Conversion double->float
	#pragma warning(disable:4305)
	#pragma warning(disable:4308) // Disable warning for Eigen3 libs: negative integral converted to unsigned
	#pragma warning(disable:4267)
	#pragma warning(disable:4290) // Visual C++ does not implement decl. specifiers: throw(A,B,...)
	#pragma warning(disable:4251) // Visual C++ 2003+ warnings on STL classes when exporting to DLL...
	#pragma warning(disable:4275)
	#pragma warning(disable:4308) // Disable for Eigen: negative integral constant converted to unsigned int
	#if (_MSC_VER >= 1400 )
		// MS believes they have the right to deprecate functions in the C++ Standard STL... disable their warnings:
		#ifndef _SCL_SECURE_NO_WARNINGS
			#define _SCL_SECURE_NO_WARNINGS
		#endif
		//#pragma warning(disable:4996)  // Deprecated functions
		// For the new secure library in VC++8
		#if !defined(_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES)
			#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 1
		#endif
	#endif
#endif

// Avoid conflicting declaration of max macro in windows headers
#if defined(MRPT_OS_WINDOWS) && !defined(NOMINMAX)
#	define NOMINMAX
#	ifdef max
#		undef	max
#		undef	min
#	endif
#endif
