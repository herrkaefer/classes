/*  =========================================================================
    cluster - cluster
    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of the XXX Project.
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
    =========================================================================
*/

#ifndef __CLUSTER_H_INCLUDED__
#define __CLUSTER_H_INCLUDED__

#ifdef __cplusplus
extern "C" {
#endif

// ---------------------------------------------------------------------------
// For each parameter essential to object creation and initialization:
// 1. Define default parameter which can be overrided by user defined value in cfg file.
// 2. Typecast it to inner representation prefixed by a underscore
// 3. Perform static assertion to verify the value

#ifndef CLUSTER_NUM_CHANNELS
#define CLUSTER_NUM_CHANNELS 3
#endif
#define _CLUSTER_NUM_CHANNELS (size_t) CLUSTER_NUM_CHANNELS
ct_assert (_CLUSTER_NUM_CHANNELS > 0);

#ifndef CLUSTER_PARAM_C
#define CLUSTER_PARAM_C 5
#endif
#define _CLUSTER_PARAM_C (int) CLUSTER_PARAM_C
ct_assert (_CLUSTER_PARAM_C >= 0 && _CLUSTER_PARAM_C <= 9);

// ---------------------------------------------------------------------------

typedef struct {
    size_t num_channels;
    buffer_t channels[_CLUSTER_NUM_CHANNELS];
    int param_c;
} cluster_t;

// Initialize cluster object
void cluster_init (cluster_t *self);

// Get number of channels
size_t cluster_num_channels (cluster_t *self);

// Get parameter c
int cluster_param_c (cluster_t *self);

// Set parameter c
void cluster_set_param_c (cluster_t *self, int value);

// Self test
void cluster_test (void);

#ifdef __cplusplus
}
#endif

#endif
