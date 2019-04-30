/*  =========================================================================
    test_earth.c - earth test

    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of the XXX Project.
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
    =========================================================================
*/

#include "planet.h"


void test_earth () {
    earth_t earth;
    earth_init (&earth);
    printf ("Earth satellite orbit number: %zu\n",
            earth_satellite_num_orbits (&earth));
    printf ("earth size: %zu\n", earth_size (&earth));
    size_t new_size = 256;
    earth_set_size (&earth, new_size);
    assert (earth_size(&earth) == new_size);
}
