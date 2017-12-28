//Escreva um programa em C que leia dois números inteiros e indique se algum deles
//é divisível pelo outro, mostrando quem é divisível por quem.


#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int a , b ;
    printf("Entre com 2 números:");
    scanf("%d %d", &a, &b);
    if(a%b == 0){
        printf("Número %d é divisível por %d, resultado: %d ", a,b, (a/b));
    }else if(b%a==0){
        printf("Número %d é divisível por %d, resultado: %d ", b,a, (b/a));
    }else{
        printf("Nunhum número é divisível pelo outro.");

    }


}
