//Escreva um programa em C que, dada a idade de um nadador, classifique-o em uma
//das seguintes categorias:


#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int idade;
    printf("Digite sua idade:");
    scanf("%d", &idade);
    if(idade>=5 && idade<=7){
        printf("Categoria: Infantil A");
    }else if(idade>=8 && idade <=10){
        printf("Categoria: Infantil B");
    }else if(idade>=11 && idade <=13){
        printf("Categoria: Juvenil A");
    }else if(idade>=14 && idade <=17){
        printf("Categoria: Juvenil B");
    }else if(idade>= 18){
        printf("Categoria: Sênior");
    }else{
        printf("Idade inválida.");
    }



}
