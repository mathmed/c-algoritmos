/* UNIVERSIDADE FEDERAL DO RIO GRANDE DO NORTE
    DEPARTAMENTO DE COMPUTAÇÃO E TECNOLOGIA
    BACHARELADO EM SISTEMAS DE INFORMAÇÃO
    DISCENTE: MATEUS MEDEIROS DE ARAÚJO
                PROGRAMAÇÃO

    PROGRAMA VIRA COPO
    FINALIZADO EM 01/09/2017
    AUTOR: @MATHMED
    AUTOR DO PROGRAMA ORIGINAL: ALEXANDRE KURTIÇÃO */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
int main (){
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));                      // CODIGO PARA RAND NAO GERAR SEMPRE O MESMO NÚMERO
    char escolha[1],escolhaNum[2],sorteio2[2];                       // ESCOLHA SENDO UMA STRING
    int sorteio,lista[51],aux; // DECLARANDO VARIÁVEIS

    for (aux=1;aux<51;++aux){  //CRIAR A LISTA
        lista[aux]=aux;
    }
    printf("******************************* \n");
    printf("*****  Programa Vira Copo *****\n");
    printf("******************************* \n \n");
    printf(" --- MENU --- \n \n");
    printf("1 - Sortear o número\n");
    printf("2 - Escolher o número\n");
    printf("Outra tecla para sair\n");  //INICIO
    scanf("%s", &escolha);
    printf("\n");


    if(strcmp (escolha , "1") == 0) {
            sorteio = rand () % 51;           //CRIANDO NÚMERO SORTEADO
            for (aux=1;aux<51;++aux){
                printf("%d\t", lista[aux]);     // PRINTANDO LISTA
            }
            printf("\n");

                while (escolhaNum != sorteio){       //REPETINDO A LISTA ATÉ O NÚMERO CERTO SER ESCOLHIDO
                    printf("\n \nEscolha um número:");
                    scanf("%s", &escolhaNum);
                    printf("\n");
                    int x = atoi(escolhaNum);

                    if(x<sorteio){
                        for (aux=1; aux <= x; ++aux){
                            if(aux==x+1){                       // SE O NÚMERO FOR MENOS, APAGAR TODOS OS MAIORES DO QUE ELE
                                continue;
                            }
                        lista[aux]=0;
                        }

                        for (aux=1;aux<51;++aux){
                            if(lista[aux]!=0){                          // PRINTAR LISTA NOVAMENTE
                                printf("%d\t", lista[aux]);
                            }
                        }
                    }

                    if(x>sorteio){
                        for (aux=x; aux <= 50; ++aux){    // SE O NÚMERO FOR MAIOR, APAGAR TODOS OS MENORES DO QUE ELE
                            if(aux==x){
                                lista[aux]=0;
                            }
                        lista[aux]=0;
                        }

                        for (aux=1;aux<51;++aux){
                            if(lista[aux]!=0){
                                printf("%d\t", lista[aux]);
                            }
                        }
                    }

                    if(x == sorteio){
                        printf(" ---- Acertou!! Pode beber! ---- \n ");             // SE acertar, pode beber
                        break;
                    }
                }
            }else if(strcmp (escolha , "2") == 0) {

                printf("\nEscolha o número a ser sorteado:");
                scanf("%s", &sorteio2);           //CRIANDO NÚMERO SORTEADO
                int sorteio3 = atoi(sorteio2);
                if(sorteio3 <= 50 && sorteio3 >=1 ){
                    printf("\n");
                    for (aux=1;aux<51;++aux){
                        printf("%d\t", lista[aux]);     // PRINTANDO LISTA
                    }
                    printf("\n");

                    while (escolhaNum != sorteio3){       //REPETINDO A LISTA ATÉ O NÚMERO CERTO SER ESCOLHIDO
                        printf("\n \n Escolha um número:");
                        scanf("%s", &escolhaNum);
                        printf("\n");
                        int x = atoi(escolhaNum);


                        if(x<sorteio3){
                            for (aux=1; aux <= x; ++aux){
                                if(aux==x+1){                       // SE O NÚMERO FOR MENOS, APAGAR TODOS OS MAIORES DO QUE ELE
                                    continue;
                                }
                            lista[aux]=0;
                            }

                            for (aux=1;aux<51;++aux){
                                if(lista[aux]!=0){                          // PRINTAR LISTA NOVAMENTE
                                    printf("%d\t", lista[aux]);
                                }
                            }
                        }

                        if(x>sorteio3){
                            for (aux=x; aux <= 50; ++aux){    // SE O NÚMERO FOR MAIOR, APAGAR TODOS OS MENORES DO QUE ELE
                                if(aux==x){
                                    lista[aux]=0;
                                }
                            lista[aux]=0;
                            }

                            for (aux=1;aux<51;++aux){
                                if(lista[aux]!=0){
                                    printf("%d\t", lista[aux]);
                                }
                            }
                        }

                        if(x == sorteio3){
                            printf(" ---- Acertou!! Pode beber! ---- \n ");
                            break;
                        }
                    }
                }else{
                    printf(" \nSomente são válidos números entre 1 e 50! \n");

                }
            }


}
