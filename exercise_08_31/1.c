#include <stdio.h>

int expo(int n, int e)
{
  if (e == 0)
  {
    return 1;
  }
  else if (e == 1)
  {
    return n;
  }
  else
  {
    return n * expo(n, e - 1);
  }
}

int main()
{
  int num = 2;
  int e = 4;
  printf("%d elevado a %d é: %d\n", num, e, expo(num, e));
  return 0;
}