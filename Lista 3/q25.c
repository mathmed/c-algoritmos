//Escreva um programa em C para ler um n�mero de 1 a 12 referente ao m�s do ano e
//informar o trimestre correspondente, sendo Jan/Fev/Mar o 1�. Trimestre, Abr/Maio/Jun
//o 2.�. Trimestre, e assim sucessivamente. Se for um n�mero incorreto, mostrar uma
//mensagem de erro. Utilize o switch-case com a op��o de deixar case�s em branco


#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int mes;
    printf("Digite o n�mero correspondente ao m�s:");
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
            printf("N�mero inv�lido");
            break;

    }
}
