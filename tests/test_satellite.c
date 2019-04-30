/*  =========================================================================
    test_satellite.c - satellite test

    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of the XXX Project.
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
    =========================================================================
*/

#include "planet.h"


void test_satellite () {
    satellite_t satellite;
    satellite_init (&satellite);
    printf ("satellite mass: %f\n", satellite_mass (&satellite));
    satellite_set_mass (&satellite, 500.0);
    printf ("satellite mass: %f\n", satellite_mass (&satellite));
    printf ("Satellite orbit number: %zu\n",
            satellite_num_orbits (&satellite));
}
