//Escreva um programa em C que exiba na tela os números ímpares entre 50 e
//1, iniciando em 50 e terminando em 1.


#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "portuguese");
    int x;
    for(x=51; x>0; x-=2){
        if(x==51){
            continue;
        }
        printf("%d \n", x);
    }


}
