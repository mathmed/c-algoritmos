//Leia dois n�meros inteiros e exiba na tela a soma e a diferen�a entre os dois n�meros.//

#include <stdio.h>
#include <locale.h>

int main(){
    int numero,numero2,diferenca;
    setlocale(LC_ALL, "portuguese");
    printf("Digite um n�mero inteiro:");
    scanf("%d",&numero);
    printf("Digite outro n�mero inteiro:");
    scanf("%d",&numero2);
    diferenca = numero-numero2;
    if(diferenca<0){
        diferenca=diferenca*(-1);
    }
    printf("A soma entre os dois n�meros �: %d \n", (numero+numero2));
    printf("A diferen�a entre os dois n�meros �: %d \n", diferenca);


}



