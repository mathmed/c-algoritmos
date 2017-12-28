
//Escreva um programa em C que leia três valores reais correspondentes
//às notas de um aluno da UFRN, calcule e exiba a sua média.
//Em seguinte, exiba a sua situação: “Aprovado”, “Reprovado” ou “Prova Final”,
//de acordo com a média obtida. No caso do aluno necessitar fazer a prova final,
//o programa deve informar a nota mínima que ele necessita para ser aprovado.
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    float a,b,c, media, aux;
    printf("Digite as 3 notas do aluno:");
    scanf ("%f %f %f", &a,&b,&c);
    media = (a+b+c)/3;
    printf("Média: %f \n", media);
    if(media>=7){
        printf("Situação: Aprovado");
    }else if((media>=5) && (a>=3) && (b>=3) && (c>=3)){
        printf("Situação: Aprovado");
    }else if((a<3 && b<3) || (a<3 && c<3) || (b<3 && c<3)){
        printf("Situação: Reprovado");
    }else if (media<3){
        printf("Situação: Reprovado");
    }else{
        if(a<b && a<c){
            printf("Situação: Prova Final! Você precisa de %f para passar.", (15-b-c));
        }else if (b<a && b<c){
            printf("Situação: Prova Final! Você precisa de %f para passar.", (15-a-c));

        }else if (c<a && a<c){
            printf("Situação: Prova Final! Você precisa de %f para passar.", (15-a-b));
        }else if (a==b && b<c){
            printf("Situação: Prova Final! Você precisa de %f para passar.", (15-a-c));
        }else if (a==b && b>c){
            printf("Situação: Prova Final! Você precisa de %f para passar.", (15-a-b));
        }else if (a==c && a<b){
            printf("Situação: Prova Final! Você precisa de %f para passar.", (15-a-b));
        }else if (a==c && a>b){
            printf("Situação: Prova Final! Você precisa de %f para passar.", (15-a-c));
        }else if (c==b && c<a){
            printf("Situação: Prova Final! Você precisa de %f para passar.", (15-a-c));
        }else if (c==b && c>a){
            printf("Situação: Prova Final! Você precisa de %f para passar.", (15-c-b));

        }else{
           printf("Situação: Prova Final! Você precisa de 9 para passar.");
        }
    }
}
