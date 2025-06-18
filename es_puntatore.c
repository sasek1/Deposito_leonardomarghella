#include <stdio.h>

void scambia(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    int *p1 = &num1, *p2 = &num2;

    // Chiedi all'utente di inserire due numeri interi
    printf("Inserisci il primo numero intero: ");
    scanf("%d", p1);
    printf("Inserisci il secondo numero intero: ");
    scanf("%d", p2);

    // Stampa i numeri prima dello scambio
    printf("\nNumeri prima dello scambio: num1 = %d, num2 = %d\n", *p1, *p2);

    // Scambia i valori usando i puntatori
    scambia(p1, p2);

    // Stampa i numeri dopo lo scambio
    printf("Numeri dopo lo scambio: num1 = %d, num2 = %d\n", *p1, *p2);

    // Calcola la somma usando i puntatori
    int somma = *p1 + *p2;
    printf("Somma dei due numeri: %d\n", somma);

    // Determina quale dei due numeri è maggiore usando i puntatori
    if (*p1 > *p2) {
        printf("Il numero maggiore dopo lo scambio è num1 = %d\n", *p1);
    } else if (*p2 > *p1) {
        printf("Il numero maggiore dopo lo scambio è num2 = %d\n", *p2);
    } else {
        printf("I due numeri sono uguali: %d\n", *p1);
    }

    return 0;
}
