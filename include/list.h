#include "node.h"

typedef struct {
  int size;
  node *first;
} list;

list* create_list();
void remove_list(list *);
void append(list *, void *, size_t);
