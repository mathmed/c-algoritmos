//Leia o nome do usuário e exiba a seguinte mensagem na tela: “FULANO já sabe programar!!!”, onde FULANO é o nome do usuário.//

#include <stdio.h>
#include <locale.h>

int main(){
    char nome[30];
    setlocale(LC_ALL, "portuguese");
    printf("Digite seu nome:");
    scanf("%s",&nome);
    printf("%s já sabe programar!!!", nome);

}

