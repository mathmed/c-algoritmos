//A série de Fibonacci é definida da seguinte forma: 1, 1, 2, 3, 5, 8, 13, ..., ou
//seja, os dois primeiros termos são iguais a 1 e os termos restantes são
//calculados a partir da soma dos dois anteriores. Escreva um programa em C
//que gere os 10 primeiros termos da série de Fibonacci.

#include <stdio.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "portuguese");
  int a, b, auxiliar, i;
  a = 0;
  b = 1;

  printf("Série de Fibonacci:\n");
  printf("%d\n", b);

  for(i = 0; i < 9; i++)
  {
    auxiliar = a + b;
    a = b;
    b = auxiliar;

    printf("%d\n", auxiliar);
  }
}
