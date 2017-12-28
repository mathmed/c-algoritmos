//Escreva um programa em C que encontre os k primeiros múltiplos de um
//determinado número n. Os valores de n e k devem ser fornecidos pelo usuário

#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "portuguese");
    int n,k;
    printf("Digite o número para econtrar os múltiplos:");
    scanf("%d", &k);
    printf("Digite quantos números deseja:");
    scanf("%d", &n);
    int cont = 0, aux = 1;

    while(cont < n){
        if(k%aux==0){
            printf("%d é multiplo de %d. \n", aux, k);
            cont+=1;
            aux+=1;
        }else{
            aux+=1;
        }
    }


}
