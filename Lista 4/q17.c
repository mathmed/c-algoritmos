//Escreva um programa em C que encontre os números primos compreendidos
//entre 100 e 500.


#include <stdio.h>
#include <locale.h>
#include <locale.h>



int main(){
    setlocale(LC_ALL, "portuguese");
    int n, k, primo;

    for(n=100; n<=500; n++){
        primo=0;
        for(k=1; k<=n; k++)
            if((n%k)==0)
                 primo++;
        if(primo<=2)
            printf("%d é primo\n", n);

    }
    return 0;
}

