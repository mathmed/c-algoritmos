//Escreva um programa em C que leia um n�mero inteiro e classifique-o como par ou
//�mpar, dizendo ainda se este n�mero � positivo, negativo ou nulo.

#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "portuguese");

    int num;
    printf("Digite um n�meto inteiro:");
    scanf("%d", &num);
    if(num%2==0){
            if(num>=0){
                printf("N�mero par e positivo!!");
            }else{
                printf("N�mero par e negativo!");

            }
    }else{
        if(num<0){
                printf("N�mero �mpar e negativo!!");
            }else{
                printf("N�mero �mpar e positivo!");

            }

    }

}
