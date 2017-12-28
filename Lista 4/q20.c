//Escreva um programa em C que leia os coeficientes de uma equação do 2º
//grau e calcule o valor dessa equação para um conjunto de valores.
//Inicialmente o programa deve ler os valores de a, b e c, definidos pelo usuário.
//Em seguida, deve haver um laço que possibilite ao usuário calcular o valor da
//função f(x) para n valores de x, onde o valor de n deve ser fornecido pelo
//usuário.

#include <stdio.h>
#include <locale.h>
#include <math.h>



int main(){
    setlocale(LC_ALL, "portuguese");
    float a, b, c,x, aux = 1;
    printf("Digite os coeficientes A, B e C a seguir:");
    scanf("%f %f %f", &a, &b, &c);
    while(aux == 1){
        printf("Escolha um valor para x:");
        scanf("%f", &x);
        printf("Valor da função para f(%5.2f) é: %5.2f \n \n", x, a*pow(x,2)+b*x+c) ;
    }


}
