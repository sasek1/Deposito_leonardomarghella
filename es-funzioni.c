#include <stdio.h>

// Funzione per inserire i numeri e calcolare la somma
int inserisciECalcolaSomma(int array[], int n) {
    int somma = 0;
    for (int i = 0; i < n; i++) {
        printf("Inserisci il numero %d: ", i + 1);
        while (scanf("%d", &array[i]) != 1) {
            printf("Input non valido. Inserisci un numero intero: ");
            while (getchar() != '\n'); // pulisce il buffer
        }
        somma += array[i];
    }
    return somma;
}

// Funzione per contare quanti numeri sono sopra la media
int contaSopraMedia(int array[], int n, float media) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] > media) {
            count++;
        }
    }
    return count;
}

// Funzione per stampare i risultati
void stampaRisultati(float media, int sopraMedia) {
    printf("La media è: %.2f\n", media);
    printf("Numeri sopra la media: %d\n", sopraMedia);
}

int main() {
    int numeri[50], n;
    float media;
    int somma, sopraMedia;

    printf("Quanti numeri vuoi inserire? (max 50): ");
    while (scanf("%d", &n) != 1 || n <= 0 || n > 50) {
        printf("Quantità non valida! Inserisci un numero tra 1 e 50: ");
        while (getchar() != '\n'); // pulisce il buffer
    }

    somma = inserisciECalcolaSomma(numeri, n);
    media = (float)somma / n;
    sopraMedia = contaSopraMedia(numeri, n, media);
    stampaRisultati(media, sopraMedia);

    return 0;
}
