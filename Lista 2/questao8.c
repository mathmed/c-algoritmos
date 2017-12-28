//Sabendo-se que o latão é uma liga metálica composta por 70% de cobre e 30% de zinco,
//escreva um algoritmo que pergunte ao usuário a quantidade de latão a ser produzida (em
//Kg), calcule e exiba as quantidades de cobre e zinco que são necessárias para produzir a
//quantidade de latão desejada.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    float qtd,zinco,cobre;
    printf("Digite a quantidade de latão a ser produzida em KG: ");
    scanf("%f", &qtd);
    zinco = qtd*0.3;
    cobre = qtd*0.7;

    printf("Serão necessários %2.2f kg de zinco e %2.2f kg de cobre para produzir o latão.", zinco,cobre);
}
