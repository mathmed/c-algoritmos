/* Universidade federal do rio grande do norte
                Programação
    Discente: Mateus Medeiros de Araújo
                Lista 5 */

#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "portuguese");
    int escolha, a,b, minutos, hora = 0, n;     //Variáveis utilizadas na função main
    printf("Escolha a questão desejada:");      // Escolha para entrar nas questões
    scanf("%d", &escolha);
    switch(escolha){                            //Switch case para questões
    case 1:
        questao1();
        break;
    case 2:
        printf("Digite dois valores para questão 3(b):");
        scanf("%d %d", &a, &b);
        questao2(&a, &b);
        break;
    case 3:
        questao3();
        break;
    case 4:
        questao4();
        break;
    case 5:
        questao5();
    case 7:
        printf("Digite a quantidade de minutos:");
        scanf("%d", &minutos);
        questao7(&minutos, &hora);
        printf("Conversão: %d horas e %d minutos!", hora, minutos);
        break;
    case 8:
        printf("Digite a quantidade de números a ser somada:");
        scanf("%d", &n);
        printf("Resultado: %d", questao8(n));
        break;
    case 9:
        questao9();
        break;
    case 10:
        questao10();
        break;
    default:
        printf("Questão não encontrada.");
    }
}


int questao1(){
    int x, y, *p;
    y = 10;
    p = &y;
    (*p)++;
    --x;
    (*p) += x;
    printf("X: %d\nY: %d\nP: %d\n", x,y,*p);
}

int questao2(int *i, int *j){
    printf("Questão 2(a): \n");
    int x, *p;
    x = 100;
    p = &x;
    printf("Valor de p: %d.\n", *p);
    printf("Questão 2(b): \n");
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
    printf("%d %d", *i, *j);
}

int questao3(){
    int i=99,j;
    int *p;
    p = &i;
    j = *p + 100;
    printf("%d", j);
}

int questao4(){
    int a=5, b=12;
    int *p;
    int *q;
    p = &a;
    q = &b;
    int c = *p + *q;
    printf("%d", c);
}

int questao5(){
    int i=7, j=3;
    int *p;
    int **r;
    p = &i;
    r = &p;
    int c = **r + j;
    printf("%d", c);
}

int questao7(int *min, int *hora){
    if(*min>60){
        while(*min>60){
            (*hora)++;
            *min-=60;
        }
    }
}

int questao8(int n){
    if (n==1){
        return 1;
    }else{
        return n+questao8(n-1);
    }
}

int questao9(){
    int y, *p, x; y = 0;        // Definindo variáveis e ponteiros, y=0
    p = &y;                     // O ponteiro p aponta para o conteúdo de y = 0
    x = *p;                     // Variável x rece o valor armazenado na posição apontada por p, ou seja y, que vale 0, isso implica que x=0
    x = 4;                      // x agora vale 4, x=4
    (*p)++;                     // conteúdo de p, ou seja y, tem um incremento, então y=1
    x--;                        // x tem um decremento, x=3
    (*p) += x;                  // o conteúdo de p (y) recebe o que já tem mais x, então y = 4
    printf ("y = %d\n", y);
    return 0;
}

int questao10(){

    int x, *p, **q;
    p = &x;
    q = &p;
    x = 10;
    printf("\n%d\n", **q); // ERRO CORRIGODO AQUI, TROCANDO &q por **q
    return 0;
}
