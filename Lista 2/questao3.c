//Leia um número inteiro e exiba na tela o número lido.//

#include <stdio.h>
#include <locale.h>

int main(){
    int numero;
    setlocale(LC_ALL, "portuguese");
    printf("Digite um número inteiro:");
    scanf("%d",&numero);
    printf("Você digitou o número %d!!!", numero);

}

