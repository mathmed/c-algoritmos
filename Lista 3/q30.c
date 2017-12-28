//Escreva um programa em C para ler e imprimir tr�s n�meros. Se o primeiro for positivo,
//imprimir sua raiz quadrada, caso contr�rio, imprimir o seu quadrado; se o segundo
//n�mero for maior que 10 e menor que 100, imprimir a mensagem: �N�mero est� entre
//10 e 100 � intervalo permitido�; se o terceiro n�mero for menor que o segundo, calcular
//e imprimir a diferen�a entre eles, caso contr�rio, imprimir o terceiro n�mero adicionado
//de 1.

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    float n1, n2, n3;
    printf("Entre com 3 n�meros:");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Analisando primeiro n�mero... \n");
    if(n1>=0){
        printf("A raiz quadrada de %.2f � %.2f ! \n", n1, (sqrt(n1)));
    }else{
        printf("O quadrado de %.2f � %.2f ! \n", n1, (pow(n1, 2)));
    }
    printf("Analisando segundo n�mero... \n");
    if(n2>10 && n2 <100){
        printf("O n�mero %.2f est� entre 10 e 100, intervalo permitido. \n", n2);
    }
    printf("Analisando terceiro n�mero... \n");
    if(n3<n2){
        printf("A diferen�a entre %.2f e %.2f �: %.2f", n3, n2, (n2-n3));
    }else{
       printf("O n�mero %.2f somado � %.2f �: %.2f", n3, n1, (n1+n3));
    }
}
