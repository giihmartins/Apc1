#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Definindo a estrutura para armazenar os dados dos usuários
struct Usuario {
    char nome[50];
    int idade;
    char cidade[50];
};

int main() {
    int opcao, i = 0;
    struct Usuario usuarios[10];  // Matriz para armazenar até 10 usuários
    int cadastroAtivo = 1;  // Controle do cadastro

    // Exibição do menu principal
    while (cadastroAtivo) {
        printf("\n=== Sistema de Cadastro de Dados ===\n");
        printf("1. Cadastrar Usuario\n");
        printf("2. Exibir Usuarios Cadastrados\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        
        // Validação da entrada de dados para a opção do menu
        if (scanf("%d", &opcao) != 1 || opcao < 1 || opcao > 3) {
            printf("Opção invalida! Por favor, digite um numero entre 1 e 3.\n");
            while(getchar() != '\n');  // Limpa o buffer do teclado
            continue;
        }

        switch (opcao) {
            case 1:
                // Cadastro de usuário
                if (i < 10) {  // Limite de usuários
                    printf("Digite o nome do usuario: ");
                    getchar();  // Limpeza do buffer
                    fgets(usuarios[i].nome, 50, stdin);
                    usuarios[i].nome[strcspn(usuarios[i].nome, "\n")] = '\0';  // Remover o '\n' do final

                    printf("Digite a idade do usuario: ");
                    while (scanf("%d", &usuarios[i].idade) != 1 || usuarios[i].idade <= 0) {
                        printf("Idade invalida! Digite um número positivo para a idade.\n");
                        while(getchar() != '\n');  // Limpa o buffer
                    }

                    printf("Digite a cidade do usuario: ");
                    getchar();  // Limpeza do buffer
                    fgets(usuarios[i].cidade, 50, stdin);
                    usuarios[i].cidade[strcspn(usuarios[i].cidade, "\n")] = '\0';  // Remover o '\n' do final

                    i++;
                    printf("Usuario cadastrado com sucesso!\n");
                } else {
                    printf("Limite de usuarios atingido!\n");
                }
                break;

            case 2:
                // Exibição dos usuários cadastrados
                if (i == 0) {
                    printf("Nenhum usuario cadastrado ainda.\n");
                } else {
                    printf("\n=== Usuarios Cadastrados ===\n");
                    for (int j = 0; j < i; j++) {
                        printf("Usuario %d:\n", j + 1);
                        printf("Nome: %s\n", usuarios[j].nome);
                        printf("Idade: %d\n", usuarios[j].idade);
                        printf("Cidade: %s\n\n", usuarios[j].cidade);
                    }
                }
                break;

            case 3:
                // Sair do programa
                cadastroAtivo = 0;
                printf("Saindo do sistema...\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    }

    return 0;
    setlocale (LC_ALL,"pt_BR.utf"
