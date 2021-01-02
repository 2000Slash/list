#include "node.h"

typedef struct {
  int size;
  node *first;
} list;

list* list_create();
// deletes the entire list
void list_delete(list *);
void list_append(list *, void *, size_t);
void* list_get(list*, int);
// removes one element from the list
void list_remove(list*, int);
void list_forEach(list*, void (*function)(node*));
