//Escreva um programa em C que leia um n�mero inteiro e indique se esse n�mero �
//divis�vel por 2, 3, 4, 5, 6, 7, 8 e/ou 9.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int num,aux,i;
    aux=1;
    printf("Entre com um n�mero inteiro:");
    scanf("%d", &num);
        switch(2){
            case 2:
                if(num%2==0){
                    printf("Divis�vel por 2. \n");
                }
            case 3:
                if(num%3==0){
                    printf("Divis�vel por 3. \n");
                }
            case 4:
                if(num%4==0){
                    printf("Divis�vel por 4. \n");
                }
            case 5:
                if(num%5==0){
                    printf("Divis�vel por 5. \n");
                }
            case 6:
                if(num%6==0){
                    printf("Divis�vel por 6. \n");
                }
            case 7:
                if(num%7==0){
                    printf("Divis�vel por 7. \n");
                }
            case 8:
                if(num%8==0){
                    printf("Divis�vel por 8. \n");
                }
            case 9:
                if(num%9==0){
                    printf("Divis�vel por 9. \n");
                }
            default:
                if(num%9 !=0 && num%8 !=0 && num%7 !=0 && num%6 !=0 && num%5 !=0 && num%4 !=0 && num%3 !=0 && num%2 !=0 ){
                    printf("N�o � divis�vel");
                }

        }
}
