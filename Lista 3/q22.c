//A fun��o de Babbage, descrita abaixo, gera apenas n�meros primos. Escreva um
//programa em C que leia um valor inteiro x e gere um n�mero primo a partir desse
//valor, utilizando a fun��o de Babbage.

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int num,aux;
    printf("Entre com um n�mero inteiro:");
    scanf("%d",&num);
    aux = pow(num,2)+(num+41);
    printf("N�mero primo gerado: %d", aux);
}
