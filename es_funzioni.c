#include <stdio.h>

// Funzione che calcola e restituisce il quadrato di un numero
int quadrato(int n) {
    return n * n;
}

// Funzione che prende due numeri interi e restituisce il maggiore
int maggiore(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;

    // Chiedi all'utente di inserire due numeri interi
    printf("Inserisci il primo numero intero: ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero intero: ");
    scanf("%d", &num2);

    // Calcola il quadrato di ciascun numero usando la funzione
    int quad1 = quadrato(num1);
    int quad2 = quadrato(num2);

    // Trova il maggiore dei due numeri usando la funzione
    int max = maggiore(num1, num2);

    // Stampa i risultati
    printf("Il quadrato di %d è %d\n", num1, quad1);
    printf("Il quadrato di %d è %d\n", num2, quad2);
    printf("Il numero maggiore tra %d e %d è %d\n", num1, num2, max);

    return 0;
