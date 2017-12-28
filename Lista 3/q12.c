//Escreva um programa em C que lê o peso (em Kg) e a altura (em m) de um indivíduo e
//determina o seu IMC. Além disso, o programa deve apresentar a situação do indivíduo, de
//acordo com a tabela abaixo:


#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    float peso, altura,imc;
    printf("Digite seu peso (kg) seguido da sua altura (metros):");
    scanf("%f %f", &peso, &altura);
    imc = peso/(pow(altura,2));
    if (imc<18.5){
        printf("Você está abaixo do peso ideal");
    }else if(imc >=18.5 && imc <=24.9){
        printf("Peso normal");
    }else if(imc >=25 && imc <=29.9){
        printf("Você está acima de seu peso" );
    }else if(imc >=30 && imc <=34.9){
        printf("Obesidade grau I" );
    }else if(imc >=35 && imc <=39.9){
        printf("Obesidade grau II" );
    }else if(imc >=40){
        printf("Obesidade grau III" );

    }
}
