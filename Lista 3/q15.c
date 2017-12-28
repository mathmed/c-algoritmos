

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    float larg, alt, diag;
    printf("Digite a largura e altura em metros da casa respectivamente:");
    scanf("%f %f", &larg, &alt);
    diag = sqrt(pow(larg,2)+pow(alt,2));
    printf("Você precisará de %f metros de fio de cobre.", diag);
}
