//Escreva um programa em C que leia um valor entre 0 e 6 e exiba o dia da semana
//correspondente. Assuma os valores: 0 = Domingo; 1 = Segunda-feira; 2 = Ter�a-feira
//e assim por diante


#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int num;
    printf("Entre com um n�mero correspondente � um dia (0 � 6):");
    scanf("%d" ,&num);
    switch(num){
        case 0:
            printf("Dia: Domingo ");
            break;
        case 1:
            printf("Dia: Segunda - Feira ");
            break;
        case 2:
            printf("Dia: Ter�a - Feira ");
            break;
        case 3:
            printf("Dia: Quarta - Feira ");
            break;
        case 4:
            printf("Dia: Quinta - Feira ");
            break;
        case 5:
            printf("Dia: Sexta - Feira ");
            break;
        case 6:
            printf("Dia: S�bado ");
            break;

        default:
            printf("N�mero inv�lido");
            break;
    }


}
