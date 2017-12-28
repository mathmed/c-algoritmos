//Escreva um programa em C para ler um número de 1 a 12 referente ao mês do ano e
//informar o trimestre correspondente, sendo Jan/Fev/Mar o 1º. Trimestre, Abr/Maio/Jun
//o 2.º. Trimestre, e assim sucessivamente. Se for um número incorreto, mostrar uma
//mensagem de erro. Utilize o switch-case com a opção de deixar case’s em branco


#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int mes;
    printf("Digite o número correspondente ao mês:");
    scanf("%d", &mes);
    switch(mes){
        case 1:
            printf("Primeiro Trimestre");
            break;
        case 2:
            printf("Primeiro Trimestre");
            break;
        case 3:
            printf("Primeiro Trimestre");
            break;
        case 4:
            printf("Segundo Trimestre");
            break;
        case 5:
            printf("Segundo Trimestre");
            break;
        case 6:
            printf("Segundo Trimestre");
            break;
        case 7:
            printf("Terceiro Trimestre");
            break;
        case 8:
            printf("Terceiro Trimestre");
            break;
        case 9:
            printf("Terceiro Trimestre");
            break;
        case 10:
            printf("Quarto Trimestre");
            break;
        case 11:
            printf("Quarto Trimestre");
            break;
        case 12:
            printf("Quarto Trimestre");
            break;

        default:
            printf("Número inválido");
            break;

    }
}
