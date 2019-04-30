/*  =========================================================================
    test.c - run selftests

    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of the XXX Project.
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
    =========================================================================
*/

#include "planet.h"


void test_satellite ();
void test_earth ();
void test_mars ();


typedef struct {
    const char *testname;
    void (*test) (void);
} test_item_t;


static test_item_t all_tests [] = {
    { "Satellite", test_satellite },
    { "Earth", test_earth },
    { "Mars", test_mars },
    {0, 0} // Sentinel
};


// Run all tests
static void test_all () {
    test_item_t *item;
    printf ("Running selftests...\n");
    for (item = all_tests; item->test; item++) {
        printf ("\n*** %s ***\n", item->testname);
        item->test ();
        printf ("OK\n");
    }
    printf ("\nAll tests passed OK\n");
}


int main () {
    test_all ();
    return 0;
}
