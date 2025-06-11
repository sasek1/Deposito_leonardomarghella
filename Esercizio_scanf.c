#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    int num1, num2, somma;

    // Chiede all'utente di inserire il proprio nome
    printf("Inserisci il tuo nome: ");
    scanf("%49s", nome);  //Usiamo %49s per evitare buffer overflow

    // Chiede all'utente di inserire due numeri interi
    printf("Inserisci due numeri interi separati da spazio: ");
    scanf("%d %d", &num1, &num2);

    // Calcola la somma dei due numeri
    somma = num1 + num2;

    // Stampa a schermo il nome dell'utente e il risultato della somma
    printf("Ciao %s! La somma dei numeri inseriti è: %d\n", nome, somma);

    return 0;
}
