/*  =========================================================================
    earth - earth implementation

    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of the XXX Project.
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
    =========================================================================
*/

#include "planet.h"

#include "earth.ini"

void earth_init (earth_t *self) {
    assert (self);
    self->size = _EARTH_SIZE;
    satellite_init (&self->satellite);
}


size_t earth_size (earth_t *self) {
    assert (self);
    return self->size;
}


void earth_set_size (earth_t *self, size_t size) {
    assert (self);
    self->size = size;
}


size_t earth_satellite_num_orbits (earth_t *self) {
    assert (self);
    return satellite_num_orbits (&self->satellite);
}
