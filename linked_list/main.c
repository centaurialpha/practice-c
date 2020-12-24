#include <stdio.h>
#include "llist.h"

int main()
{
    TList *lista = llist_new();
    printf("LEN=%d\n", llist_len(lista));

    llist_append(lista, 2);
    llist_append(lista, 4);
    llist_append(lista, 9);
    llist_append(lista, 29);
    llist_debug(lista);
    printf("\nLEN=%d\n", llist_len(lista));

    llist_destroy(lista);
    return 0;
}
