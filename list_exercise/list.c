#include <stdio.h>
#include <stdlib.h>
#include "list.h"


List_t *List_create(void)
{
    List_t* linked_list = (List_t *)malloc(sizeof(List_t));
    linked_list->next == NULL;
    return linked_list;
}

int List_destroy(List_t *pList)
{

}

int List_insert(List_t *pList, void *item, unsigned index)
{

}

void* List_remove(List_t *pList, unsigned index)
{

}

void* List_get(List_t *pList, unsigned index)
{

}

int List_push(List_t *pList, void *item)
{
    while (pList->next != NULL)
    {
        pList = pList->next;
    }
    
    List_t *new_node = (List_t *) malloc(sizeof(List_t));
    if (new_node != NULL)
    {
        pList->next = new_node;
        new_node->item = item;
    }
}

void* List_pop(List_t *pList)
{

}

int List_getSize(List_t *pList)
{

}

int List_sort(List_t *pList)
{

}
