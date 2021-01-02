#include <list.h>

list* list_create() {
  list *l = malloc(sizeof(list));
  l->size = 0;
  return l;
}

node* list_getNode(list* l, int index) {
  node* current = l->first;
  for(int i = 0; i < index; i++) {
    current = current->next;
  }
  return current;
}

void list_forEach(list *l, void (*function)(node*)) {
  for(int i = 0; i < l->size; i++) {
    (*function)(list_getNode(l, i));
  }
}

void list_delete(list *l) {
  node_delete(l->first);
}

void list_remove(list *l, int i) {
  node *toRemove = list_getNode(l, i);
  node *next = node_remove(toRemove);
  node *prev = list_getNode(l, i-1);
  prev->next = next;
  l->size = l->size-1;
}

void list_append(list* l, void *buffer, size_t size) {
  node *first = l->first;
  if(first == NULL) {
    l->first = node_create(buffer, size);
  } else {
    node *prev = first;
    node *next = first->next;
    while (next != NULL) {
      prev = next;
      next = next->next;
    }
    prev->next = node_create(buffer, size);
  }
  l->size = l->size+1;
}

void* list_get(list* l, int index) {
  return list_getNode(l, index)->buffer;
}
