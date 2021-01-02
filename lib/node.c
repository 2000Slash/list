#include <node.h>

node* create_node(void *buffer, size_t size) {
  node *l = malloc(sizeof(node));
  l->buffer = malloc(size);
  memcpy(l->buffer, buffer, size);
  return l;
}

void remove_node(node* l) {
  free(l);
}
