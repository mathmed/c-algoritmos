// RESPOSTAS LISTA 7 DE PROGRAMAÇÃO, ALUNO MATEUS MEDEIROS DE ARAÚJO

#include <stdio.h>                  //IMPORTANTO BIBLIOTECAS
#include <locale.h>
#include <math.h>

void main(void){
    setlocale(LC_ALL,"portuguese");
	srand(time(NULL));
	int resposta;                                         //VARIÁVEL PARA GUARDAR A RESPOSTA E ACESSAR A QUESTÃO
	printf("Digite o número da questão:");
	scanf("%d", &resposta);
	switch(resposta){
		case 1:
			questao1();
			break;
		case 2:                              // SWITCH CASE PARA ACESSAR AS QUESTÕES
			questao2();
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
		default:
			printf("Questão inexistente.");
	}
}



void questao1(void){
		int matriz[3][3], matrizQuadrada[3][3];                 //CRIANDO AS MATRIZES
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				printf("Digite um valor para a matriz linha %d coluna %d: ", i+1, j+1);     //LOOP PARA PREENCHER AS MATRIZES
				scanf("%d", &matriz[i][j]);
				matrizQuadrada[i][j]= pow(matriz[i][j], 2);
			}
		}

		printf("Matriz com valores elevados ao quadrado: \n");
		for(int i =0; i<3; i++){
			for(int j= 0; j<3; j++){
				printf("%d ", matrizQuadrada[i][j]);                     //LOOP PARA PRINTAR A MATRIZ QUADRADA
			}
			printf("\n");
		}

}

void questao2(void){
	int matrizA[3][2], matrizB[3][2];          //CRIANDO AS MATRIZES

	for(int i=0; i<3; i++){
		for(int j=0; j<2; j++){
			printf("Digite um valor para a primeira matriz linha %d coluna %d: ", i+1, j+1);       //PRENCHENDO A PRIMEIRA MATRIZ
			scanf("%d", &matrizA[i][j]);
			}
		}

	printf("\n");
	for(int i=0; i<3; i++){
		for(int j=0; j<2; j++){
			printf("Digite um valor para a segunda matriz linha %d coluna %d: ", i+1, j+1);         // PREENCHENDO A SEGUNDA MATRIZ
			scanf("%d", &matrizB[i][j]);
			}
		}


	printf("Matriz soma: \n");
	for(int i =0; i<3; i++){
		for(int j=0; j<2; j++){
			printf("%d ", matrizA[i][j]+matrizB[i][j] );                   //PRINTANDO A SOMA DAS DUAS
		}
		printf("\n");
	}
	printf("\n \n");

	printf("Matriz diferença: \n");
	for(int i =0; i<3; i++){
		for(int j=0; j<2; j++){                                    //PRINTANDO A DIFERENÇA ENTRE AS MATRIZES
			printf("%d ", matrizA[i][j]-matrizB[i][j] );
		}
		printf("\n");
	}

}

void questao3(void){
	int matriz[5][5], soma=0, cont=0; 			//CRIANDO A MATRIZ
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			printf("Digite um valor para a matriz linha %d coluna %d: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	soma+= matriz[cont][cont];          // CALCULANDO A DIAGONAL
	cont++;

	}

	printf("Soma da diagonal principal da matriz: %d", soma);


}


void questao4(void){
	int l, c;
	printf("Digite o número de linhas seguido do número de colunas da matriz:");
	scanf("%d %d", &l, &c);
	int matriz[l][c], matrizT[c][l];             //CRIANDO A MATRIZ COM BASE NOS DADOS INFORMADOS
	for(int i=0; i<l; i++){
		for(int j=0; j<c; j++){
			printf("Digite um valor para sua matriz, linha: %d coluna: %d: ", i+1, j+1);   //PREENCHENDO A MATRIZ
			scanf("%d", &matriz[i][j]);
			matrizT[j][i] = matriz[i][j]; //ADICIONANDO OS ELEMENTOS INVERSAMENTE NA MATRIZ TRANSPOSTA
		}
	}

	printf("\nAqui está sua matriz:\n");
	for(int i=0; i<l; i++){
		for(int j=0; j<c; j++){
			printf("%d ", matriz[i][j]);   //PRINTANDO A MATRIZ NORMAL

		}
		printf("\n");
	}

	printf("\nAqui está sua matriz transposta:\n");
		for(int i=0; i<c; i++){
			for(int j=0; j<l; j++){
				printf("%d ", matrizT[i][j]);   //PRINTANDO A MATRIZ TRANSPOSTA

			}
			printf("\n");
		}

}

void questao5(void){
	int matrizA[3][3], matrizB[3][3], matrizMult[3][3], aux= 0, soma=0;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("Digite um valor para a matriz um linha %d coluna %d: ", i+1, j+1);   //PREENCHENDO A PRIMEIRA MATRIZ
			scanf("%d", &matrizA[i][j]);
		}
	}

	printf("\n");

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("Digite um valor para a matriz dois linha %d coluna %d: ", i+1, j+1);  //PREENCHENDO A SEGUNDA MATRIZ
			scanf("%d", &matrizB[i][j]);
		}
	}


	for(int i=0; i<3; i++){
		aux= 0;
		for(int j=0; j<3; j++){
			soma = matrizA[0][j]*matrizB[j][i];                    //CRIANDO A PRIMEIRA LINHA DA MATRIZ MULT
			aux+=soma;

		}
		matrizMult[0][i] = aux;
	}
	soma = 0;

	for(int i=0; i<3; i++){
		aux= 0;
		for(int j=0; j<3; j++){
			soma = matrizA[1][j]*matrizB[j][i];         //CRIANDO A SEGUNDA LINHA DA MATRIZ MULT
			aux+=soma;

		}
		matrizMult[1][i] = aux;
	}
	soma=0;

	for(int i=0; i<3; i++){
		aux= 0;
		for(int j=0; j<3; j++){
			soma = matrizA[2][j]*matrizB[j][i];           ////CRIANDO A TERCEIRA LINHA DA MATRIZ MULT
			aux+=soma;

		}
		matrizMult[2][i] = aux;
	}
	printf("\n Matriz multiplicação: \n");
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d ", matrizMult[i][j]);         //PRINTANDO A MATRIZ

		}
		printf("\n");
	}
}

void questao6(void){
	int l, c, auxLinhas=0, auxColunas=0;
	printf("Digite o número de linhas seguido do número de colunas da matriz:");
	scanf("%d %d", &l, &c);
	int matriz[l][c];            //CRIANDO A MATRIZ COM BASE NOS DADOS INFORMADOS

	for(int i=0; i<l; i++){
		for(int j=0; j<c; j++){
			printf("Digite um valor para sua matriz, linha: %d coluna: %d: ", i+1, j+1);   //PREENCHENDO A MATRIZ
			scanf("%d", &matriz[i][j]);
		}

	}
	printf("\nAqui está sua matriz:\n");
	for(int i=0; i<l; i++){
		for(int j=0; j<c; j++){
			printf("%d ", matriz[i][j]);   //PRINTANDO A MATRIZ NORMAL

		}
		printf("\n");
	}
	printf("\n");

	for(int i=0; i<l; i++){
			for(int j=0; j<c; j++){
				auxLinhas += matriz[i][j];
			}
			printf("Somatório linha %d: %d \n", i+1, auxLinhas);         //PRINTANDO O SOMATÓRIO DE TODAS LINHAS
			auxLinhas=0;
		}

	printf("\n");

	for(int i=0; i<c; i++){
			for(int j=0; j<l; j++){
				auxColunas += matriz[j][i];
			}
			printf("Somatório coluna %d: %d \n", i+1, auxColunas);   //PRINTANDO O SOMATÓRIO DE TODAS COLUNAS
			auxColunas=0;

		}
}


void questao7(void){
	srand(time(NULL));
	int mega[6], cont1=0, n, nCartoes, cont=0, posicao=0;
	printf("Digite a quantidade de cartões que deseja:");
	scanf("%d", &nCartoes);
	printf("Cartões gerados: \n\n");
		for(int i=0; i<nCartoes; i++){
			cont1=0, cont=0, posicao=0;
			while(cont1<6){               // GERANDO OS 6 N DO CARTAO
				n = rand () % 61;         // SORTEANDO O PRIMEIRO NYMERO
				for(int k=0; k<6;k++){
					if(mega[k]==n){
						cont++;
					}
				}
				if(cont==0 && n!=0){
					mega[posicao]=n;
					posicao++;
					cont1++;

				}else{
					cont=0;
				}
			}

		for(int j =0; j<6; j++){
			printf("%d ", mega[j]);          // PRINTANDO OS VALORES
		}
		printf("\n \n");
	}
}

void questao8(void){
	char nomes[15][50];
	float peso[15], altura[15], somaPeso=0, somaAltura=0, somaIdade=0, idade[15], maisGordo=0, maisAlto=0, maisVelho=0, maisMagro = 100000, maisBaixo = 100000, maisNovo=100000;
	int posicaoMaisGordo, posicaoMaisAlto, posicaoMaisVelho, posicaoMaisMagro, posicaoMaisBaixo, posicaoMaisNovo;

	for(int i=0; i<15; i++){
		printf("Digite o nome da pessoa %d, peso, idade e altura respectivamente ex(Mateus 65 18 1,70):", i+1);      //PREENCHENDO OS VETORES
 		scanf("%s %f %f %f", &nomes[i], &peso[i], &idade[i], &altura[i]);
 		somaAltura+= altura[i];
 		somaPeso+= peso[i];
 		somaIdade+= idade[i];
		printf("\n");
	}

	for(int i=0; i<15; i++){
		printf("Dados de %s: \n Peso: %5.2f \n Idade: %5.0f \n Altura: %5.2f \n\n", nomes[i], peso[i],idade[i],altura[i]);
	}
	printf("\n\n");


	printf("Média de altura do grupo: %5.2f\n Média de peso do grupo: %5.2f\n Média de idade do grupo: %5.0f \n\n", somaAltura/15, somaPeso/15, somaIdade/15);
	for(int i=0; i<15; i++){
		if(peso[i] > maisGordo){
			maisGordo= peso[i];
			posicaoMaisGordo=i;
		}

		if(altura[i] > maisAlto){           //SALVANDO OS DADOS DA PESSOA MAIS VELHA, MAIS GORDA E MAIOR;
			maisAlto= altura[i];
			posicaoMaisAlto=i;
		}

		if(idade[i] > maisVelho){
			maisVelho= idade[i];
			posicaoMaisVelho=i;
		}

	}


	printf("Pessoa mais velha: %s, com idade de %5.0f anos.\nPessoa mais gorda: %s, com peso de %5.2f quilos.\nPessoa mais alta: %s, com %5.2f de alura.\n\n", nomes[posicaoMaisVelho], idade[posicaoMaisVelho], nomes[posicaoMaisGordo], peso[posicaoMaisGordo], nomes[posicaoMaisAlto], altura[posicaoMaisAlto]);

	for(int i=0; i<15; i++){
		if(peso[i] < maisMagro){
			maisMagro= peso[i];
			posicaoMaisMagro=i;
		}

		if(altura[i] < maisBaixo){           //SALVANDO OS DADOS DA PESSOA MAIS NOVA, MAIS MAGRA E MAIS BAIXA;
			maisBaixo= altura[i];
			posicaoMaisBaixo=i;
		}

		if(idade[i] < maisNovo){
			maisNovo= idade[i];
			posicaoMaisNovo=i;
		}

	}


	printf("Pessoa mais nova: %s, com idade de %5.0f anos.\nPessoa mais magra: %s, com peso de %5.2f quilos.\nPessoa mais baixa: %s, com %5.2f de alura.\n\n", nomes[posicaoMaisNovo], idade[posicaoMaisNovo], nomes[posicaoMaisMagro], peso[posicaoMaisMagro], nomes[posicaoMaisBaixo], altura[posicaoMaisBaixo]);


}
