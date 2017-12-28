//Escreva um programa em C que leia a altura (em m) e o sexo de um indivíduo e
//determine o seu peso ideal (em Kg), calculado de acordo com a tabela abaixo:
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    char sexo[1];
    float altura, ideal;
    printf("Digite M para masculino ou F para feminino:");
    scanf("%s", &sexo);
    printf("Digite sua altura em metros:");
    scanf("%f", &altura);
    if(strcmp (sexo , "M") == 0) {
        ideal = (72.2*altura)-58;
        printf("Seu peso ideal é: %f kilos", ideal);
    }else if (strcmp (sexo , "F") == 0) {
        ideal = (62.1*altura)-44.7;
        printf("Seu peso ideal é: %f kilos", ideal);

    }else{
        printf("Você digitou carecteres incorrespondentes.");

    }
}
