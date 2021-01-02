#include <node.h>

node* node_create(void *buffer, size_t size) {
  node *l = malloc(sizeof(node));
  l->buffer = malloc(size);
  memcpy(l->buffer, buffer, size);
  return l;
}

void node_delete(node* n) {
  if(n->next != NULL) {
    node_delete(n->next);
  }
  free(n->buffer);
  free(n);
}

node* node_remove(node *n) {
  free(n->buffer);
  node* next = n->next;
  free(n);
  return next;
}
