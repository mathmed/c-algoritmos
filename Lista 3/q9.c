//Escreva um programa em C que leia o sal�rio de um funcion�rio e determine
//quanto ele paga de imposto, de acordo com a tabela abaixo.
//Al�m disso, o programa deve calcular e exibir o sal�rio l�quido do funcion�rio.


#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    float salario,aux;
    printf("Digite seu sal�rio:");
    scanf("%f", &salario);
    if(salario<=1434.59){
        printf("Voc� n�o paga imposto e seu sal�rio l�quido �: R$ %.2f", salario);
    }else if(salario>= 1434.60 && salario <= 2150){
        aux = salario*0.075;
        printf("O seu imposto � no valor de R$ %.2f e seu sal�rio l�quido R$ %.2f", aux, (salario-aux));
    }else if(salario>= 2150.01 && salario <= 2866.70){
        aux = salario*0.15;
        printf("O seu imposto � no valor de R$ %.2f e seu sal�rio l�quido R$ %.2f", aux, (salario-aux));

    }else if(salario>= 2866.71 && salario <= 3582){
        aux = salario*0.225;
        printf("O seu imposto � no valor de R$ %.2f e seu sal�rio l�quido R$ %.2f", aux, (salario-aux));
    }else{
        aux = salario*0.275;
        printf("O seu imposto � no valor de R$ %.2f e seu sal�rio l�quido R$ %.2f", aux, (salario-aux));

    }
}
