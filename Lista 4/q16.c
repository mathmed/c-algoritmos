//Escreva um programa em C que leia um número n fornecido pelo usuário e
//exiba todos os divisores de n.
#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "portuguese");
    int n,aux, cont = 1;
    printf("Digite um número:");
    scanf("%d", &n);
    aux = n;
    while(cont<=aux){
        if(n%cont == 0){
            printf("%d é divisor de %d \n", cont, n);
            cont+= 1;
        }else{
            cont+=1;
        }
    }

}
