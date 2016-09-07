/*  =========================================================================
    buffer - buffer
    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of the N-Body Simulation Project.
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
    =========================================================================
*/

#ifndef __BUFFER_H_INCLUDED__
#define __BUFFER_H_INCLUDED__

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    double data[(size_t)BUFFER_SIZE];
    size_t size;
    double param_a;
    double param_b;
} buffer_t;

// Initialize buffer object
void buffer_init (buffer_t *self);

// Get buffer size
size_t buffer_size (buffer_t *self);

// Get parameter a
double buffer_param_a (buffer_t *self);

// Set parameter a
void buffer_set_param_a (buffer_t *self, double value);

// Get parameter b
double buffer_param_b (buffer_t *self);

// Set parameter b
void buffer_set_param_b (buffer_t *self, double value);

// Self test
void buffer_test (void);

#ifdef __cplusplus
}
#endif

#endif
