//Modifique o programa anterior de forma que ele gere os termos da série de
//Fibonacci que são menores ou iguais a n, onde o valor de n é fornecido pelo
//usuário.
#include <stdio.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "portuguese");
  int a = 1, b = 1, auxiliar, cont = 1, fim;
  printf("Até qual valor deseja ver a série: ");
  scanf("%d", &fim);

  printf("Série de Fibonacci:\n");
  printf("%d\n%d \n", b,a);

  for(cont; cont <= fim-2; ++cont ){
        auxiliar = a+b;
        if(auxiliar > fim){
            break;
        }
        printf("%d \n", auxiliar);
        a =b;
        b = auxiliar;






  }
}
