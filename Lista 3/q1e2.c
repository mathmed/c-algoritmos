//Escreva um programa em C que leia um número inteiro e classifique-o como par ou
//ímpar, dizendo ainda se este número é positivo, negativo ou nulo.

#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "portuguese");

    int num;
    printf("Digite um númeto inteiro:");
    scanf("%d", &num);
    if(num%2==0){
            if(num>=0){
                printf("Número par e positivo!!");
            }else{
                printf("Número par e negativo!");

            }
    }else{
        if(num<0){
                printf("Número ímpar e negativo!!");
            }else{
                printf("Número ímpar e positivo!");

            }

    }

}
