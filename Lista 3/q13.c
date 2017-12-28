//O n�mero de diagonais de um pol�gono pode ser calculado atrav�s da f�rmula
//apresentada a seguir
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int vertices, diag;
    printf("Digite o n�mero de v�rtices do pol�gono:");
    scanf("%d", &vertices);
    if(vertices>=3){
        diag= (vertices*(vertices-3))/2;
        printf("O pol�gono possui %d diagonais.", diag);
    }else{
       printf("Quantidade de v�rtices inv�lida.");
    }
}
