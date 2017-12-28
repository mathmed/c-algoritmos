//Escreva um programa em C que exiba os números inteiros pares
//compreendidos entre 1 e 100.

#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "portuguese");
    int x;
    for(x=0; x<=100; x+=2){
        if(x== 0){
            continue;
        }
        printf("%d \n", x);
    }


}
