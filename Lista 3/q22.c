//A função de Babbage, descrita abaixo, gera apenas números primos. Escreva um
//programa em C que leia um valor inteiro x e gere um número primo a partir desse
//valor, utilizando a função de Babbage.

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int num,aux;
    printf("Entre com um número inteiro:");
    scanf("%d",&num);
    aux = pow(num,2)+(num+41);
    printf("Número primo gerado: %d", aux);
}
