/*  =========================================================================
    buffer - buffer
    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of the XXX Project.
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

// ---------------------------------------------------------------------------
// For each parameter essential to object creation and initialization:
// 1. Define default parameter which can be overrided by user defined value in
//    corresponding ini file.
// 2. Typecast it to inner representation prefixed by a underscore
// 3. Perform static assertion to verify the value

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 32
#endif
#define _BUFFER_SIZE (size_t) BUFFER_SIZE
ct_assert (_BUFFER_SIZE <= 1024);

#ifndef BUFFER_PARAM_A
#define BUFFER_PARAM_A 2
#endif
#define _BUFFER_PARAM_A (int) BUFFER_PARAM_A
ct_assert (_BUFFER_PARAM_A <= 3);

#ifndef BUFFER_PARAM_B
#define BUFFER_PARAM_B 7.0
#endif
#define _BUFFER_PARAM_B (double) BUFFER_PARAM_B
ct_assert (_BUFFER_PARAM_B < 10.0);

// ---------------------------------------------------------------------------

// Data structure of buffer object
typedef struct {
    double data[_BUFFER_SIZE];
    size_t size;
    int param_a;
    double param_b;
} buffer_t;

// Initialize buffer object
void buffer_init (buffer_t *self);

// Get buffer size
size_t buffer_size (buffer_t *self);

// Get parameter a
int buffer_param_a (buffer_t *self);

// Set parameter a
void buffer_set_param_a (buffer_t *self, int value);

// Get parameter b
double buffer_param_b (buffer_t *self);

// Push data into buffer
void buffer_push (buffer_t *self, double value);

// Squared root of buffer data.
// Return result in param output.
void buffer_sqrt (buffer_t *self, double *output);

// Self test
void buffer_test (void);

#ifdef __cplusplus
}
#endif

#endif
