//A distância entre dois pontos P(x1,y1) e Q(x2,y2) no plano cartesiano pode ser calculada
//pela fórmula abaixo. Escreva um algoritmo que leia os pontos P e Q e calcule a distância
//entre eles.

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    float x1,x2,y1,y2,aux,distancia;

    printf("Digite a cordenada X de P:");
    scanf("%f", &x1);
    printf("Digite a cordenada Y de P:");
    scanf("%f", &y1);
    printf("Digite a cordenada X de Q:");
    scanf("%f", &x2);
    printf("Digite a cordenada Y de Q:");
    scanf("%f", &y2);
    aux = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    printf("A distâncias entre os pontos é de %f: ", aux);

}
