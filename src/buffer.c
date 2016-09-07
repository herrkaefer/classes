/*  =========================================================================
    buffer - buffer
    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of the N-Body Simulation Project.
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
    =========================================================================
*/

#include "classes.h"

// ---------------------------------------------------------------------------
// Default parameters

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 8
#endif
ct_assert ((size_t) BUFFER_SIZE <= 200);

#ifndef BUFFER_PARAM_A
#define BUFFER_PARAM_A 2.0
#endif
ct_assert ((double) BUFFER_PARAM_A > 1.0);

#ifndef BUFFER_PARAM_B
#define BUFFER_PARAM_B 7.0
#endif
ct_assert ((double) BUFFER_PARAM_B < 10.0);

// ---------------------------------------------------------------------------

void buffer_init (buffer_t *self) {
    assert (self);
    memset (self, 0, BUFFER_SIZE * sizeof (double));
    self->size = (size_t) BUFFER_SIZE;
    self->param_a = (double) BUFFER_PARAM_A;
    self->param_b = (double) BUFFER_PARAM_B;
}


size_t buffer_size (buffer_t *self) {
    assert (self);
    return self->size;
}


double buffer_param_a (buffer_t *self) {
    assert (self);
    return self->param_a;
}


void buffer_set_param_a (buffer_t *self, double value) {
    assert (self);
    self->param_a = value;
}


double buffer_param_b (buffer_t *self) {
    assert (self);
    return self->param_b;
}


void buffer_set_param_b (buffer_t *self, double value) {
    assert (self);
    self->param_b = value;
}


void buffer_test ()
{
    printf (" * buffer:\n");

    buffer_t buf;
    buffer_init (&buf);
    printf ("buffer size: %zu\n", buffer_size (&buf));

    printf ("param_a: %.3f\n", buffer_param_a (&buf));
    buffer_set_param_a (&buf, 10.0);
    printf ("param_a: %.3f\n", buffer_param_a (&buf));
    printf ("OK\n");
}
