//Escreva um programa em C que exiba na tela os n�meros inteiros m�ltiplos
//de 7, compreendidos entre a e b, onde os valores de a e b s�o fornecidos pelo
//usu�rio.

#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "portuguese");
    int x, inicio, fim;
    printf("Digite o n�mero de inicio segudo do n�mero final:");
    scanf("%d %d", &inicio, &fim);
    for(x=inicio; x<=fim; x++){
        if(x % 7 == 0){
            printf("%d \n", x);
        }
    }

}
