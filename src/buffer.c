/*  =========================================================================
    buffer - buffer
    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of the XXX Project.
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
    =========================================================================
*/

#include "classes.h"


void buffer_init (buffer_t *self) {
    assert (self);
    memset (self, 0, _BUFFER_SIZE * sizeof (double));
    self->size = _BUFFER_SIZE;
    self->param_a = _BUFFER_PARAM_A;
    self->param_b = _BUFFER_PARAM_B;
}


size_t buffer_size (buffer_t *self) {
    assert (self);
    return self->size;
}


int buffer_param_a (buffer_t *self) {
    assert (self);
    return self->param_a;
}


void buffer_set_param_a (buffer_t *self, int value) {
    assert (self);
    self->param_a = value;
}


double buffer_param_b (buffer_t *self) {
    assert (self);
    return self->param_b;
}


void buffer_push (buffer_t *self, double value) {
    assert (self);
    // ...
}


void buffer_sqrt (buffer_t *self, double *output) {
    assert (self);
    assert (output);
    for (size_t idx = 0; idx < self->size; idx++)
        output[idx] = sqrt (self->data[idx]);
}


void buffer_test ()
{
    printf (" * buffer:\n");

    buffer_t buf;
    buffer_init (&buf);
    printf ("buffer size: %zu\n", buffer_size (&buf));

    printf ("param_a: %d\n", buffer_param_a (&buf));
    // buffer_set_param_a (&buf, 10.0);
    printf ("param_a: %d\n", buffer_param_a (&buf));
    printf ("OK\n");
}
