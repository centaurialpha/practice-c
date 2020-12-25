#include "test.h"
#include "llist.h"

void run_all_tests()
{
    test_len();
    test_append();
    test_prepend();
    test_insert();
    test_item_exist();
    test_index();
}

void test_len()
{
    TList *l = llist_new();

    assert(llist_len(l) == 0);

    llist_append(l, 1);
    llist_append(l, -1);
    llist_append(l, 3);

    assert(llist_len(l) == 3);

    llist_destroy(l);
}

void test_append()
{
    TList *l = llist_new();

    llist_append(l, 20);
    llist_append(l, 30);

    assert(llist_index(l, 30) == 1);
    assert(llist_index(l, 20) == 0);
    assert(llist_len(l) == 2);

    llist_destroy(l);
}

void test_prepend()
{
    TList *l = llist_new();

    llist_append(l, 1);
    assert(llist_index(l, 1) == 0);
    assert(llist_len(l) == 1);

    llist_prepend(l, 0);
    llist_append(l, 10);
    llist_append(l, 14);
    assert(llist_len(l) == 4);
    assert(llist_index(l, 1) == 1);

    llist_append(l, 12);
    llist_prepend(l, 4);

    assert(llist_len(l) == 6);
    assert(llist_index(l, 1) == 2);
    assert(llist_index(l, 4) == 0);

    llist_destroy(l);
}

void test_insert()
{
    TList *l = llist_new();
    llist_append(l, 20);
    llist_append(l, 30);
    llist_prepend(l, 0);

    assert(llist_len(l) == 3);
    assert(llist_index(l, 30) == 2);
    llist_insert(l, 1, 40);

    assert(llist_len(l) == 4);
    assert(llist_index(l, 30) == 3);

    llist_destroy(l);
}

void test_item_exist()
{
    TList *l = llist_new();

    llist_append(l, 1);
    llist_append(l, 100);
    llist_append(l, 10);

    assert(llist_item_exist(l, 100) == 0);
    assert(llist_item_exist(l, 199) == -1);
    assert(llist_item_exist(l, 1) == 0);

    llist_destroy(l);
}

void test_index()
{
    TList *l = llist_new();

    llist_append(l, 2);
    llist_append(l, 3);
    llist_append(l, -4);
    llist_append(l, 6);

    assert(llist_index(l, 6) == 3);
    assert(llist_index(l, 2) == 0);
    assert(llist_index(l, -4) == 2);
    assert(llist_index(l, 100) == -1);

    llist_destroy(l);
}
