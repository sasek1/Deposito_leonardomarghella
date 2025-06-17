#include <stdio.h>

int main() {
    int n, i, somma = 0;
    int numeri[100];

    // Chiede all'utente quanti numeri desidera inserire (massimo 100)
    do {
        printf("Quanti numeri vuoi inserire? (massimo 100): ");
        scanf("%d", &n);
        if (n < 1 || n > 100) {
            printf("Per favore inserisci un numero tra 1 e 100.\n");
        }
    } while (n < 1 || n > 100);

    // Chiede all'utente di inserire tutti i numeri uno alla volta
    for (i = 0; i < n; i++) {
        printf("Inserisci il numero %d: ", i + 1);
        scanf("%d", &numeri[i]);
    }

    // Calcola la somma di tutti i numeri
    for (i = 0; i < n; i++) {
        somma += numeri[i];
    }

    // Stampa la somma
    printf("La somma dei numeri inseriti è: %d\n", somma);

    return 0;
}
