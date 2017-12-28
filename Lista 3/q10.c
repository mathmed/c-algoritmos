//Escreva um programa em C que leia os coeficientes de uma equa��o do 2� grau
//e calcule as suas ra�zes reais, se for poss�vel.
//O programa deve exibir uma mensagem informando quantas ra�zes reais a equa��o possui
//e as ra�zes calculadas.

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int a,b,c,delta,raiz1, raiz2;
    printf("Digite os coeficientes da equa��o:");
    scanf("%d %d %d", &a, &b, &c);
    delta =pow(b,2)-4*a*c;
    if (delta < 0){
        printf("A equa��o n�o possui ra�zes reais.");
    }else{
        raiz1 = (-b+sqrt(delta))/2*a;
        raiz2 = (-b-sqrt(delta))/2*a;
        printf("As ra�zes dessa equa��o s�o: %d e %d", raiz1, raiz2);
    }

}
