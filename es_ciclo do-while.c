#include <stdio.h>

int main() {
    char risposta;
    int numero;
    int countPari = 0;

    do {
        // Validazione della risposta
        printf("Vuoi continuare? (s/n): ");
        scanf(" %c", &risposta);

        while (risposta != 's' && risposta != 'n') {
            printf("Risposta non valida. Inserisci 's' per si o 'n' per no: ");
            scanf(" %c", &risposta);
        }

        if (risposta == 's') {
            printf("Inserisci un numero intero: ");
            scanf("%d", &numero);

            if (numero % 2 == 0) {
                countPari++;
            }
        }

    } while (risposta != 'n');

    printf("Hai inserito %d numeri pari.\n", countPari);

    return 0;
}
