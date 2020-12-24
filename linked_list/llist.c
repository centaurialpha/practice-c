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
    struct t_node *node = create_node(data);

    if( list->first == NULL ) {
        list->first = node;
        list->last = node;
    } else {
        list->last->next = node;
        list->last = node;
    }
}

void llist_prepend(TList *list, int data)
{
    struct t_node *node = create_node(data);

    if( list->first == NULL ) {
        list->first = node;
        list->last = node;
    } else {
        node->next = list->first;
        list->first = node;
    }
}

int llist_len(TList *list)
{
    int len = 0;
    struct t_node *temp = list->first;

    while( temp != NULL )
    {
        len += 1;
        temp = temp->next;
    }
    return len;
}

void llist_destroy(TList *list)
{
    struct t_node *current_node = list->first;
    struct t_node *next;

    while( current_node != NULL )
    {
        next = current_node->next;
        free(current_node);
        current_node = next;
    }

    free(list);
}
