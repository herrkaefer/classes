/*  =========================================================================
    cluster - cluster
    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of the N-Body Simulation Project.
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
// Public parameters
#define NUM_CHANNELS 4

// ---------------------------------------------------------------------------

// typedef struct _cluster_t cluster_t;

typedef struct {
    size_t num_channels;
    buffer_t channels[NUM_CHANNELS];
    int param_c;
} cluster_t;


// Initialize cluster object
void cluster_init (cluster_t *self);

size_t cluster_num_channels (cluster_t *self);

int cluster_param_c (cluster_t *self);

void cluster_set_param_c (cluster_t *self, int value);

// Self test
void cluster_test (void);

#ifdef __cplusplus
}
#endif

#endif
