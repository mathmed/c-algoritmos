//Escreva um programa em C que exiba na tela os números inteiros múltiplos
//de 7, compreendidos entre a e b, onde os valores de a e b são fornecidos pelo
//usuário.

#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "portuguese");
    int x, inicio, fim;
    printf("Digite o número de inicio segudo do número final:");
    scanf("%d %d", &inicio, &fim);
    for(x=inicio; x<=fim; x++){
        if(x % 7 == 0){
            printf("%d \n", x);
        }
    }

}
