//Escreva um programa em C que leia o valor de uma temperatura em Celsius (�C) e
//converta essa temperatura para Fahrenheit (�F). A f�rmula para realizar a convers�o
//contr�ria, de �F para �C, � apresentada a seguir:

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    float c, f;
    printf("Informe a temperatura em Celsius:");
    scanf("%f", &c);
    f = (c*9/5)+32;
    printf("A temperatura em �F �: %f", f);

}
