//Leia um valor inteiro, correspondente ao lado de um quadrado, calcule e exiba na tela o perímetro e a área do quadrado.//

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int lado,perimetro,area;
    printf("Digite o lado do quadrado em M:");
    scanf("%d", &lado);
    perimetro = lado*4;
    area = lado*lado;
    printf("O perímetro do quadrado é %d \n", perimetro);
    printf("A area do quadrado é %d \n", area);


}
