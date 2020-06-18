#include <stdio.h>

int main()
{
  int a, b, c;
  printf("Enter 3 numbers:");
  scanf("%d %d %d", &a, &b, &c);
  if(a>b && a>c)  {
    printf("a is largest: %d", a);
  }
  else  {
    if(b>a && b>c)  {
      printf("b is largest: %d", b);
    }
    else  {
      printf("c is largest: %d", c);
    }
  }
  return 0;
}
