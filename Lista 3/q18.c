//Converta o algoritmo abaixo para um programa em C. Depois, acompanhe-o passo a
//passo, descrevendo o efeito de cada instru��o no valor das vari�veis e determine o
//que ocorre ao final.

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int a,b;           //DECLARANDO AS VARI�VEIS QUE SER�O UTILIZADAS
    printf("Digite o valor de A:");  //IMPRIMINDO ALGO NA TELA
    scanf("%d", &a);                 // COLETANDO O VALOR DIGITADO E GUARDANDO EM A
    printf("Digite o valor de B:");         // ''
    scanf("%d", &b);                  // COLETANDO O VALOR DIGITADO E GUARDANDO EM B
    a = a+b;                          // VARI�VEL A RECEBE A+B
    b = a-b;                          // VARI�VEL B RECEBE A(MODIFICADO NA ULTIMA LINHA) +B
    a = a-b;                          // VARI�VEL A RECEBE A (MODIFICADO NA PRIMEIRA SOMA) + B(MODIFICADO NA ULTIMA LINHA)
    printf("Valor de A: %d, valor de B: %d", a,b); // IMPRIME A E B COM VALORES INVERTIDOS NA TELA.
}
