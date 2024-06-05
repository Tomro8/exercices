
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main()
{
    char item1 = 'a';
    char item2 = 'b';
    char item3 = 'c';

    List_t *my_list = List_create();
    List_push(my_list, &item1);
    List_push(my_list, &item2);
    List_push(my_list, &item3);

    List_print(my_list);

    return 0;
}