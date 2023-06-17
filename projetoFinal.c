#include <stdio.h>
#include <stdlib.h>
#define R 25

float calcularPeso(float V){
    return V*R;
}

int main(){
    int escolha;
    system("color 02");

    do{
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

                //G1 suporta 45 kg; G2 suporta 86 kg e G3 145 KG
                printf("Peso Guindaste: %.2f",pesoGuindaste);

                exit(0);
            break;

            case 2:
                system("cls");

                printf("Encerrando o programa");
                exit(0);
            break;

            default:
                printf("Opcao invalida\n");
                system("cls");
            break;
        }
    }while(escolha != 1 || escolha != 2);
}
