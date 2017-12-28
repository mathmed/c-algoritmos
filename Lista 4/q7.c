//Escreva um programa em C que exiba na tela os números inteiros múltiplos
//de 5, compreendidos entre 100 e 200.
#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "portuguese");
    int x;
    for(x=100; x<=200; x++){
        if(x % 5 == 0){
            printf("%d \n", x);
        }
    }

}
