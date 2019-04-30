/*  =========================================================================
    earth - earth implementation

    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of the XXX Project.
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
    =========================================================================
*/

#include "classes.h"


void earth_init (earth_t *self) {
    assert (self);
    self->size = _EARTH_SIZE;
    self->num_satellites = _EARTH_NUM_SATELLITES;
    memset (self->satellites, 0, _EARTH_NUM_SATELLITES * sizeof (satellite_t));
}


size_t earth_size (earth_t *self) {
    assert (self);
    return self->size;
}


void earth_set_size (earth_t *self, size_t size) {
    assert (self);
    self->size = size;
}


size_t earth_num_satellites (earth_t *self) {
    assert (self);
    return self->num_satellites;
}
