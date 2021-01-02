#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
  size_t size;
  void *buffer;
  struct node *next;
} node;

node* create_node(void *, size_t);
void remove_node(node*);
