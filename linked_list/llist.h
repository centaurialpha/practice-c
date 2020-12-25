#include <stdio.h>
#include <stdlib.h>

#ifndef G_LINKED_LIST_H
#define G_LINKED_LIST_H

struct t_node {
    int data;
    struct t_node *next;
};

typedef struct t_list {
    struct t_node *first;
    struct t_node *last;
} TList;

TList *llist_new();
struct t_node *create_node(int);
void llist_append(TList *, int);
void llist_prepend(TList *, int);
void llist_insert(TList *, int, int);
int llist_item_exist(TList *, int);
int llist_index(TList *, int);
void llist_debug(TList *);
int llist_len(TList *);
void llist_destroy(TList *);

#endif
