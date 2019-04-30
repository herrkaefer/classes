/*  =========================================================================
    test_mars.c - mars test

    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of the XXX Project.
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
    =========================================================================
*/

#include "planet.h"


void test_mars () {
    mars_t mars;
    mars_init (&mars);
    assert (mars_num_satellites (&mars) == 2);
}
