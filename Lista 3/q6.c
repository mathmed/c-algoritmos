//Escreva um programa em C que leia tr�s valores inteiros e determine o maior e o menor entre eles.

#include <stdio.h>
#include <locale.h>
int maior (a,b,c){
    if(a>b && a>c){
        return a;
    }else if (b>a && b>c){
        return b;

    }else{
        return c;
    }

}

int menor (a,b,c){
    if(a<b && a<c){
        return a;
    }else if (b<a && b<c){
        return b;

    }else{
        return c;
    }


}
int main (){
    setlocale(LC_ALL,"portuguese");
    int a,b,c, aux1, aux2;
    printf("Digite 3 n�meros:");
    scanf("%d %d %d", &a, &b, &c);
    aux1 = maior(a,b,c);
    aux2= menor(a,b,c);
    printf("O maior n�mero � %d e o menor n�mero � %d", aux1, aux2);
}
