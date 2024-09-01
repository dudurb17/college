#include <stdio.h>

typedef struct
{
  int dia;
  int mes;
  int ano;
} Data;

int extraiDia(Data data)
{
  return data.dia;
}

int comparaDatas(Data data1, Data data2)
{
  if (data1.ano < data2.ano)
  {
    return -1;
  }
  else if (data1.ano > data2.ano)
  {
    return 1;
  }
  else
  {
    if (data1.mes < data2.mes)
    {
      return -1;
    }
    else if (data1.mes > data2.mes)
    {
      return 1;
    }
    else
    {
      if (data1.dia < data2.dia)
      {
        return -1;
      }
      else if (data1.dia > data2.dia)
      {
        return 1;
      }
      else
      {
        return 0;
      }
    }
  }
}

int main()
{

  Data data1 = {15, 8, 2025};
  Data data2 = {10, 8, 2024};

  printf("O dia da primeira data é: %d\n", extraiDia(data1));

  int resultado = comparaDatas(data1, data2);
  if (resultado == -1)
  {
    printf("Data1 é anterior a Data2.\n");
  }
  else if (resultado == 1)
  {
    printf("Data1 é posterior a Data2.\n");
  }
  else
  {
    printf("Data1 e Data2 são iguais.\n");
  }

  return 0;
}