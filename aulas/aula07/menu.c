#include <stdio.h>
#include <stdlib.h>

#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define reset "\e[0m"

int main() {
    int opcao = 0;

    while (opcao != 4) {
        system("clear");
        printf(BLU);
        printf("|-------------------------------------------------------|\n");
        printf("|                       MEU JOGO                        |\n");
        printf("|-------------------------------------------------------|\n");
        printf("|                    MENU PRINCIPAL                     |\n");
        printf("|                                                       |\n");
        printf("|             +---------------------------+             |\n");
        printf("|             | 1 - Novo Jogo             |             |\n");
        printf("|             | 2 - Ver Score             |             |\n");
        printf("|             | 3 - Sobre o Jogo          |             |\n");
        printf("|             | 4 - Sair                  |             |\n");    
        printf("|             +---------------------------+             |\n");
        printf("|                                                       |\n");
        printf("|-------------------------------------------------------|\n");
        printf(reset);
        printf("Escolha uma opcao > ");
        scanf("%i", &opcao);
        while (getchar() != '\n');

        switch(opcao) {
            case 1: {
                int nivel = 0;
                system("clear");
                printf("Nivel do Jogo\n");
                printf("1 - Facil\n");
                printf("2 - Medio\n");
                printf("3 - Dificil\n");
                printf("Escolha um nivel > ");
                scanf("%i", &nivel);
                while (getchar() != '\n');
                break;
            }
            case 2: {
                system("clear");
                printf("Score do Jogo\n");
                printf("1 - Jogador A - 10000 pontos\n");
                printf("2 - Jogador B - 7000 pontos\n");
                printf("3 - Jogador C - 5000 pontos\n");
                printf("4 - Jogador D - 3000 pontos\n");
                printf("5 - Jogador E - 1000 pontos\n");
                printf("Pressione ENTER para continuar...");
                while (getchar() != '\n');
                break;
            }
            case 3: {
                system("clear");
                printf("Sobre o Jogo\n\n");
                printf("Desenvolvido em C\n");
                printf("Por Dev1 e Dev2\n\n");
                printf("Copyright(C) 2025\n");
                printf("Pressione ENTER para continuar...");
                while (getchar() != '\n');
                break;
            }
            case 4: {
                printf("Ate logo!\n");
                break;
            }
            default: {
                printf("Opcao invalida! Tente novamente.\n");
            }
        }
    }
    
    return 0;
}