//A fun��o rand(), ilustrada abaixo, gera n�meros aleat�rios. Por exemplo, para gerar
//um n�mero aleat�rio entre 1 e 6, siga o modelo abaixo. Escreva um programa em C
//que simule um jogo com dois dados, onde os dados devem ser lan�ados
//simultaneamente. O jogador vence se a soma dos pontos dos dois dados for 7 ou 11,
//caso contr�rio vence o computador.

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    srand(time(NULL));
    setlocale(LC_ALL,"portuguese");
    int dado1, dado2;
    printf("O dados ser�o lan�ados... \n");
    dado1 = rand() % 6+1;
    dado2= rand() % 6+1;
    printf("O primeiro dado caiu com %d, e o segundo com %d \n", dado1,dado2);
    if(dado1+dado2==7 || dado1+dado2==11){
        printf("Voc� venceu! A soma dos dois dados deu: %d", (dado1+dado2));

    }else{
        printf("Voc� perdeu ! A soma dos dois dados deu: %d", (dado1+dado2));
    }

}
