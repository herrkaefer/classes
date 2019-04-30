/*  =========================================================================
    mars - mars implementation

    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of the XXX Project.
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
    =========================================================================
*/

#include "planet.h"

#include "mars.ini"

void mars_init (mars_t *self) {
    assert (self);
    self->mass = _MARS_MASS;
    satellite_init (&self->satellite);
}


double mars_mass (mars_t *self) {
    assert (self);
    return self->mass;
}


size_t mars_satellite_num_orbits (mars_t *self) {
    return satellite_num_orbits (&self->satellite);
}
