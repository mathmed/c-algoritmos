//Escreva um programa em C que determine se um determinado ano � ou n�o bissexto.
//Um ano � bissexto quando � divis�vel por 4 e n�o � divis�vel por 100, ou ainda, quando
//� divis�vel por 400.


#include <stdio.h>
#include <locale.h>

int main (){
    int ano;
    setlocale(LC_ALL, "portuguese");
    printf("Entre com o ano:");
    scanf("%d", &ano);
    if(((ano%4==0)&&(ano%100!=0)) || (ano%400==0) ){
        printf("Ano bissesxto!");
    }else{
        printf("N�o � ano bissexto");
    }
}
