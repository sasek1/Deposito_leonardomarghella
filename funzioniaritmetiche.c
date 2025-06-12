#include <stdio.h>

int main() {
    int num1, num2;

    // Chiede all'utente di inserire due numeri interi
    printf("Inserisci il primo numero intero: ");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero intero: ");
    scanf("%d", &num2);

    // Calcoli richiesti
    int somma = num1 + num2;
    int differenza = num1 - num2;
    int prodotto = num1 * num2;
    int quoziente = num1 / num2;      // Divisione intera
    int resto = num1 % num2;          // Resto della divisione

    // Stampa dei risultati
    printf("\nRisultati:\n");
    printf("1. Somma: %d\n", somma);
    printf("2. Differenza: %d\n", differenza);
    printf("3. Prodotto: %d\n", prodotto);
    printf("4. Quoziente (divisione intera): %d\n", quoziente);
    printf("5. Resto della divisione: %d\n", resto);

    // Verifica con operatori logici
    // 1. Entrambi i numeri maggiori di zero (AND)
    if (num1 > 0 && num2 > 0) {
        printf("\nEntrambi i numeri sono maggiori di zero.\n");
    } else {
        printf("\nAlmeno uno dei numeri NON è maggiore di zero.\n");
    }

    // 2. Almeno uno dei due numeri è pari (OR)
    if (num1 % 2 == 0 || num2 % 2 == 0) {
        printf("Almeno uno dei due numeri è pari.\n");
    } else {
        printf("Nessuno dei due numeri è pari.\n");
    }

    return 0;
}
