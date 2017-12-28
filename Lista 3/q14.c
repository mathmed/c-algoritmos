//Escreva um programa em C que leia o valor de uma temperatura em Celsius (ºC) e
//converta essa temperatura para Fahrenheit (ºF). A fórmula para realizar a conversão
//contrária, de ºF para ºC, é apresentada a seguir:

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    float c, f;
    printf("Informe a temperatura em Celsius:");
    scanf("%f", &c);
    f = (c*9/5)+32;
    printf("A temperatura em °F é: %f", f);

}
