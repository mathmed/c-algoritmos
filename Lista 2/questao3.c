//Leia um n�mero inteiro e exiba na tela o n�mero lido.//

#include <stdio.h>
#include <locale.h>

int main(){
    int numero;
    setlocale(LC_ALL, "portuguese");
    printf("Digite um n�mero inteiro:");
    scanf("%d",&numero);
    printf("Voc� digitou o n�mero %d!!!", numero);

}

