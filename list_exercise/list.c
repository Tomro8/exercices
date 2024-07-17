#include <stdio.h>
#include <stdlib.h>
#include "list.h"

List_t *List_create(void)
{
    // List_t* linked_list = (List_t *)malloc(sizeof(List_t));
    // linked_list->next = NULL;
    // linked_list->item = NULL;
    return NULL;
}

int List_destroy(List_t *pList)
{
    return 1;
}

int List_insert(List_t *pList, void *item, unsigned index)
{
    return 1;
}

void* List_remove(List_t *pList, unsigned index)
{
    return NULL;
}

void* List_get(List_t *pList, unsigned index)
{
    return NULL;
}

int List_push(List_t *pList, void *item)
{
    int result = 0;
    if (pList == NULL) // Empty List
    {
        pList = (List_t *)malloc(sizeof(List_t));
        if (pList == NULL)
        {
            printf("Allocation error\n");
        }
        pList->next = NULL;
        pList->item = item;
        List_print(pList);
    }
    // if (pList->item == NULL) // Empty List
    // {
    //     pList->item = item;        
    // }
    // else
    // {
    //     while (pList->next != NULL) // Iterate to last node
    //     {
    //         pList = pList->next;
    //     }
        
    //     List_t *new_node = (List_t *) malloc(sizeof(List_t));
    //     if (new_node != NULL)
    //     {
    //         pList->next = new_node;
    //         new_node->item = item;
    //     }
    //     else
    //     {
    //         result = 1;
    //     }
    // }

    return result;
}

void* List_pop(List_t *pList)
{
    // 1-node list
    if (pList->next == NULL)
    {
        
    }

    List_t *previous_node;

    while (pList->next != NULL) // Iterate to last item
    {
        previous_node = pList; // Keep reference to previous node
        pList = pList->next;
    }

    previous_node->next = NULL;
    
    return (void*) pList;

    // while (pList->next != NULL) // Iterate to last node
    // {
    //     if (pList->next->next == NULL) // If next node is the last
    //     {
    //         pList->next = NULL;
    //         break;
    //     }
    //     else
    //     {
    //         pList = pList->next;
    //     }
    // }

    // return &pList
}

int List_getSize(List_t *pList)
{

    return 1;
}

int List_sort(List_t *pList)
{
    return 1;
}

void List_print(List_t *pList)
{
    // Empty List
    // if (pList->next == NULL && pList->item == NULL)
    if (pList == NULL)
    {
        printf("Empty Linked List\n");
        return;
    }

    if (pList->item == NULL && pList->next == NULL)
    {
        printf("Empty Linked List\n");
        return;
    }

    int idx = 0;
    printf("%d: %p %c\n", idx, pList->item, (*(char*)pList->item));

    while (pList->next != NULL)
    {
        pList = pList->next;
        idx++;
        printf("%d: %p %c\n", idx, pList->item, (*(char*)pList->item));
    }
}
