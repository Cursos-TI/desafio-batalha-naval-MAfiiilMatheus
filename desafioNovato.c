#include <stdio.h>

int main(){

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // 1. CRIANDO O TABULEIRO (MATRIZ 10X10)

    int tabuleiro[10][10];

    for (int i = 0; i < 10; i++){

        for (int j = 0; j < 10; j++){

            tabuleiro[i][j] = 0;

        }

     }

     // Exibindo o tabuleiro

    printf("TABULEIRO BATALHA NAVAL\n");

    printf("  ");

    for (int j = 0; j < 10; j++){

        printf("%c ", linha[j]); //imprime os números das colunas

    }

      printf("\n");

      //Navios na vertical

      for (int i = 1; i < 4; i++){

        tabuleiro[i][1] = 3;

      }

      //Navios na Horinzontal

      for (int j = 4; j < 7; j++){

        tabuleiro[4][j] = 3;

      }

      //linhas numeradas

      for (int i = 0; i < 10; i++){

        printf("%2d ", i + 1); //número da linha

        for (int j = 0; j < 10; j++){

        printf("%d ", tabuleiro[i][j]); // Valor do tabuleiro

        }

        printf("\n"); //nova linha da matriz

      }

    return 0;

}