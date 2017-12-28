//De acordo com as leis brasileiras, o cidad�o n�o pode exercer seu direito de votar at�
//que tenha completado 16 anos de idade. Entre 16 e 18 anos, o voto � facultativo e
//ap�s ter completado os 18 anos, o voto torna-se obrigat�rio. Por�m, ap�s ter
//completado 70 anos, o voto volta a ser facultativo. Em rela��o ao direito a conduzir
//ve�culos automotores, a idade m�nima � de 18 anos, assim como a idade penal. Al�m
//disso, se for do sexo masculino, o cidad�o deve ter estar em dia com suas obriga��es
//militares a partir dos 18 anos de idade. Escreva um programa em C que leia a idade
//e o sexo do indiv�duo e descreva seus direitos e deveres em rela��o � possibilidade
//de votar, dirigir, responder criminalmente e sobre o servi�o militar obrigat�rio.

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
            printf("Voc� ainda n�o possui direitos ou deveres em rela��o � voto, direito de dirigir, responder criminalmente ou servi�o militar obrigatorio");

        }else if(idade>=16 && idade <18){
            printf("Voc� tem direito � voto facultativo.");
        }else if(idade>=18 && idade <70){
            printf("Voc� tem o dever de votar, tem o direito de conduzir ve�culos, � um cidad�o com idade penal e deve estar em dia com obriga��es militares.");
        }else if(idade>=70){
            printf("Voc� tem o direito de conduzir ve�culos, seu voto � facultativo, voc� tem idade penal.");
        }

    }else if(strcmp (sexo , "F") == 0){
        if(idade<16){
            printf("Voc� ainda n�o possui direitos ou deveres em rela��o � voto, direito de dirigir ou responder criminalmente");
        }else if(idade>=16 && idade <18){
            printf("Voc� tem direito � voto facultativo.");
        }else if(idade>=18 && idade <70){
            printf("Voc� tem o dever de votar, tem o direito de conduzir ve�culos e � um cidad�o com idade penal");
        }else if(idade>=70){
            printf("Voc� tem o direito de conduzir ve�culos, seu voto � facultativo, voc� tem idade penal.");
        }

    }else{
        printf("Idade ou sexo inv�lidos.");
    }
}
