//Escreva um programa em C que leia duas datas (dia, mês e ano) e calcule a
//quantidade de dias decorridos entre as duas datas.
#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL,"portuguese");
    float dia1, mes1, ano1, dia2, mes2, ano2, aux1, aux2;

    printf("Digite dia 1, mes 1 e ano 1 respectivamente:");
    scanf ("%f %f %f", &dia1, &mes1, &ano1);
    printf("Digite dia 2, mes 2 e ano 2 respectivamente:");
    scanf("%f %f %f", &dia2, &mes2, &ano2);
    aux1= ano1*365+mes1*30.5+dia1;
    aux2= ano2*365+mes2*30.5+dia2;
    if(aux2>aux1){
        printf("Passaram aproximadamente %.2f dias entre as duas datas! (Não considerando ano bissexto)", (aux2-aux1));
    }else{
        printf("Datas inválidas.");

    }
}
