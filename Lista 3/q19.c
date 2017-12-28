//De acordo com as leis brasileiras, o cidadão não pode exercer seu direito de votar até
//que tenha completado 16 anos de idade. Entre 16 e 18 anos, o voto é facultativo e
//após ter completado os 18 anos, o voto torna-se obrigatório. Porém, após ter
//completado 70 anos, o voto volta a ser facultativo. Em relação ao direito a conduzir
//veículos automotores, a idade mínima é de 18 anos, assim como a idade penal. Além
//disso, se for do sexo masculino, o cidadão deve ter estar em dia com suas obrigações
//militares a partir dos 18 anos de idade. Escreva um programa em C que leia a idade
//e o sexo do indivíduo e descreva seus direitos e deveres em relação à possibilidade
//de votar, dirigir, responder criminalmente e sobre o serviço militar obrigatório.

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    char sexo[1];
    int idade;
    printf("Digite seu sexo M ou F seguido de sua idade:");
    scanf("%s %d", &sexo, &idade);
    if(strcmp (sexo , "M") == 0){
        if(idade<16){
            printf("Você ainda não possui direitos ou deveres em relação à voto, direito de dirigir, responder criminalmente ou serviço militar obrigatorio");

        }else if(idade>=16 && idade <18){
            printf("Você tem direito à voto facultativo.");
        }else if(idade>=18 && idade <70){
            printf("Você tem o dever de votar, tem o direito de conduzir veículos, é um cidadão com idade penal e deve estar em dia com obrigações militares.");
        }else if(idade>=70){
            printf("Você tem o direito de conduzir veículos, seu voto é facultativo, você tem idade penal.");
        }

    }else if(strcmp (sexo , "F") == 0){
        if(idade<16){
            printf("Você ainda não possui direitos ou deveres em relação à voto, direito de dirigir ou responder criminalmente");
        }else if(idade>=16 && idade <18){
            printf("Você tem direito à voto facultativo.");
        }else if(idade>=18 && idade <70){
            printf("Você tem o dever de votar, tem o direito de conduzir veículos e é um cidadão com idade penal");
        }else if(idade>=70){
            printf("Você tem o direito de conduzir veículos, seu voto é facultativo, você tem idade penal.");
        }

    }else{
        printf("Idade ou sexo inválidos.");
    }
}
