//Escreva um programa em C que leia os coeficientes de uma equação do 2º grau
//e calcule as suas raízes reais, se for possível.
//O programa deve exibir uma mensagem informando quantas raízes reais a equação possui
//e as raízes calculadas.

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int a,b,c,delta,raiz1, raiz2;
    printf("Digite os coeficientes da equação:");
    scanf("%d %d %d", &a, &b, &c);
    delta =pow(b,2)-4*a*c;
    if (delta < 0){
        printf("A equação não possui raízes reais.");
    }else{
        raiz1 = (-b+sqrt(delta))/2*a;
        raiz2 = (-b-sqrt(delta))/2*a;
        printf("As raízes dessa equação são: %d e %d", raiz1, raiz2);
    }

}
