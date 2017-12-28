// RESPOSTAS LISTA 7 DE PROGRAMAÇÃO, ALUNO MATEUS MEDEIROS DE ARAÚJO

#include <stdio.h>                  //IMPORTANTO BIBLIOTECAS
#include <locale.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void questao1(void);
void questao2(void);
void questao3(void);
void questao4(void);
void questao5(void);
void questao6(void);
void questao7(void);
void questao8(void);
void questao9(void);


void main (void) {
    setlocale(LC_ALL,"portuguese");
	int resposta;                                         //VARIÁVEL PARA GUARDAR A RESPOSTA E ACESSAR A QUESTÃO
	printf("Digite o número da questão:");
	scanf("%d", &resposta);
	switch(resposta){
		case 1:
		    questao1();
			break;
		case 2:
            questao2();                                // SWITCH CASE PARA ACESSAR AS QUESTÕES
			break;
		case 3:
            questao3();
			break;
		case 4:
            questao4();
			break;
		case 5:
            questao5();
			break;
		case 6:
            questao6();
			break;
		case 7:
            questao7();
			break;
		case 8:
            questao8();
			break;
        case 9:
            questao9();
            break;
		default:
			printf("Questão inexistente.");
	}
}

void questao1(void){
    char cadeia[80];
    int caracteres=0, caracteresPontuacao=0, caracteresNum=0, caracteresMinusculas=0, caracteresVogais=0, palavras=0;
    printf("Digite a(s) palavra(s) para a cadeia de caracteres:");
    scanf(" %80[^\n]", cadeia);
    char vogais[] = "aeiouAEIOU";   //STRING PARA COMPARAR VOGAIS

    for (int i =0; cadeia[i] != '\0'; i++){
        caracteres++;
        if((cadeia[i]>=33 && cadeia[i] <= 47) || (cadeia[i]>=58 && cadeia[i] <= 64)){ //VERIFICANDO SE CONTÉM PONTUAÇÃO
            caracteresPontuacao++;
        }else if(cadeia[i] >= 48 && cadeia[i] <= 57){   //VERIFICANDO SE CONTÉM NÚMEROS
            caracteresNum++;
        }else if(cadeia[i] <= 122 && cadeia[i]>=97){  // VERIFICANDO SE CONTÉM MINÚSUCLAS
            caracteresMinusculas++;
        }
    }

    for (int k = 0; cadeia[k] != '\0'; k++){
        for(int j=0; j < strlen(vogais); j++){
            if(cadeia[k] == vogais[j]){
                caracteresVogais++; // VERIFICANDO AS VOGAIS A PARTIR DA STRING
            }
        }
    }

    for (int k = 0; cadeia[k] != '\0'; k++){
            if(isspace(cadeia[k]) != 0){    // VERIFICANDO A QUANTIDADE DE PALAVRAS NA STRING
                palavras++;
            }
        }


    printf("Número de caracteres (incluindo espaços):%d\nNúmero de minúsculas:%d\nNúmero de vogais: %d\nNúmero de caracteres de pontuação:%d\nNúmeros:%d\nQuantidade de palavras: %d\n ", caracteres, caracteresMinusculas, caracteresVogais, caracteresPontuacao, caracteresNum, palavras+1);
}

void questao2(void){
    char cadeia[80], cadeiaNova[80];
    printf("Digite sua frase/palavra:");          //COLETANDO A STRING
    scanf(" %80[^\n]", cadeia);

    for(int i =0; cadeia[i] != '\0'; i++){
        if( cadeia[i] <= 90 && cadeia[i] >= 65){
            cadeiaNova[i] = tolower(cadeia[i]);
        }else if (cadeia[i] >= 97 && cadeia[i] <= 122){          // TRANSFORMANDO COM TOLOWER E TOUPPER
            cadeiaNova[i] = toupper(cadeia[i]);

        }
    }
    printf("Sua string com caracteres invertidos é: \n\n");
    for(int j =0; cadeia[j] != '\0'; j++){
        printf("%c", cadeiaNova[j]);                     // PRINTANDO A STRING
    }
}


void questao3(void){
    char cadeia[80], cadeiaNova[80];
    printf("Digite sua frase/palavra:");          //COLETANDO A STRING
    scanf(" %80[^\n]", cadeia);
    char vogais[] = "aeiouAEIOU";

    int x = strlen(cadeia) - 1;
    int posicao = 0;
    for(x; x >=0; x--){
        cadeiaNova[posicao] = cadeia[x];       // ALTERANDO A ORDEM DAS STRING
        posicao++;

        }
    int aux = strlen(cadeiaNova);
    for(int i = 0; i < strlen(cadeiaNova); i++){
        for(int j =0; j < strlen(vogais); j++){          // TRANSFORMANDO AS VOGAIS NO CARACTERE "#"
            if(cadeiaNova[i] == vogais[j] ){
                cadeiaNova[i] = '#';
            }

        }
    }
    printf("Sua string: \n\n");

    for(int j =0; cadeia[j] != '\0'; j++){
        printf("%c", cadeiaNova[j]);                     // PRINTANDO A STRING
    }
}

void questao4 (void){
    char cadeia[80];
    printf("Digite seu nome completo:");          //COLETANDO A STRING
    scanf(" %80[^\n]", cadeia);
    int posicao = 0;
    int contadorNomePrincipal =0;
    int inicioDoUltimoNome;
    int tamanho = strlen(cadeia) -1 ;

    for(tamanho; tamanho >= 0; tamanho--) {
        if(isspace(cadeia[tamanho]) != 0){
            break;

        }else{                                                       // VERIFICANDO A QUANTIDADE DE CARACTERES QUE TEM O ÚLTIMO NOME
            contadorNomePrincipal++;
        }
    }
    tamanho++;
    contadorNomePrincipal--;

    char cadeiaNomePrincipal[contadorNomePrincipal];       //CRIANDO O VETOR DO ÚLTIMO NOME

    for(tamanho; cadeia[tamanho] != '\0'; tamanho++){
        cadeiaNomePrincipal[posicao] = toupper(cadeia[tamanho]);  // ADICIONANDO O ÚLTIMO NOME JÁ MAIÚSCULO NO VETOR
        posicao++;
    }
    cadeiaNomePrincipal[posicao] = '\0';              // FIM DO VETOR

    printf("Aqui está: \n\n");
    for(int j =0; cadeiaNomePrincipal[j] != '\0'; j++){
        printf("%c", cadeiaNomePrincipal[j]);                     // PRINTANDO A O ÚLTIMO NOME
    }
    printf(", ");

    for(int j =0; cadeia[j] != ' '; j++){
        printf("%c", cadeia[j]);                     // PRINTANDO O PRIMEIRO NOME
    }



}


void questao5 (void){
    char string2[40],  stringConcatenada[80];
    printf("Digite o conteúdo da primeira string:");          //COLETANDO AS STRINGS
    scanf(" %40[^\n]", stringConcatenada);
    printf("Digite o conteúdo da segunda string:");
    scanf(" %40[^\n]", string2);
    int i=0, j=0, k=0;

    while( stringConcatenada[i] != '\0'){             //IDENTIFICANDO ULTIMA POSICAO
        i++;
    }

    for(j; string2[j] != '\0'; j++){
        stringConcatenada[i] = string2[j];        // ADICIONANDO A PARTIR DA ULTIMA POSICAO
        i++;
    }

    stringConcatenada[i] = '\0';                       // FINALIZANDO

    printf("Aqui está sua string concatenada: \n\n");
    for(k; stringConcatenada[k] != '\0'; k++){             //EXIBINDO
        printf("%c", stringConcatenada[k]);
    }


}

void questao6 (void){
    char matriz[10][10] = {"zero","um", "dois","três","quatro","cinco","seis","sete","oito","nove"};  // MATRIZ CONTENDO OS NÚMEROS UTILIZADOS
    int numero, aux;                   // DECLARANDO AUXILIARES
    printf("Digite o número:");
    scanf("%d", &numero);                   //GUARDANDO NÚMERO INTEIRO DIGITADO
    char vetorNum[30];
    itoa(numero, vetorNum, 10);                   // TRANSFORMANDO NÚMERO DIGITADO EM UMA STRING E ARMAZENANDO NO VETOR

    printf("Você digitou: \n\n");
    for(int i=0; i< strlen(vetorNum) ; i++){            //LOOP ATÉ Á QUANTIDADE DE CARACTERES DA STRING ACABAR
        aux = vetorNum[i] - 48;                            // AUX TRANSFORMANDO O VETORNUM[I] QUE É CHAR, EM UM INTEIRO A PARTIR DA TABELA ASCII
        printf("%s", matriz[aux]);                //PRINTANDO A PARTIR DA POSIÇÃO DA MATRIZ
        if(i+1 != strlen(vetorNum)){                  // VERIFICANDO QUANDO UTILIZAR VIRGULA
            printf(", ");
        }
    }
    printf(".");           //FINALIZANDO

}


void questao7(void){
    char cadeia[80], caractere[2], cadeiaNova[80];
    int posicao = 0;

    printf("Digite sua palavra/frase:");
    scanf(" %40[^\n]", cadeia);
    printf("Digite a letra a ser removida:");        //COLHENDO INFORMAÇÕES
    scanf("%s", caractere);

    for(int i=0; i< strlen(cadeia); i++){
        if(cadeia[i] != caractere[0]){
            cadeiaNova[posicao] = cadeia[i];         // VERIFICANDO E ADICIONANDO NA NOVA CADEIA
            posicao++;
        }
    }
    printf("Sua string sem a letra informada:\n\n");
    for(int j =0; j< strlen(cadeiaNova); j++){              //PRINTANDO
        printf("%c", cadeiaNova[j]);
    }

}


void questao8(void){
    char cadeia[80], caractere[2];
    int indice;
    printf("Digite sua palavra/frase:");
    scanf(" ", cadeia);
    printf("Digite o índice:");
    scanf("%d", &indice);                                              //COLETANDO DADOS
    printf("Digite a letra a ser inserida no índice:");
    scanf("%s", caractere);

    printf("Sua string com o novo caractere: \n\n");
    for(int i =0; i< strlen(cadeia)+1; i++){
        if(i != indice){
            printf("%c", cadeia[i]);
        }
        else{                                                                       //EMPURRANDO
            printf("%c", caractere[0]);
            printf("%c", cadeia[i]);
        }
    }

}

void questao9 (void) {
        char matriz[20][80];                                        //CRIANDO A MATRIZ
    int posicaoMaiorNome=0, posicaoMenorNome=0, contadorDeNomes=0, contadorDeLetras=0;





    for(int j=0; j<20; j++){

        printf("Digite o nome e sobrenome da pessoa %d (Ex: Mateus Medeiros) ou digite FIM para sair:", j+1);
        scanf(" %80[^\n]", matriz[j]);                                        //COLETANDO OS NOMES                                                       // CONTANDO QUANTAS STRINGS FORAM ADICIONADAS
        contadorDeNomes++;
        if(strlen(matriz[j]) > strlen(matriz[posicaoMaiorNome])){              //  IDENTIFICANDO A POSIÇÃO DO NOME COM MAIOR QUANTIDADE DE CARACTERES
            posicaoMaiorNome =j;
        }

        if(strcmp (matriz[j] , "FIM") == 0) {                         // PARANDO O LAÇO E TIRANDO A TRING "FIM" DO VETOR DE STRINGS
            strcpy(matriz[j], " ");
            contadorDeNomes--;
            break;


        }
        if(strlen(matriz[j]) < strlen(matriz[posicaoMenorNome])){
            posicaoMenorNome =j;                                                    //  IDENTIFICANDO A POSIÇÃO DO NOME COM MENOR QUANTIDADE DE CARACTERES
        }


    }

    printf("\nO nome com maior quantidade de caracteres é: %s com %d de comprimento!\n\n", matriz[posicaoMaiorNome], strlen(matriz[posicaoMaiorNome])-1);
    printf("O nome com menor quantidade de caracteres é: %s com %d de comprimento!\n\n", matriz[posicaoMenorNome], strlen(matriz[posicaoMenorNome])-1);        //PRINTANDO O MAIOR E MENOR NOME


    for(int k =0; k < contadorDeNomes; k++){
        for( int l =0; l< strlen(matriz[k]); l++){                 //CONTANDO TODOS CARACTERES (INCLUINDO ESPAÇOS)
            contadorDeLetras++;
        }
    }
    float espacos = (float)(contadorDeLetras - contadorDeNomes);
    float media = (float)(espacos / contadorDeNomes); // REMOVENDO OS ESPAÇOS DA CONTAGEM
    printf("A média de caracteres por nome é de: %5.2f \n\n", media);  //PRINTANDO O RESULTADO


    int retorno;
    char *aux;
    aux = (char*)malloc(sizeof(char*)*30);


    for(int m = 0; m < contadorDeNomes; m++){
        for(int n =0; n < contadorDeNomes; n++){
        if(n+1 < contadorDeNomes){
            retorno = strcoll(matriz[n], matriz[n+1]);
            if(retorno > 0){
                strcpy(aux, matriz[n]);                                //COLOCANDO O VETOR EM ORDEM POR NOMES
                strcpy(matriz[n], matriz[n+1]);
                strcpy(matriz[n+1], aux);
            }
        }


        }
    }

    printf("Ordem alfabetica dos nomes e sobrenomes: \n");
    for(int u = 0; u < contadorDeNomes; u++){             // PRINTANDO O VETOR
        printf("%s \n", matriz[u]);
    }



}
