//Escreva um programa em C que leia dois n�meros inteiros e indique se algum deles
//� divis�vel pelo outro, mostrando quem � divis�vel por quem.


#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int a , b ;
    printf("Entre com 2 n�meros:");
    scanf("%d %d", &a, &b);
    if(a%b == 0){
        printf("N�mero %d � divis�vel por %d, resultado: %d ", a,b, (a/b));
    }else if(b%a==0){
        printf("N�mero %d � divis�vel por %d, resultado: %d ", b,a, (b/a));
    }else{
        printf("Nunhum n�mero � divis�vel pelo outro.");

    }


}
