//Escreva um programa em C que leia o salário de um funcionário e determine
//quanto ele paga de imposto, de acordo com a tabela abaixo.
//Além disso, o programa deve calcular e exibir o salário líquido do funcionário.


#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    float salario,aux;
    printf("Digite seu salário:");
    scanf("%f", &salario);
    if(salario<=1434.59){
        printf("Você não paga imposto e seu salário líquido é: R$ %.2f", salario);
    }else if(salario>= 1434.60 && salario <= 2150){
        aux = salario*0.075;
        printf("O seu imposto é no valor de R$ %.2f e seu salário líquido R$ %.2f", aux, (salario-aux));
    }else if(salario>= 2150.01 && salario <= 2866.70){
        aux = salario*0.15;
        printf("O seu imposto é no valor de R$ %.2f e seu salário líquido R$ %.2f", aux, (salario-aux));

    }else if(salario>= 2866.71 && salario <= 3582){
        aux = salario*0.225;
        printf("O seu imposto é no valor de R$ %.2f e seu salário líquido R$ %.2f", aux, (salario-aux));
    }else{
        aux = salario*0.275;
        printf("O seu imposto é no valor de R$ %.2f e seu salário líquido R$ %.2f", aux, (salario-aux));

    }
}
