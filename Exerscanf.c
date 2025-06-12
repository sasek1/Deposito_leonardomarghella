#include <stdio.h>

int main() {
  char città[100];
  float num1, num2, num3, media;

  // Chiede all'utente di inserire il nome della città
  printf("Inserisci il nome della tua città: ");
  scanf("%99s", città); // legge una stringa senza spazi

  // Chiede all'utente di inserire tre numeri decimali
  printf("Inserisci tre numeri decimali separati da spazio: ");
  scanf("%f %f %f", &num1, &num2, &num3);

  // Calcola la media
  media = (num1 + num2 + num3) / 3;

  // Stampa il nome della città e la media
  printf("Città: %s\n", città);
  printf("Media: %.2f\n", media);

  // Controlla la media e decide cosa stampare
  if (media > 3) {
    printf("%s\n", città);
  } else {
    printf("non stampare\n");
  }

  return 0;
}
