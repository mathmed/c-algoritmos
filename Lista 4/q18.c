//Escreva um programa em C que encontre os números primos compreendidos
//entre a e b, onde os valores de a e b são fornecidos pelo usuário.


#include <stdio.h>
#include <locale.h>



int main(){
    int n, k, primo, inicio, fim;
    printf("Digite inicio e fim:");
    scanf("%d %d", &inicio, &fim);
    setlocale(LC_ALL, "portuguese");

    for(inicio; inicio<=fim; inicio++){
        primo=0;
        for(k=1; k<=inicio; k++)
            if((inicio%k)==0)
                 primo++;
        if(primo<=2)
            printf("%d é primo\n", inicio);

    }
    return 0;
}

