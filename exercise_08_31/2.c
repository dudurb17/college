#include <stdio.h>

int somaV(int vetor[], int tamanho)
{
  if (tamanho == 0)
  {
    return 0;
  }
  else
  {
    return vetor[tamanho - 1] + somaV(vetor, tamanho - 1);
  }
}

int main()
{
  int vetor[5] = {1, 2, 3, 4, 5};
  int tamanho = sizeof(vetor) / sizeof(vetor[0]);
  printf("A soma do vetor é %d\n", somaV(vetor, tamanho));
  return 0;
}