//Leia a idade de uma pessoa em anos, calcule e exiba essa idade em meses, em semanas, em dias, em horas, em minutos e em segundos.
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int idadePessoa,horas, semanas, meses, dias, minutos, segundos;
    printf("Digite sua idade:");
    scanf("%d", &idadePessoa);
    meses = idadePessoa*12;
    semanas = idadePessoa*52;
    dias = idadePessoa * 365;
    horas = idadePessoa*8760;
    minutos = idadePessoa* 525600;
    segundos = idadePessoa* 31536000;
    printf("Voc� viveu aproximadamente %d meses. \n", meses);
    printf("Voc� viveu aproximadamente %d semanas. \n", semanas);
    printf("Voc� viveu aproximadamente %d dias. \n", dias);
    printf("Voc� viveu aproximadamente %d horas. \n", horas);
    printf("Voc� viveu aproximadamente %d minutos. \n", minutos);
    printf("Voc� viveu aproximadamente %d segundos. \n", segundos);
}
