#include "llist.h"

TList *llist_new()
{
    TList *list = malloc(sizeof(TList));
    if( NULL == list )
        return NULL;
    list->first = 0;
    list->last = 0;
    return list;
}

struct t_node *create_node(int value)
{
    struct t_node *new_node = (struct t_node *)malloc(sizeof(struct t_node));
    new_node->data = value;
    new_node->next = NULL;
    return new_node;
}

void llist_debug(TList *list)
{
    struct t_node *temp;
    temp = list->first;
    while( temp != NULL )
    {
        if( temp->next == NULL)
            printf(" %d", temp->data );
        else
            printf(" %d ->", temp->data);
        temp = temp->next;
    }
}

void llist_append(TList *list, int data)
{
}
