//A função rand(), ilustrada abaixo, gera números aleatórios. Por exemplo, para gerar
//um número aleatório entre 1 e 6, siga o modelo abaixo. Escreva um programa em C
//que simule um jogo com dois dados, onde os dados devem ser lançados
//simultaneamente. O jogador vence se a soma dos pontos dos dois dados for 7 ou 11,
//caso contrário vence o computador.

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    srand(time(NULL));
    setlocale(LC_ALL,"portuguese");
    int dado1, dado2;
    printf("O dados serão lançados... \n");
    dado1 = rand() % 6+1;
    dado2= rand() % 6+1;
    printf("O primeiro dado caiu com %d, e o segundo com %d \n", dado1,dado2);
    if(dado1+dado2==7 || dado1+dado2==11){
        printf("Você venceu! A soma dos dois dados deu: %d", (dado1+dado2));

    }else{
        printf("Você perdeu ! A soma dos dois dados deu: %d", (dado1+dado2));
    }

}
