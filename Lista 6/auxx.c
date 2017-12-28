#include <stdio.h>

void main(void){
	int vetorA[10], vetorB[10], contador = 0,n, cont;
	while(contador<10){
		printf("Digite um número:");
		scanf("%d", &n);
		for(int j=0; j<10; j++){     	//VERIFICAÇÃO PARA VER SE O NÚMERO JA ESTA NO VETOR
			if(vetorA[j]==n){
				cont+=1;
			}
		}
		if(cont==0){
			vetorA[contador]=n;
			contador++;
		}else{
			cont=0;
		}
	}




	printf("Vetor com números não repetidos: \n");
	for(int i= 0; i<10; i++){                               //EXIBINDO VALORES DIGITADOS
		printf("%d ", vetorA[i]);
	}
}
