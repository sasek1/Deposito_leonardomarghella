#include <stdio.h>
#include <string.h>

#define MAX_CONTATTI 20
#define MAX_NOME 30
#define MAX_TELEFONO 15

// Definizione della struct contatto
typedef struct {
    char nome[MAX_NOME + 1];       // +1 per il terminatore '\0'
    char telefono[MAX_TELEFONO + 1];
} contatto;

int main() {
    contatto rubrica[MAX_CONTATTI];
    int n, i;
    char nome_cercato[MAX_NOME + 1];
    int trovato = 0;

    // Chiedi quante persone inserire (max 20)
    do {
        printf("Quante persone vuoi inserire (max %d)? ", MAX_CONTATTI);
        scanf("%d", &n);
        if (n < 1 || n > MAX_CONTATTI) {
            printf("Numero non valido. Riprova.\n");
        }
    } while (n < 1 || n > MAX_CONTATTI);

    // Pulizia buffer dopo scanf numerico
    getchar();

    // Inserimento dati
    for (i = 0; i < n; i++) {
        printf("Inserisci nome persona %d (max %d caratteri): ", i + 1, MAX_NOME);
        fgets(rubrica[i].nome, sizeof(rubrica[i].nome), stdin);
        // Rimuovi eventuale newline da fgets
        rubrica[i].nome[strcspn(rubrica[i].nome, "\n")] = '\0';

        printf("Inserisci telefono persona %d (max %d caratteri): ", i + 1, MAX_TELEFONO);
        fgets(rubrica[i].telefono, sizeof(rubrica[i].telefono), stdin);
        rubrica[i].telefono[strcspn(rubrica[i].telefono, "\n")] = '\0';
    }

    // Ricerca nome
    printf("Inserisci nome da cercare: ");
    fgets(nome_cercato, sizeof(nome_cercato), stdin);
    nome_cercato[strcspn(nome_cercato, "\n")] = '\0';

    // Cerca nella rubrica
    for (i = 0; i < n; i++) {
        if (strcmp(rubrica[i].nome, nome_cercato) == 0) {
            printf("Telefono di %s: %s\n", nome_cercato, rubrica[i].telefono);
            trovato = 1;
            break;
        }
    }

    if (!trovato) {
        printf("Contatto non trovato.\n");
    }

    return 0;
}
