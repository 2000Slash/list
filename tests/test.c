#include <list.h>
#include <stdio.h>

int main() {
  char text[] = "Hallo";
  char second[] = "Welt";
  list *l = create_list();
  append(l, text, strlen(text));
  append(l, second, strlen(second));
  node *current = l->first;
  while(current != NULL) {
    printf("%s\n", (char*)current->buffer);
    current = current->next;
  }
}
