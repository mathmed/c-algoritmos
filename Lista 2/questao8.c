//Sabendo-se que o lat�o � uma liga met�lica composta por 70% de cobre e 30% de zinco,
//escreva um algoritmo que pergunte ao usu�rio a quantidade de lat�o a ser produzida (em
//Kg), calcule e exiba as quantidades de cobre e zinco que s�o necess�rias para produzir a
//quantidade de lat�o desejada.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    float qtd,zinco,cobre;
    printf("Digite a quantidade de lat�o a ser produzida em KG: ");
    scanf("%f", &qtd);
    zinco = qtd*0.3;
    cobre = qtd*0.7;

    printf("Ser�o necess�rios %2.2f kg de zinco e %2.2f kg de cobre para produzir o lat�o.", zinco,cobre);
}
