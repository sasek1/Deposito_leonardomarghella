#include <stdio.h>

int main() {
    int numero;

    // Chiede all'utente di inserire un numero intero
    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

    if (numero > 0 && numero % 2 == 0) {
        // Numero positivo e pari
        if (numero > 50) {
            printf("molto grande!\n");
        }
    } else if (numero < 0 || numero > 100) {
        // Numero negativo o maggiore di 100
        if (numero % 5 == 0) {
            printf("multiplo di 5!\n");
        }
    } else {
        // Altrimenti
        printf("Il numero non soddisfa nessuno delle condizioni precedenti\n");
    }

    // Se il numero è diverso da zero, stampa anche questo messaggio
    if (numero != 0) {
        printf("numero diverso da zero\n");
    }

    return 0;
}
