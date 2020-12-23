#include <stdio.h>
#include "llist.h"

int main()
{
    TList *lista = llist_new();

    struct t_node *n1 = create_node(2);
    struct t_node *n2 = create_node(4);
    struct t_node *n3 = create_node(9);
    struct t_node *n4 = create_node(29);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    lista->first = n1;
    lista->last = n4;

    llist_debug(lista);
    return 0;
}
