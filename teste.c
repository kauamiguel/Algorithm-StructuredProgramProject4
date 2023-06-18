#include <stdio.h>
#include <unistd.h>


int main(){

     int i;
    int num_frames = 10;
    for (i = 0; i < num_frames; i++) {
            printf("\rFrame %d de %d: Carregando...", i + 1, num_frames);
            fflush(stdout);  // Limpa o buffer de saída

            usleep(500000);  // Tempo de espera em microssegundos (500ms)

            // Limpa a linha anterior
            printf("\r%*s\r", 30, "");  // 30 é o comprimento máximo da linha

            // Aqui você pode adicionar mais lógica para modificar o conteúdo da animação

            // Por exemplo:
            // printf("\rFrame %d de %d: Processando...", i + 1, num_frames);

            fflush(stdout);
        }
}