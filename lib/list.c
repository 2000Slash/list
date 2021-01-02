#include <list.h>

list* create_list() {
  list *l = malloc(sizeof(list));
  l->size = 0;
  return l;
}

void remove_list(list *l) {
  free(l);
}

void append(list* l, void *buffer, size_t size) {
  node *first = l->first;
  if(first == NULL) {
    l->first = create_node(buffer, size);
  } else {
    node *prev = first;
    node *next = first->next;
    while (next != NULL) {
      prev = next;
      next = next->next;
    }
    prev->next = create_node(buffer, size);
  }
}
