//Escreva um programa em C que encontre os k primeiros m�ltiplos de um
//determinado n�mero n. Os valores de n e k devem ser fornecidos pelo usu�rio

#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "portuguese");
    int n,k;
    printf("Digite o n�mero para econtrar os m�ltiplos:");
    scanf("%d", &k);
    printf("Digite quantos n�meros deseja:");
    scanf("%d", &n);
    int cont = 0, aux = 1;

    while(cont < n){
        if(k%aux==0){
            printf("%d � multiplo de %d. \n", aux, k);
            cont+=1;
            aux+=1;
        }else{
            aux+=1;
        }
    }


}
