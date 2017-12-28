//Uma universidade atribui conceitos aos alunos com base na média obtida em cada
//disciplina, segundo a tabela abaixo. Escreva um programa que lê as notas de duas
//avaliações, calcula a média do aluno na proporção de 40% para a primeira avaliação
//e 60% para a segunda e informa o conceito obtido.


#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    float n1, n2, media;
    printf("Digite as duas nota do aluno respectivamente:");
    scanf ("%f %f", &n1, &n2);
    media = (n1*0.4)+(n2*0.6);
    if(media>=9 && media<=10){
        printf("Aluno com conceito A!");
    }else if(media>=7.5 && media <9){
        printf("Aluno com conceito B!");
    }else if(media>=6 && media <7.5){
        printf("Aluno com conceito C!");
    }else if(media>=4 && media <6){
        printf("Aluno com conceito D!");
    }else if(media<4 && media >=0){
        printf("Aluno com conceito E!");
    }else{
        printf("Notas inválidas.");
    }
}
