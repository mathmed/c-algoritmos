//Escreva um programa em C que leia um n�mero n fornecido pelo usu�rio e
//exiba todos os divisores de n.
#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "portuguese");
    int n,aux, cont = 1;
    printf("Digite um n�mero:");
    scanf("%d", &n);
    aux = n;
    while(cont<=aux){
        if(n%cont == 0){
            printf("%d � divisor de %d \n", cont, n);
            cont+= 1;
        }else{
            cont+=1;
        }
    }

}
