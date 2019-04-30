/*  =========================================================================
    satellite - satellite implementation

    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of the XXX Project.
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
    =========================================================================
*/

#include "planet.h"


void satellite_init (satellite_t *self) {
    assert (self);
    self->mass = _SATELLITE_MASS;
    self->num_orbits = _SATELLITE_NUM_ORBITS;
    for (size_t idx = 0; idx < self->num_orbits; idx++)
        self->orbits[idx] = idx;
}


void satellite_set_mass (satellite_t *self, double mass) {
    assert (self);
    self->mass = mass;
}


double satellite_mass (satellite_t *self) {
    assert (self);
    return self->mass;
}


size_t satellite_num_orbits (satellite_t *self) {
    assert (self);
    return self->num_orbits;
}


void satellite_change_orbit (satellite_t *self, int orbit) {
    assert (self);
    // ...
}
