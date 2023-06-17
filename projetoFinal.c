#include <stdio.h>
#include <stdlib.h>
#define R 25

float calcularPeso(float V){
    return V*R;
}

int main(){
    int escolha;

    printf("Digite 1 para acessar o programa e 2 para encerrar\n");
    printf("Escolha: ");
    scanf("%d",&escolha);

    switch(escolha){
        case 1:
            system("cls");

            //Variaveis do volume
            float altura, largura, comprimento, volumeTotal;
            float pesoGuindaste;

            system("color 02");

            //pegando as informações do usuario
            printf("Digite o valor da altura: \n");
            scanf("%f",&altura);
            printf("Digite o valor da largura: \n");
            scanf("%f",&largura);
            printf("Digite o valor da comprimento: \n");
            scanf("%f",&comprimento);

            //Calculando o peso do guindaste
            volumeTotal = altura * comprimento * largura;
            pesoGuindaste = calcularPeso(volumeTotal);

            if (volumeTotal <= 2000) {
        printf("Guindaste a ser utilizado: G1\n");
    } else if (volumeTotal > 2000 && volumeTotal <= 4000) {
        printf("Guindaste a ser utilizado: G2\n");
    } else if  (volumeTotal > 4000 && volumeTotal <= 8000){
        printf("Guindaste a ser utilizado: G3\n");
    } else {
        printf("Não foi possivel localizar o guindaste a ser usado");
            }
            //G1 suporta 2000 kg; G2 suporta 4000 kg e G3 8000 KG
        break;

        case 2:
            exit(0);
        break;
    }
}
