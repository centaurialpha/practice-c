#include "test.h"
#include "llist.h"

void run_all_tests()
{
    test_len();
}

void test_len()
{
    TList *l = llist_new();

    assert(llist_len(l) == 0);

    llist_append(l, 1);
    llist_append(l, -1);
    llist_append(l, 3);

    assert(llist_len(l) == 3);
}
