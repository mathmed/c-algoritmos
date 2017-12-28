//Escreva um programa em C que leia um valor inteiro e exiba sua raiz, se for possível

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
    setlocale(LC_ALL, "portuguese");
    int num, raiz;
    printf("Entre com um número:");
    scanf("%d", &num);
    raiz = sqrt(num);
    printf("A raiz é: %d", raiz);

}
