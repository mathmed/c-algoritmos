// Escreva um programa em C que exiba na tela os n�meros inteiros de 1 at�
//100.

#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "portuguese");
    int x;
    for(x=1; x<=100; x++){
        printf("%d \n", x);

    }


}
