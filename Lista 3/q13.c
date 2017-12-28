//O número de diagonais de um polígono pode ser calculado através da fórmula
//apresentada a seguir
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int vertices, diag;
    printf("Digite o número de vértices do polígono:");
    scanf("%d", &vertices);
    if(vertices>=3){
        diag= (vertices*(vertices-3))/2;
        printf("O polígono possui %d diagonais.", diag);
    }else{
       printf("Quantidade de vértices inválida.");
    }
}
