//Escreva um programa em C que entreviste um grupo de n pessoas sobre a
//administra��o do seu munic�pio. Cada indiv�duo deve fornecer uma nota entre
//0 e 10 e ao final da entrevista, o programa dever� fornecer a nota m�dia do
//grupode pessoas.

//Modifique o programa anterior de forma que ele funcione para um grupo
//indeterminado de pessoas. Crie uma condi��o de parada para o programa.

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main(void){
    setlocale(LC_ALL, "portuguese");
    char perg[1];
    float nota,total, n;
    printf("A alguem disponivel para responder? (S ou N)");
    scanf("%s", &perg);
    n=0;
    nota = 0;
    total = 0;


    if(strcmp (perg , "S") == 0){
        while(strcmp (perg , "S") == 0){
            printf("Digite a nota:");
            scanf("%f", &nota);
            total += nota;
            n +=1;
            printf("A alguem disponivel para responder? (S ou N)");
            scanf("%s", &perg);

        }
        printf("A m�dia foi: %f", (total/n));

    }

}
