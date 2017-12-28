//Escreva um programa em C que leia dois horários (hora, minuto e segundo) e calcule
//a quantidade de segundos decorridos entre os dois horários.



#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL,"portuguese");
    int h1,m1,s1,h2,m2,s2,aux1,aux2;
    printf("Digite a primeira hora, minuto e segundo, respectivamente:");
    scanf("%d %d %d", &h1,&m1,&s1);
    printf("Digite a segunda hora, minuto e segundo, respectivamente:");
    scanf("%d %d %d", &h2,&m2,&s2);
    aux1= h1*3600+m1*60+s1;
    aux2 = h2*3600+m2*60+s2;
    if(aux2>aux1){
        printf("Passaram-se %d segundos entre os dois horários.", (aux2-aux1));
    }else{
        printf("Horários inválidos.");
    }
}
