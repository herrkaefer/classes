/*  =========================================================================
    mars - mars implementation

    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of the XXX Project.
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
    =========================================================================
*/

#include "classes.h"


void mars_init (mars_t *self) {
    assert (self);
    self->mass = _MARS_MASS;
    self->num_satellites = _MARS_NUM_SATELLITES;
    memset(self->satellites, 0, self->num_satellites * sizeof (satellite_t));
}


size_t mars_num_satellites (mars_t *self) {
    assert (self);
    return self->num_satellites;
}


double mars_mass (mars_t *self) {
    assert (self);
    return self->mass;
}
