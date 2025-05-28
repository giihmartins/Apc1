#include <stdio.h>
#include <string.h>
int main()
{
    struct cliente_t
    {
        char nome[61];
        long long int telefone;
        char email[61];
        char logradouro[61];
        int numero;
        int cep;
        char complemento[61];
        char cidade[41];
        char uf[3];
    };

    struct cliente_t cliente;
    strcpy(cliente.nome, "JOSE");
    cliente.telefone = 61985440517L;
    strcpy(cliente.email, "giovannamartins50@gmail.com");
    strcpy(cliente.logradouro, "sqs");
    cliente.numero = 612;
    cliente.cep = 70000000;
    strcpy(cliente.complemento, "iesb");
    strcpy(cliente.cidade, "Brasilia");
    strcpy(cliente.uf, "DF");

    printf("Dados do cliente\n");
    printf("Nome: %s\n", cliente.nome);
    printf("Telefone: %lli\n", cliente.telefone);
    printf("E-mail: %s\n", cliente.email);
    printf("Endereco: %s, %i - %s - %s/%s\n", cliente.logradouro, cliente.numero, cliente.complemento, cliente.cidade, cliente.uf);
    printf("CEP: %i", cliente.cep);
    
    return 0;
}