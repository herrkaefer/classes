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
// Paramters to create buffer object

// Public parameters can be overrided by user definations
#ifndef BUFFER_SIZE
#define BUFFER_SIZE 8
#endif

// Private parameters
#define BUFFER_PARAM_A 2.0
#define BUFFER_PARAM_B 7.0

// ---------------------------------------------------------------------------
// struct _buffer_t {
//     double data[BUFFER_SIZE];
//     size_t size;
//     double param_a;
//     double param_b;
// };


void buffer_init (buffer_t *self) {
    assert (self);

    // Check that if public parameters are properly defined
    assert ((size_t) BUFFER_SIZE > 0);

    memset (self, 0, BUFFER_SIZE * sizeof (double));
    self->size = (size_t) BUFFER_SIZE;
    self->param_a = BUFFER_PARAM_A;
    self->param_b = BUFFER_PARAM_B;
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
    assert (buffer_size (&buf) == 16);

    printf ("param_a: %.3f\n", buffer_param_a (&buf));
    buffer_set_param_a (&buf, 10.0);
    printf ("param_a: %.3f\n", buffer_param_a (&buf));
    printf ("OK\n");
}
