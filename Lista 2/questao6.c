//Leia um valor inteiro, correspondente ao lado de um quadrado, calcule e exiba na tela o per�metro e a �rea do quadrado.//

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int lado,perimetro,area;
    printf("Digite o lado do quadrado em M:");
    scanf("%d", &lado);
    perimetro = lado*4;
    area = lado*lado;
    printf("O per�metro do quadrado � %d \n", perimetro);
    printf("A area do quadrado � %d \n", area);


}
