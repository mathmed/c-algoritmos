//Leia dois valores reais, correspondentes �s medidas dos lados de um terreno retangular
//(em metros), calcule e exiba na tela quantos metros de muro ser�o necess�rios para cercar
// terreno por completo (per�metro). Calcule e exiba ainda a �rea do terreno e o valor a ser
//pago de IPTU, considerando que a prefeitura cobra R$ 0,29/m� de terreno.//

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    float lado1,lado2,perimetro,area;
    printf("Digite a medida vertical do terreno em metros:");
    scanf("%f",&lado1);
    printf("Digite a medida horizontal do terreno em metros:");
    scanf("%f",&lado2);
    perimetro = (2*lado1)+(2*lado2);
    area = lado1*lado2;
    printf("Ser�o necess�rios %2.2f metros de muro para cercar o terreno\n", perimetro);
    printf("Voc� pagar� R$ %2.2f de IPTU!",(area*0.29));




}
