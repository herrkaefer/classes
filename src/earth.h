/*  =========================================================================
    earth - earth header

    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of the XXX Project.
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
    =========================================================================
*/

#ifndef __EARTH_H_INCLUDED__
#define __EARTH_H_INCLUDED__

#ifdef __cplusplus
extern "C" {
#endif

// ---------------------------------------------------------------------------
// For each parameter essential to object creation and initialization:
// 1. Define default parameter which can be overrided by user defined value in
//    corresponding ini file.
// 2. Typecast it to inner representation prefixed by a underscore
// 3. Perform static assertion to verify the value

#ifndef EARTH_SIZE
#define EARTH_SIZE 32
#endif
#define _EARTH_SIZE (size_t) EARTH_SIZE
ct_assert (_EARTH_SIZE <= 1024);

#ifndef EARTH_NUM_SATELLITES
#define EARTH_NUM_SATELLITES 2
#endif
#define _EARTH_NUM_SATELLITES (size_t) EARTH_NUM_SATELLITES
ct_assert (_EARTH_NUM_SATELLITES <= 3);

// ---------------------------------------------------------------------------

// Data structure of earth object
typedef struct {
    size_t size;
    satellite_t satellite;
} earth_t;

// Initialize earth object
void earth_init (earth_t *self);

// Get earth size
size_t earth_size (earth_t *self);

// Set earth size
void earth_set_size (earth_t *self, size_t size);

// Get satellite orbit number
size_t earth_satellite_num_orbits (earth_t *self);

#ifdef __cplusplus
}
#endif

#endif
