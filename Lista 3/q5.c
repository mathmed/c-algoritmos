//Escreva um programa em C que determine se um determinado ano é ou não bissexto.
//Um ano é bissexto quando é divisível por 4 e não é divisível por 100, ou ainda, quando
//é divisível por 400.


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
        printf("Não é ano bissexto");
    }
}
