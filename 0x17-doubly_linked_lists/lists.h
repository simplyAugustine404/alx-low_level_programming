#include <stdlib.h>
typedef struct dlistint_s{
  int n;
  struct dlistint_s *prev;
  struct dlistint_s *next;
}dlistint_t;
size_t print_dlistint(const dlistint_t *h);
