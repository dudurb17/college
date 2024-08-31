#include <stdio.h>

int mdc(int n, int m)
{
  if (m == 0)
  {
    return n;
  }
  else
  {

    return mdc(m, n % m);
  }
}

int main()
{
  int n = 12;
  int m = 18;

  printf("O máximo divisor comum de %d e %d é: %d\n", n, m, mdc(n, m));
  return 0;
}