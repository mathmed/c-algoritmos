//Escreva um programa em C que exiba na tela os n�meros inteiros de 1 at� n,
//onde o valor de n � fornecido pelo usu�rio atrav�s do teclado.


#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "portuguese");
    int x, num;
    printf("Digite at� que valor ser� impresso n�meros:");
    scanf("%d", &num);
    for(x=1; x<=num; x++){
        printf("%d \n", x);
    }


}
