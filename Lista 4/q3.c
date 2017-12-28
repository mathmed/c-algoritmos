//Escreva um programa em C que exiba na tela os números inteiros de 1 até n,
//onde o valor de n é fornecido pelo usuário através do teclado.


#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "portuguese");
    int x, num;
    printf("Digite até que valor será impresso números:");
    scanf("%d", &num);
    for(x=1; x<=num; x++){
        printf("%d \n", x);
    }


}
