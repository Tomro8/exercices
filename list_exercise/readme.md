
Make it more Generic : 

1. Add function pointers in the list to allow specific items to print themselves or perform dedicated operations to this item.

2. Should List_Pop() remove first element of the linked list for a 1-element sized list ?

3. Difficulties figuring out how to represent an empty list. For instance, when poping node, I just need to set to NULL the "next" member of the node. However, when poping the first element, putting to NULL the "next" member doesn't pop the first element. Then how can I pop it ? 
My first idea was to set all members of the node to NULL. However this did not solve my issue. I ended up with an ugly solution for poping my first node, setting all its members to NULL to keep an empty list, but having to return the popped element anyway. To do so I had to create it again, allocating new memory, just so I could return it.
My last idea was to represent an empty list with a a NULL List_t object. However this ended up creating problems for List_create() and List_push() with given prototypes. 