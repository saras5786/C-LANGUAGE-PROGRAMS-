#include <stdio.h>
int addition(int a, int b);
  // fun de
int main()
{
int a, b, result;
printf ("Enter a, b values");
scanf("%d%d", &a, &b);
result = addition (a,b); // fun call
printf("%d", result);
return 0;
}
int addition (int x, int y) // fun def
{
int c;
c = x + y;
return c;
}
