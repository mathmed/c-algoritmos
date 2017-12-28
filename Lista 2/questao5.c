//Leia dois números inteiros e exiba na tela a soma e a diferença entre os dois números.//

#include <stdio.h>
#include <locale.h>

int main(){
    int numero,numero2,diferenca;
    setlocale(LC_ALL, "portuguese");
    printf("Digite um número inteiro:");
    scanf("%d",&numero);
    printf("Digite outro número inteiro:");
    scanf("%d",&numero2);
    diferenca = numero-numero2;
    if(diferenca<0){
        diferenca=diferenca*(-1);
    }
    printf("A soma entre os dois números é: %d \n", (numero+numero2));
    printf("A diferença entre os dois números é: %d \n", diferenca);


}



