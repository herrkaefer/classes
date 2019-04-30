/*  =========================================================================
    classes - project public header

    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of the XXX Project.
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
    =========================================================================
*/

#ifndef __MYPROJECT_H_INCLUDED__
#define __MYPROJECT_H_INCLUDED__

// Standard ANSI include files.
#include <ctype.h>
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <time.h>
#include <errno.h>
#include <float.h>
#include <math.h>
#include <signal.h>
#include <setjmp.h>
#include <assert.h>

// Windows MSVS doesn't have stdbool
#if (defined (_MSC_VER))
#   if (!defined (__cplusplus) && (!defined (true)))
#       define true 1
#       define false 0
        typedef char bool;
#   endif
#else
#   include <stdbool.h>
#endif

// Compile time assertion
#define ct_assert3(COND,MSG) typedef char static_assertion_failed_at_line_##MSG[(!!(COND))*2-1]
#define ct_assert2(COND,MSG) ct_assert3(COND,MSG)
#define ct_assert(COND) ct_assert2(COND,__LINE__)

// External API
// #include "../include/xxx.h"

// Internal API
// Note that configuration file should be included before its corresponding
// class header.
#include "satellite.ini"
#include "satellite.h"
#include "earth.ini"
#include "earth.h"
#include "mars.ini"
#include "mars.h"

#endif
