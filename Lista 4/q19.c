//Escreva um programa em C que simule uma elei��o atrav�s de uma urna
//eletr�nica. O programa deve ler um conjunto indeterminado de votos e
//computar os votos de cada candidato, exibindo o resultado ap�s o
//encerramento da vota��o.
#include <stdio.h>
#include <locale.h>



int main(){
    setlocale(LC_ALL, "portuguese");
    int a=1, c1 =0, c2=0, voto;

    while(a==1){
        printf("Deseja digite 1 para votar no candidato 1, 2 para votr no candidato 2, ou 3 para sair:");
        scanf("%d", &voto);
        if(voto==1){
            c1+=1;
        }else if(voto==2){
            c2+=1;
        }else if(voto==3){
            break;
        }
    }
    printf("Candidato 1 teve %d votos e o candidato 2 teve %d votos.\n", c1, c2);
    if(c1>c2){
        printf("Candidato 1 venceu a elei��o");
    }else if(c2>c1){
        printf("Candidato 2 venceu a elei��o");
    }else{
        printf("Ouve empate nas elei��es.");

    }

}
