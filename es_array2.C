#include <stdio.h>

int main() {
    int n, i, valore, count = 0;
    int numeri[50];

    // Chiedi all'utente quanti numeri vuole inserire (massimo 50)
    do {
        printf("Quanti numeri vuoi inserire? (max 50): ");
        scanf("%d", &n);
        if (n < 1 || n > 50) {
            printf("Inserisci un numero valido tra 1 e 50.\n");
        }
    } while (n < 1 || n > 50);

    // Chiedi di inserire i numeri uno alla volta
    for (i = 0; i < n; i++) {
        printf("Inserisci il numero %d: ", i + 1);
        scanf("%d", &numeri[i]);
    }

    // Chiedi il valore da cercare
    printf("Inserisci il valore da cercare: ");
    scanf("%d", &valore);

    // Conta quante volte il valore appare nell'array
    for (i = 0; i < n; i++) {
        if (numeri[i] == valore) {
            count++;
        }
    }

    // Stampa il risultato
    printf("Il valore %d appare %d volte nell'array.\n", valore, count);

    return 0;
}
