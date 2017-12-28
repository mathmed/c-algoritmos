//Escreva um programa em C que leia um valor entre 1 e 12 e exiba o mês
//correspondente. Assuma os valores: 1 = Janeiro; 2 = Fevereiro e assim por diante


#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int mes;
    printf("Digite um número entre 1 e 12 para saber o mês correspondente:");
    scanf("%d", &mes);
    if(mes==1){
        printf("Mês: Janeiro");
    }else if(mes==2){
        printf("Mês: Fevereiro");
    }else if(mes==3){
        printf("Mês: Março");
    }else if(mes==4){
        printf("Mês: Abril");
    }else if(mes==5){
        printf("Mês: Maio");
    }else if(mes==6){
        printf("Mês: Junho");
    }else if(mes==7){
        printf("Mês: Julho");
    }else if(mes==8){
        printf("Mês: Agosto");
    }else if(mes==9){
        printf("Mês: Setembro");
    }else if(mes==10){
        printf("Mês: Outubro");
    }else if(mes==11){
        printf("Mês: Novembro");
    }else if(mes==12){
        printf("Mês: Dezembro");

    }else{
        printf("Mês inválido.");
    }
}
