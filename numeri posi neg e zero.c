#include <stdio.h>

int main() {
    int numero;

    // Chiedi all'utente di inserire un numero intero
    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);

    // Verifica se il numero è positivo, negativo o zero
    if (numero > 0) {
        // Numero positivo
        printf("Il numero è positivo.\n");

        // Controllo annidato se il numero è superiore a 100
        if (numero > 100) {
            printf("Wow!\n");
        }
    } else if (numero < 0) {
        // Numero negativo
        printf("Il numero è negativo.\n");
    } else {
        // Numero uguale a zero
        printf("Il numero è zero.\n");
    }

    return 0;
}
