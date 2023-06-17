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

            if (volumeTotal <= 45) {
        printf("Guindaste a ser utilizado: G1\n");
    } else if (volumeTotal > 45 && volumeTotal <= 86) {
        printf("Guindaste a ser utilizado: G2\n");
    } else {
        printf("Guindaste a ser utilizado: G3\n");
    }
            //G1 suporta 45 kg; G2 suporta 86 kg e G3 145 KG
        break;

        case 2:
            exit(0);
        break;
    }
}
