//Escreva um programa em C para ler e imprimir três números. Se o primeiro for positivo,
//imprimir sua raiz quadrada, caso contrário, imprimir o seu quadrado; se o segundo
//número for maior que 10 e menor que 100, imprimir a mensagem: “Número está entre
//10 e 100 – intervalo permitido”; se o terceiro número for menor que o segundo, calcular
//e imprimir a diferença entre eles, caso contrário, imprimir o terceiro número adicionado
//de 1.

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    float n1, n2, n3;
    printf("Entre com 3 números:");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Analisando primeiro número... \n");
    if(n1>=0){
        printf("A raiz quadrada de %.2f é %.2f ! \n", n1, (sqrt(n1)));
    }else{
        printf("O quadrado de %.2f é %.2f ! \n", n1, (pow(n1, 2)));
    }
    printf("Analisando segundo número... \n");
    if(n2>10 && n2 <100){
        printf("O número %.2f está entre 10 e 100, intervalo permitido. \n", n2);
    }
    printf("Analisando terceiro número... \n");
    if(n3<n2){
        printf("A diferença entre %.2f e %.2f é: %.2f", n3, n2, (n2-n3));
    }else{
       printf("O número %.2f somado à %.2f é: %.2f", n3, n1, (n1+n3));
    }
}
