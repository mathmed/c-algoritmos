
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

void main (void){
	setlocale(LC_ALL, "portuguese");         //BR
    srand(time(NULL));                       // UTILIZAR O RAND
	float notasQ7[5];                        // VETOR UTILIZADO NA QUESTÃO 5
	double *vetorQ8;                         // VETOR UTILIZADO NA QUESTÃO 8
	int escolha, n;                                       // VARIÁVEIS USADAS NO MAIN
	printf("Escolha a questão que quer acesar:");
	scanf("%d", &escolha);
	switch(escolha){
		case 1:
			questao1();
			break;
		case 2:                                            //SWITCH CASE PARA ACESSAR AS QUESTÕES
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
			for(int i =0; i<5; i++){
				printf("Digite a nota:");                        //GUARDADOS NOTAS NO VETOR
				scanf("%f", &notasQ7[i]);
			}
				questao7(notasQ7);                               // ENVIANDO AS NOTAS PARA FUNÇÃO
			break;
		case 8:
			printf("Entre com a quantidade de items a ser preenchidos:");
			scanf("%d", &n);
			vetorQ8 = (double*)malloc(n*sizeof(double));        // FAZENDO ALOCAÇÃO DINÂMICA NO VETOR
			questao8(vetorQ8, n);                               // ENVIANDO VIA PROPS
			printf("Valores retornados: ");                      //PRINTANDO O RETORNO
				for(int j =0; j<n; j++){
					printf("%d ", vetorQ8[j]);
				}
			break;
		case 9:
			questao9();
			break;
		case 10:
			questao10();
			break;
		case 11:
			questao11();
			break;
		case 12:
			questao12();
			break;
		case 13:
			questao13();
			break;

	}


}

void questao1 (void){
	int vetor[5];
	for(int i=0; i<5; i++){
		printf("Digite um numero:");         // GUARDANDO OS NUMEROS
		scanf("%d", &vetor[i]);
	}
	printf("\n Ordem invertida:");
	for(int j=4; j>=0; j--){                   //PRINTANDO INVERSAMENTE
		printf("%d ", vetor[j]);
	}


}

void questao2(void){
	unsigned int vetor[50];   // VETOR COM NÚMEROS POSITIVOS
	int par = 0, impar = 0;
	for(int n=0; n<50; n++){
		printf("Digite um numero:");           //GUARDANDO OS NÚMEORS NO VETOR
		scanf("%d", &vetor[n]);
	}

	for(int i = 0; i<50; i++){                // FAZENDO A CONTAGEM
		if(vetor[i]%2==0){
			par+=1;
		}else{
			impar+=1;
		}
	}

	printf("Existem %d numeros pares e %d numeros impares.", par, impar);
}

void questao3(void){
	int vetor[10], vetorQ[10];
	for(int n=0; n<10; n++){
		printf("Digite um numero:");           //GUARDANDO OS NÚMEROS NO VETOR
		scanf("%d", &vetor[n]);
		vetorQ[n]= pow(vetor[n],2);            // GUARDANDO A POTÊNCIA NO VETORQ AO MESMO TEMPO
	}
	printf("Quadrados:");
	for(int i=0; i<10; i++){                  // PRINTANDO OS RESULTADOS
		printf("%d ", vetorQ[i]);
	}


}

void questao4(void){
	int vetorN[10],numeroMaior, numeroMenor;       // VARIÁVEIS UTILIZADAS
	float vetorA[10], menor = 1000, maior = 0;
	for(int n=0; n<10; n++){
		printf("Digite o número do aluno seguido de sua altura em metros (ex: 1,70):");
		scanf("%d %f", &vetorN[n], &vetorA[n]);    // GUARDANDOS OS DADOS COLETADOS NOS DOIS VETORES
	}
	for(int i=0; i<10; i++){
		if(vetorA[i]>maior){
			maior = vetorA[i];           //LOOP PARA PESQUISAR O MAIOR ALUNO
			numeroMaior = vetorN[i];
		}
	}

	for(int j=0; j<10; j++){
		if(vetorA[j]<menor){            // LOOP PARA PESQUISAR O ALUNO MAIS BAIXO
			menor = vetorA[j];
			numeroMenor = vetorN[j];
		}
	}

	printf(" Numero maior aluno: %d \n Altura maior aluno: %f \n \n Numero menor aluno: %d \n Altura menor aluno: %f ", numeroMaior, maior, numeroMenor, menor);

}

void questao5(void){
	int vetorA[10], vetorB[10], cont = 0;
	for(int n=0; n<10; n++){                             //GUARDANDO OS VALORES NO VETOR
		printf("Digite um numero para o vetor:");
		scanf("%d", &vetorA[n]);
	}
	for(int j =9; j>=0; j--){
		vetorB[cont] = vetorA[j];                    //INVERTENDO OS VALORES
		cont++;
	}
	printf("Vetor invertido:");                      // PRINTANDO OS VALORES
	for(int i=0; i<10; i++){
		printf("%d ", vetorB[i]);
	}

}

void questao6(void){
	float temp[24], soma = 0, media = 0;
	int vezes =0;
	for(int i=0; i<24; i++){
		printf("Digite a temperatura na hora %d :", i+1);
		scanf("%f", &temp[i]);                                     // GUARDANDO AS TEMPERATURAS NO VETOR
		soma += temp[i];                                           // ACUMULANDO OS VALORES
	}
	media = soma/24;                                              //CALCULANDO A MÉDIA
	for (int j=0; j<24; j++){
		if(temp[j]>media){               //LOOP AVERIGUANDO QUANTAS VEZES A TEMPERATURA ESTAVA ACIMA DA MÉDIA
			vezes++;
		}
	}

	printf("A média do dia foi: %f, a temperatura ficou acima da média %d vezes.", media, vezes);
}

void questao7(float *notasQ7){
	float soma =0, media, maior=0, menor=1000;
	for(int i = 0; i<5; i++){
		soma+= notasQ7[i];                        //LOOP PARA SOMAR AS NOTAS
	}
	media = soma/5;
	for(int j =0; j<5; j++){
		if(notasQ7[j]>maior){                    // LOOP PARA PEGAR MAIOR NOTA
			maior = notasQ7[j];
		}
	}
	for(int k =0; k<5; k++){
		if(notasQ7[k]<menor){                   // LOOP PARA PEGAR MENOR NOTA
			menor = notasQ7[k];
		}
	}

	printf("Média do aluno: %5.2f \n Maior nota: %5.2f \n Menor nota: %5.2f \n", media, maior, menor);
}

void questao8(double *vetorQ8, int n){ //RECEBENDO OS ARGUMENTOS DA FUNÇÃO
	for(int i =0; i<n; i++){
		printf("Digite um número:");                //GUARDANDO OS DADOS NO VETOR
		scanf("%d", &vetorQ8[i]);
	}
	return vetorQ8;                 //RETORNANDO O VETOR

}

void questao9(){
	int mega[6], cont1=0, n,aux[60] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60};
		printf("Cartão gerado: \n");
		while(cont1<6){               // GERANDO OS 6 N DO CARTAO
			n = rand () % 60;         // SORTEANDO O PRIMEIRO NYMERO
			if(aux[n]!=0){
				mega[cont1] = n;       //VERIFICAÇÃO PARA ENVIAR O NÚMERO SORTEADO PARA O VETOR MEGA
				aux[n] = 0;
				cont1++;
			}
		}

		for(int i =0; i<6; i++){
			printf("%d ", mega[i]);          // PRINTANDO OS VALORES
		}

}

void questao10(){
	int vetor[10], n, cont=0, pos = 1, contador =0;
	printf("Digite um numero:");
	scanf("%d", &n); 					//GUARDANDO O PRIMEIRO NUMERO
	vetor[0]= n;
	while(contador<9){
		printf("Digite um numero:");
		scanf("%d", &n);
		for(int j=0; j<10; j++){     	//VERIFICAÇÃO PARA VER SE O NÚMERO JA ESTA NO VETOR
			if(vetor[j]==n){
				cont+=1;
			}
		}
		if(cont==0){
			vetor[pos]=n;
			pos++;
			contador++;
		}else{
			cont=0;
		}
	}
	printf("Vetor com números não repetidos: \n");
	for(int i= 0; i<10; i++){                               //EXIBINDO VALORES DIGITADOS
		printf("%d ", vetor[i]);
	}

}

void questao11(){
	int vetor[10], vetorB[10],n, cont=0,pos2 = 1, contador =1; // DECLARANDO VARIAVEIS E VETORS
	printf("Digite um numero vetor 1 :");
	scanf("%d", &n);
	vetor[0]=n;                    //GUARDANDO O PRIMEIRO VALOR NO VETOR E VETORFINAL
	while(contador<10){
		printf("Digite um numero vetor 1 :");
		scanf("%d", &n);
		for(int j=0; j<10; j++){
			if(vetor[j]==n){               //GUARDANDO VALORES APENAS QUE NÃO EXISTEM AINDA NO VETOR E VETORFINAÇ
				cont+=1;
			}
		}
		if(cont==0){
			vetor[contador] = n;
			contador++;
		}else{
			cont=0;
		}
	}
	cont =0;             //RESETANDO VARIAVEIS
	contador =1;

	printf("Digite um numero vetor 2 :");
	scanf("%d", &n);
	vetorB[0]=n; //GUARDANDO PRIMEIRO VALOR NO VETOR B

	while(contador<10){
		printf("Digite um numero vetor 2 :");
		scanf("%d", &n);
		for(int j=0; j<10; j++){
			if(vetorB[j]==n){
				cont+=1;
			}
		}
		if(cont==0){                    //GUARDANDO VALORES NÃO REPETIDOS NO VETOR B
			vetorB[contador] = n;
			contador++;
		}else{
			cont=0;
		}
	}



	cont = 0;
	for(int i =0; i<10; i++){
		for (int j =0; j<10; j++){
                if(vetorB[i]==vetorFinal[j]){
				cont++;

			}                                       //VERIFUCANDO SE OS VALORES DO VETORB JA EXISTEM NO VETORFINAL
		}
		if (cont==0){
			vetorFinal[pos1]= vetorB[i];
			pos1++;

		}else{
			cont=0;
		}
	}
	printf("Vetor União::");
	for(int i =0; i<20; i++){
		if(vetorFinal[i] != 0){

			printf("%d ", vetorFinal[i]);          //EXIBINDO VETOR FINAL
		}

	}




}


void questao12(){
	int vetor[10], vetorB[10], vetorInt[10] = {0,0,0,0,0,0,0,0,0,0} ,n, cont=0, pos =1, contador =0;
	printf("Digite um numero para o vetor 1 :");
	scanf("%d", &n);
	vetor[0]=n;
	while(contador<9){
		printf("Digite um numero para o vetor 1 :");
		scanf("%d", &n);
		for(int j=0; j<10; j++){
			if(vetor[j]==n){
				cont+=1;
			}
		}
		if(cont==0){
			vetor[pos] = n;
			pos++;
			contador++;                           //MESMA IDEIA DO PROGRAMA ANTERIOR
		}else{
			cont=0;
			contador++;
		}
	}
	printf("\n\n");
	pos = 1;
	cont =0;
	contador =0;
	printf("Digite um numero para o vetor 2 :");
	scanf("%d", &n);
	vetorB[0]=n;
	while(contador<9){
		printf("Digite um numero para o vetor 2 :");
		scanf("%d", &n);
		for(int j=0; j<10; j++){
			if(vetorB[j]==n){
				cont+=1;
			}
		}
		if(cont==0){
			vetorB[pos] = n;
			pos++;
			contador++;
		}else{
			cont=0;
			contador++;
		}
	}

	for(int i =0; i<10; i++){
		for (int j =0; j<10; j++){
			if(vetor[i]==vetorB[j]){
				vetorInt[i]= vetor[i];

			}
		}
	}



	printf("Vetor Interceção:");
	for(int i =0; i<10; i++){
		if(vetorInt[i] != 0){

			printf("%d ", vetorInt[i]);
		}

	}
}



void questao13(){
	int vetor[15], i=0, j=0, aux;
	for(i; i<15; i++){
		printf("Digite um numero para o vetor:");           //GUARDANDO OS NÚMEROS
		scanf("%d", &vetor[i]);
	}

	for(j=0; j<15; j++){
		for(i=0; i<15; i++){
			if(vetor[i]<vetor[i+1]){
				aux = vetor[i];                       //COLOCANDO EM ORDEM CRESCENTE
				vetor[i] = vetor[i+1];
				vetor[i+1]= aux;
			}
		}
	}
	printf("Ordem crescente: \n");
	for(i=15; i>0; i--){                                  //EXIBINDO
			printf("%d \n", vetor[i]);


	}
}
