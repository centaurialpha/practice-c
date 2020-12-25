#include <stdio.h>
#include "test.h"
#include "llist.h"

int main()
{
    run_all_tests();

    TList *l = llist_new();
    llist_append(l, 1);
    llist_append(l, 2);
    llist_append(l, 3);
    llist_insert(l, 1, 20);
    llist_append(l, 3);
    llist_append(l, 3);
    llist_insert(l, 4, 10);

    llist_debug(l);

    llist_destroy(l);

    return 0;
}
