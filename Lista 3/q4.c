//Escreva um programa em C que leia um valor inteiro e exiba sua raiz, se for poss�vel

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
    setlocale(LC_ALL, "portuguese");
    int num, raiz;
    printf("Entre com um n�mero:");
    scanf("%d", &num);
    raiz = sqrt(num);
    printf("A raiz �: %d", raiz);

}
