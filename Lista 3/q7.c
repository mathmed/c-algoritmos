//Escreva um programa em C que leia três valores inteiros e escreva-os em ordem crescente.
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    int a,b,c;
    printf("Digite 3 números inteiros:");
    scanf("%d %d %d", &a, &b, &c);
    if (a>b && b>c){
        printf("A ordem crescente é: %d, %d, %d", c,b,a);
    }else if(a>c && c>b){
        printf("A ordem crescente é: %d, %d, %d", b,c,a);

    }else if(b>a && a>c){
        printf("A ordem crescente é: %d, %d, %d", c,a,b);
    }else if(b>c && c>a){
        printf("A ordem crescente é: %d, %d, %d", a,c,b);
    }else if(c>a && a>b){
        printf("A ordem crescente é: %d, %d, %d", b,a,c);
    }else if(c>b && b>a){
        printf("A ordem crescente é: %d, %d, %d", a,b,c);
    }else{
        printf("Existem números repetidos.");
    }



}

