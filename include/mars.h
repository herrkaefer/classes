/*  =========================================================================
    mars - mars header

    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of the XXX Project.
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
    =========================================================================
*/

#ifndef __MARS_H_INCLUDED__
#define __MARS_H_INCLUDED__

#ifdef __cplusplus
extern "C" {
#endif

// ---------------------------------------------------------------------------
// For each parameter essential to object creation and initialization:
// 1. Define default parameter which can be overrided by user defined value in
//    corresponding ini file.
// 2. Typecast it to inner representation prefixed by a underscore
// 3. Perform static assertion to verify the value

#ifndef MARS_NUM_SATELLITES
#define MARS_NUM_SATELLITES 3
#endif
#define _MARS_NUM_SATELLITES (size_t) MARS_NUM_SATELLITES
ct_assert (_MARS_NUM_SATELLITES > 0);

#ifndef MARS_MASS
#define MARS_MASS 5
#endif
#define _MARS_MASS (double) MARS_MASS
ct_assert (_MARS_MASS >= 0 && _MARS_MASS <= 900);

// ---------------------------------------------------------------------------

// Data structure of mars object
typedef struct {
    double mass;
    size_t num_satellites;
    satellite_t satellites[_MARS_NUM_SATELLITES];
} mars_t;

// Initialize mars object
void mars_init (mars_t *self);

// Get number of satellites
size_t mars_num_satellites (mars_t *self);

// Get parameter c
double mars_mass (mars_t *self);

#ifdef __cplusplus
}
#endif

#endif
