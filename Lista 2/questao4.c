//Leia um n�mero inteiro e exiba na tela o seu antecessor e o seu sucessor.//

#include <stdio.h>
#include <locale.h>

int main(){
    int numero;
    setlocale(LC_ALL, "portuguese");
    printf("Digite um n�mero inteiro:");
    scanf("%d",&numero);
    printf("O sucessor de %d � %d! \n", numero,(numero+1));
    printf("O antecessor de %d � %d! \n", numero,(numero-1));


}


