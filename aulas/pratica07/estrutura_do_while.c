#include <stdio.h>
int main() {
    int nota=0;
    printf("Digite um nota de 1 a 10:");
    do {
        scanf("i", &nota);
        if(nota < 1 || nota > 10) {
            printf("Nota invalida. Tente novamente!\n");
         }

    } while(nota < 1 || nota > 10);

    return 0;

}