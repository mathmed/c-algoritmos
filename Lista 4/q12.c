//Modifique o programa anterior de forma que ele gere os n primeiros termos da
//s�rie, onde o valor de n � fornecido pelo usu�rio.
#include <stdio.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "portuguese");
  int a, b, auxiliar, i, fim;
  a = 0;
  b = 1;
  printf("Quantos n�meros deseja ver:");
  scanf("%d", &fim);

  printf("S�rie de Fibonacci:\n");
  printf("%d\n", b);

  for(i = 0; i < fim-1; i++)
  {
    auxiliar = a + b;
    a = b;
    b = auxiliar;

    printf("%d\n", auxiliar);
  }
}


