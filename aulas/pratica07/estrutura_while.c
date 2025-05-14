#include <stdio.h>

int main() {
    int nota=0;
    printf("Digite uma nota entre 1 e 10:\n");
    scanf("%i", &nota);
    
    while(nota < 1 || nota > 10) {
        printf("Nota invalida. Tente novamente!\n");
        scanf("%i", &nota);

    }
    printf("Nota valida.");
    
    return 0;
}