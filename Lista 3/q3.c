//Escreva um programa em C que leia dois valores reais e efetue, se for possível, a
//divisão do primeiro pelo segundo, exibindo o resultado. Se o segundo valor for igual
//a zero, o programa deve apresentar a seguinte mensagem de erro: “Não é possível
//efetuar essa operação!”.

#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "portuguese");

    int num, num2;
    printf("Digite dois números inteiros:");
    scanf("%d %d", &num, &num2);
    if(num2!=0){
       printf("O resultado da divisão é: %d ", (num/num2));

    }else{
        printf("11 mandamento, não dividirás por 0!");
    }

}

