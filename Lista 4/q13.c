//Modifique o programa anterior de forma que ele gere os termos da s�rie de
//Fibonacci que s�o menores ou iguais a n, onde o valor de n � fornecido pelo
//usu�rio.
#include <stdio.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "portuguese");
  int a = 1, b = 1, auxiliar, cont = 1, fim;
  printf("At� qual valor deseja ver a s�rie: ");
  scanf("%d", &fim);

  printf("S�rie de Fibonacci:\n");
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
