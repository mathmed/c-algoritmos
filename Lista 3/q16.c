//Uma lan-house calcula o pre�o de uso das suas m�quinas de acordo com a tabela
//abaixo. Escreva um programa em C que l� o hor�rio (hora/minuto/segundo) de
//entrada e sa�da do usu�rio, calcula a quantidade de tempo utilizado e determina o
//valor a ser pago.
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    float h1, m1, s1, h2,m2,s2, aux1, aux2, difHor, preco;
    printf("Digite em sequ�ncia, hora da entrada, minuto e segundos:");
    scanf("%f %f %f", &h1, &m1, &s1);
    printf("Digite em sequ�ncia, hora da sa�da, minuto e segundos:");
    scanf("%f %f %f", &h2, &m2, &s2);
    aux1= s1+(m1*60)+(h1*3600);
    aux2= s2+(m2*60)+(h2*3600);
    difHor = (aux2-aux1)/3600;
    if(difHor<1){
        preco = (difHor*60)*0.04;
        printf("Voc� pagar� R$ %.2f", preco);
    }else if(difHor >=1 && difHor <2){
        preco = (difHor*60)*0.03;
        printf("Voc� pagar� R$ %.2f", preco);
    }else if(difHor >=2 && difHor <5){
        preco = (difHor*60)*0.02;
        printf("Voc� pagar� R$ %.2f", preco);
    }else if (difHor >=5){
        preco = (difHor*60)*0.01;
        printf("Voc� pagar� R$ %.2f", preco);
    }


}
