/*  =========================================================================
    selftest.c - run selftests
    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of the XXX Project.
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
    =========================================================================
*/

#include "classes.h"


typedef struct {
    const char *testname;
    void (*test) (void);
} test_item_t;

static test_item_t all_tests [] = {
    { "buffer", buffer_test },
    { "cluster", cluster_test },
    {0, 0}          //  Sentinel
};


//  Run all tests
static void test_runall () {
    test_item_t *item;
    printf ("Running selftests...\n");
    for (item = all_tests; item->test; item++)
        item->test ();

    printf ("Tests passed OK\n");
}


int main (int argc, char **argv) {
    test_runall ();
    return 0;
}
