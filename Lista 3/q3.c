//Escreva um programa em C que leia dois valores reais e efetue, se for poss�vel, a
//divis�o do primeiro pelo segundo, exibindo o resultado. Se o segundo valor for igual
//a zero, o programa deve apresentar a seguinte mensagem de erro: �N�o � poss�vel
//efetuar essa opera��o!�.

#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "portuguese");

    int num, num2;
    printf("Digite dois n�meros inteiros:");
    scanf("%d %d", &num, &num2);
    if(num2!=0){
       printf("O resultado da divis�o �: %d ", (num/num2));

    }else{
        printf("11 mandamento, n�o dividir�s por 0!");
    }

}

