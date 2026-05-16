#include <stdio.h>   // Biblioteka do obsługi plików i funkcji printf

int main() {

    // Tworzymy wskaźniki do plików
    FILE *plik1, *plik2;

    // Zmienna do przechowywania pojedynczego znaku
    char znak;

    // Otwieramy plik tekst.txt w trybie odczytu
    // "r" = read = odczyt
    plik1 = fopen("tekst.txt", "r");

    // Sprawdzamy czy plik został poprawnie otwarty
    if (plik1 == NULL) {

        // Jeśli pliku nie ma -> komunikat błędu
        printf("Nie mozna otworzyc pliku tekst.txt!\n");

        // Zakończenie programu z błędem
        return 1;
    }

    // Tworzymy nowy plik kopia.txt
    // "w" = write = zapis
    plik2 = fopen("kopia.txt", "w");

    // Pętla działa aż do końca pliku
    while ((znak = fgetc(plik1)) != EOF) {

        // fgetc() pobiera jeden znak z pliku1
        // fputc() zapisuje znak do pliku2

        fputc(znak, plik2);
    }

    // Zamykamy oba pliki
    fclose(plik1);
    fclose(plik2);

    // Informacja dla użytkownika
    printf("Plik zostal skopiowany pomyslnie!\n");

    // Program zakończył się poprawnie
    return 0;
}