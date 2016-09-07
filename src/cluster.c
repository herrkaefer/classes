/*  =========================================================================
    cluster - cluster
    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of the XXX Project.
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
    =========================================================================
*/

#include "classes.h"


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

void cluster_init (cluster_t *self) {
    assert (self);
    self->num_channels = _CLUSTER_NUM_CHANNELS;
    for (size_t ch = 0; ch < self->num_channels; ch++)
        buffer_init (&self->channels[ch]);
    self->param_c = _CLUSTER_PARAM_C;
}


size_t cluster_num_channels (cluster_t *self) {
    assert (self);
    return self->num_channels;
}


int cluster_param_c (cluster_t *self) {
    assert (self);
    return self->param_c;
}


void cluster_set_param_c (cluster_t *self, int value) {
    assert (self);
    self->param_c = value;
}


void cluster_test ()
{
    printf (" * cluster:\n");

    cluster_t cluster;
    cluster_init (&cluster);
    assert (cluster_num_channels (&cluster) == 4);

    printf ("param_c: %d\n", cluster_param_c (&cluster));
    cluster_set_param_c (&cluster, 30.0);
    printf ("param_c: %d\n", cluster_param_c (&cluster));
    printf ("OK\n");
}
