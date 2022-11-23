#include <stdio.h>
#include "main.h"

int main(void)
{
  int i = 0, sum = 0;

  for (; i < 1024; i++)
    {
      if (i % 3 == 0 || i % 5 == 0)
	sum += i;
    }
  printf("%d\n", sum);

  return (0);
}
