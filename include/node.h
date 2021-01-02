#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
  size_t size;
  void *buffer;
  struct node *next;
} node;

node* node_create(void *, size_t);
// Also deletes nodes after this one
void node_delete(node*);
// removes node and returns node after
node* node_remove(node*);
