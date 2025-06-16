#include <stdio.h>
#include <string.h>

int main() {
    char ruolo[20];
    int opzione;
    int secret = 0; // Variabile segreta, se 1 esegue un comando speciale

    // Chiede il ruolo
    printf("Inserisci il tuo ruolo (studente, docente, ospite): ");
    scanf("%19s", ruolo);

    // Chiede l'opzione di menu
    printf("Scegli un'opzione (1-3): ");
    scanf("%d", &opzione);

    // Controlli ruolo + opzione
    if (strcmp(ruolo, "studente") == 0 && opzione == 1) {
        printf("Accesso a materiali didattici\n");
    } else if (strcmp(ruolo, "docente") == 0 && opzione == 2) {
        printf("Accesso alla gestione corsi\n");
    } else if (strcmp(ruolo, "ospite") == 0) {
        printf("Area informativa\n");
    } else {
        printf("Opzione non disponibile\n");
    }

    // Switch sull'opzione scelta
    switch (opzione) {
        case 1:
            printf("Hai scelto: Visualizza\n");
            break;
        case 2:
            printf("Hai scelto: Modifica\n");
            break;
        case 3:
            printf("Hai scelto: Esci\n");
            break;
        default:
            printf("Opzione di menu non valida\n");
            break;
    }

    // Esempio di utilizzo della variabile segreta
    // Se secret = 1, esegue un comando speciale
    if (secret == 1) {
        printf("Comando segreto attivato!\n");
        // Puoi aggiungere qui altri comandi speciali
    }

    return 0;
}
