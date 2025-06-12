#include <stdio.h>

int main() {
    int num1, num2, num3, x;
    int somma, prodotto;

    // Chiedi all'utente di inserire tre numeri interi
    printf("Inserisci il primo numero intero: ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero intero: ");
    scanf("%d", &num2);
    printf("Inserisci il terzo numero intero: ");
    scanf("%d", &num3);

    // Chiedi all'utente di inserire la soglia x
    printf("Inserisci il valore intero x (la soglia): ");
    scanf("%d", &x);

    // Calcola somma e prodotto
    somma = num1 + num2;
    prodotto = num2 * num3;

    // Stampa somma e prodotto
    printf("Somma tra il primo e il secondo numero: %d\n", somma);
    printf("Moltiplicazione tra il secondo e il terzo numero: %d\n", prodotto);

    // Verifica e stampa messaggi in base alla soglia x
    if (somma > x) {
        printf("La somma è maggiore di %d\n", x);
    } else {
        printf("La somma non è maggiore di %d\n", x);
    }

    if (prodotto < x) {
        printf("La moltiplicazione è minore di %d\n", x);
    } else {
        printf("La moltiplicazione non è minore di %d\n", x);
    }

    // Verifica operatori logici
    if (num1 < 0 || num2 < 0 || num3 < 0) {
        printf("Almeno uno dei numeri è negativo\n");
    } else {
        printf("Nessuno dei numeri è negativo\n");
    }

    if (num1 != 0 && num2 != 0 && num3 != 0) {
        printf("Tutti e tre i numeri sono diversi da zero\n");
    } else {
        printf("Almeno uno dei numeri è zero\n");
    }

    if (!(num1 == 100 || num2 == 100 || num3 == 100)) {
        printf("Nessuno dei numeri è uguale a 100\n");
    } else {
        printf("Almeno uno dei numeri è uguale a 100\n");
    }

    return 0;
}
