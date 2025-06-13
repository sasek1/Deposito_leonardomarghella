#include <stdio.h>
#include <string.h> // Serve per strcmp

int main() {
    char password[20];  // Manca il punto e virgola
    
    printf("Inserisci la password: ");
    scanf("%19s", password);
    
    if (strcmp(password, "segreto") == 0) {  // Corretto l'if e le parentesi
        printf("Accesso consentito.\n");
    } else {
        printf("Accesso negato.\n");
    }
    
    return 0;  // Manca il punto e virgola e parentesi tonde non necessarie
}
