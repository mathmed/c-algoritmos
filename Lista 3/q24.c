//Escreva um programa em C que leia um valor entre 1 e 12 e exiba o m�s
//correspondente. Assuma os valores: 1 = Janeiro; 2 = Fevereiro e assim por diante


#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int mes;
    printf("Digite um n�mero entre 1 e 12 para saber o m�s correspondente:");
    scanf("%d", &mes);
    if(mes==1){
        printf("M�s: Janeiro");
    }else if(mes==2){
        printf("M�s: Fevereiro");
    }else if(mes==3){
        printf("M�s: Mar�o");
    }else if(mes==4){
        printf("M�s: Abril");
    }else if(mes==5){
        printf("M�s: Maio");
    }else if(mes==6){
        printf("M�s: Junho");
    }else if(mes==7){
        printf("M�s: Julho");
    }else if(mes==8){
        printf("M�s: Agosto");
    }else if(mes==9){
        printf("M�s: Setembro");
    }else if(mes==10){
        printf("M�s: Outubro");
    }else if(mes==11){
        printf("M�s: Novembro");
    }else if(mes==12){
        printf("M�s: Dezembro");

    }else{
        printf("M�s inv�lido.");
    }
}
