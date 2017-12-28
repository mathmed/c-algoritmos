//Leia um número inteiro e exiba na tela o seu antecessor e o seu sucessor.//

#include <stdio.h>
#include <locale.h>

int main(){
    int numero;
    setlocale(LC_ALL, "portuguese");
    printf("Digite um número inteiro:");
    scanf("%d",&numero);
    printf("O sucessor de %d é %d! \n", numero,(numero+1));
    printf("O antecessor de %d é %d! \n", numero,(numero-1));


}


