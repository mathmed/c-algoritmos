//Escreva um programa em C que leia os coeficientes de uma equa��o do 2�
//grau e calcule o valor dessa equa��o para um conjunto de valores.
//Inicialmente o programa deve ler os valores de a, b e c, definidos pelo usu�rio.
//Em seguida, deve haver um la�o que possibilite ao usu�rio calcular o valor da
//fun��o f(x) para n valores de x, onde o valor de n deve ser fornecido pelo
//usu�rio.

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
        printf("Valor da fun��o para f(%5.2f) �: %5.2f \n \n", x, a*pow(x,2)+b*x+c) ;
    }


}
