//Escreva um programa em C que calcule e imprima a soma dos n primeiros
//n�meros naturais pares. O usu�rio do programa deve fornecer quantos
//n�meros devem ser somados.
#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "portuguese");
    int x, num;
    printf("Quantos numeros devem ser somados:");
    scanf("%d", &num);
    int cont = 1;
    int aux = 0;
    int resultado = 0;

    while(cont<=num){
        if(aux%2 == 0){
            resultado += aux;
            cont+=1;
            aux+=1;

        }
        aux += 1;
    }

    printf("Resultado final : %d (Considerando 0 um n�mero par)", resultado);

}
