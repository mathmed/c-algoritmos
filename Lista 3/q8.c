
//Escreva um programa em C que leia tr�s valores reais correspondentes
//�s notas de um aluno da UFRN, calcule e exiba a sua m�dia.
//Em seguinte, exiba a sua situa��o: �Aprovado�, �Reprovado� ou �Prova Final�,
//de acordo com a m�dia obtida. No caso do aluno necessitar fazer a prova final,
//o programa deve informar a nota m�nima que ele necessita para ser aprovado.
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    float a,b,c, media, aux;
    printf("Digite as 3 notas do aluno:");
    scanf ("%f %f %f", &a,&b,&c);
    media = (a+b+c)/3;
    printf("M�dia: %f \n", media);
    if(media>=7){
        printf("Situa��o: Aprovado");
    }else if((media>=5) && (a>=3) && (b>=3) && (c>=3)){
        printf("Situa��o: Aprovado");
    }else if((a<3 && b<3) || (a<3 && c<3) || (b<3 && c<3)){
        printf("Situa��o: Reprovado");
    }else if (media<3){
        printf("Situa��o: Reprovado");
    }else{
        if(a<b && a<c){
            printf("Situa��o: Prova Final! Voc� precisa de %f para passar.", (15-b-c));
        }else if (b<a && b<c){
            printf("Situa��o: Prova Final! Voc� precisa de %f para passar.", (15-a-c));

        }else if (c<a && a<c){
            printf("Situa��o: Prova Final! Voc� precisa de %f para passar.", (15-a-b));
        }else if (a==b && b<c){
            printf("Situa��o: Prova Final! Voc� precisa de %f para passar.", (15-a-c));
        }else if (a==b && b>c){
            printf("Situa��o: Prova Final! Voc� precisa de %f para passar.", (15-a-b));
        }else if (a==c && a<b){
            printf("Situa��o: Prova Final! Voc� precisa de %f para passar.", (15-a-b));
        }else if (a==c && a>b){
            printf("Situa��o: Prova Final! Voc� precisa de %f para passar.", (15-a-c));
        }else if (c==b && c<a){
            printf("Situa��o: Prova Final! Voc� precisa de %f para passar.", (15-a-c));
        }else if (c==b && c>a){
            printf("Situa��o: Prova Final! Voc� precisa de %f para passar.", (15-c-b));

        }else{
           printf("Situa��o: Prova Final! Voc� precisa de 9 para passar.");
        }
    }
}
