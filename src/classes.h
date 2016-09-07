/*  =========================================================================
    classes - project private header
    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of the XXX Project.
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
    =========================================================================
*/

#ifndef __CLASSES_H_INCLUDED__
#define __CLASSES_H_INCLUDED__

// External dependencies
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>

// Compile time assertion
#define ct_assert3(COND,MSG) typedef char static_assertion_failed_at_line_##MSG[(!!(COND))*2-1]
#define ct_assert2(COND,MSG) ct_assert3(COND,MSG)
#define ct_assert(COND) ct_assert2(COND,__LINE__)

// External API
// #include "../include/nbs.h"

// Internal API
#include "buffer.cfg"
#include "buffer.h"
#include "cluster.cfg"
#include "cluster.h"

#endif
