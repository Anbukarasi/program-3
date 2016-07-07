#include <stdio.h>
 int main()
{
  int c, n, f= 1;
 printf("Enter a number \n");
  scanf("%d", &n);
for (c = 1; c <= n; c++)
    f= f*c;
 printf("Factorial is %d",f);
  return 0;
}
