
typedef struct List_t
{
    void* item;
    struct List_t* next;
} List_t;

List_t *List_create(void);
int List_destroy(List_t *pList);
int List_insert(List_t *pList, void *item, unsigned index);
void* List_remove(List_t *pList, unsigned index);
void* List_get(List_t *pList, unsigned index);
int List_push(List_t *pList, void *item);
void* List_pop(List_t *pList);
int List_getSize(List_t *pList);
int List_sort(List_t *pList);
void List_print(List_t *pList);
