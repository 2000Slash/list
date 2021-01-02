#include <list.h>
#include <stdio.h>

void printElement(node* node) {
  printf("%s\n", (char*) node->buffer);
}

int main() {
  char text[] = "Hallo";
  char second[] = "Welt";
  char third[] = "Cool";
  
  list *l = list_create();
  list_append(l, text, strlen(text));
  list_append(l, second, strlen(second));
  list_append(l, third, strlen(third));
  list_forEach(l, &printElement);
  puts("Remove second element");
  list_remove(l, 1);
  list_forEach(l, &printElement);
}
