//Leia o nome do usu�rio e exiba a seguinte mensagem na tela: �FULANO j� sabe programar!!!�, onde FULANO � o nome do usu�rio.//

#include <stdio.h>
#include <locale.h>

int main(){
    char nome[30];
    setlocale(LC_ALL, "portuguese");
    printf("Digite seu nome:");
    scanf("%s",&nome);
    printf("%s j� sabe programar!!!", nome);

}

