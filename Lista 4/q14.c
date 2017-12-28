//Escreva um programa em C que calcule e exiba o seno e o cosseno dos
//ângulos compreendidos no intervalo 0º, 15º, 30º, 45º, ..., 360º, variando o
//ângulo de 15 em 15 graus.

#include <stdio.h>
#include <locale.h>
#include <math.h>

#define PI 3.14159265
void main(){
    setlocale(LC_ALL, "portuguese");
    double aux = 0;
    for(aux; aux <=360; aux = aux+15){
        printf("Seno de %f°: %5.5f , Coseno de %f°: %5.5f .\n ", aux, sin(aux*PI/180), aux, cos(aux*PI/180));
    }


}
