/*  =========================================================================
    satellite - satellite header

    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of the XXX Project.
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
    =========================================================================
*/

#ifndef __SATELLITE_H_INCLUDED__
#define __SATELLITE_H_INCLUDED__

#ifdef __cplusplus
extern "C" {
#endif

// ---------------------------------------------------------------------------
// For each parameter essential to object creation and initialization:
// 1. Define default parameter which can be overrided by user defined value in
//    corresponding ini file.
// 2. Typecast it to inner representation prefixed by a underscore
// 3. Perform static assertion to verify the value

#ifndef SATELLITE_MASS
#define SATELLITE_MASS 100.0
#endif
#define _SATELLITE_MASS (double) SATELLITE_MASS
ct_assert (_SATELLITE_MASS <= 100000);

#ifndef SATELLITE_NUM_ORBITS
#define SATELLITE_NUM_ORBITS 100.0
#endif
#define _SATELLITE_NUM_ORBITS (size_t) SATELLITE_NUM_ORBITS
ct_assert (0 < _SATELLITE_NUM_ORBITS < 10);

// ---------------------------------------------------------------------------

// Data structure of satellite object
typedef struct {
    double mass;
    int orbits[_SATELLITE_NUM_ORBITS];
} satellite_t;

// Initialize satellite object
void satellite_init (satellite_t *self);

// Get mass
double satellite_mass (satellite_t *self);

// Set mass
void satellite_set_mass (satellite_t *self, double mass);

// Change track
void satellite_change_orbit (satellite_t *self, int orbit);

#ifdef __cplusplus
}
#endif

#endif
