#include <stdio.h>   // Biblioteka do obsługi wejścia i wyjścia (printf, scanf)

int main() {

    // Tworzymy zmienne:
    // float = liczby z przecinkiem
    float a, b, wynik;

    // char = pojedynczy znak, np. + - * /
    char operator;

    // Wyświetlenie tytułu programu
    printf("=== PROSTY KALKULATOR ===\n");

    // Pobranie pierwszej liczby od użytkownika
    printf("Podaj pierwsza liczbe: ");

    // scanf pobiera dane z klawiatury
    // %f oznacza typ float
    // &a oznacza adres zmiennej a
    scanf("%f", &a);

    // Pobranie operatora matematycznego
    printf("Podaj operator (+, -, *, /): ");

    // Spacja przed %c pomaga pominąć ENTER
    scanf(" %c", &operator);

    // Pobranie drugiej liczby
    printf("Podaj druga liczbe: ");
    scanf("%f", &b);

    // switch sprawdza jaki operator podał użytkownik
    switch(operator) {

        // Jeśli operator to +
        case '+':
            wynik = a + b; // dodawanie
            printf("Wynik: %.2f\n", wynik);
            break;

        // Jeśli operator to -
        case '-':
            wynik = a - b; // odejmowanie
            printf("Wynik: %.2f\n", wynik);
            break;

        // Jeśli operator to *
        case '*':
            wynik = a * b; // mnożenie
            printf("Wynik: %.2f\n", wynik);
            break;

        // Jeśli operator to /
        case '/':

            // Sprawdzamy czy druga liczba NIE jest zerem
            if(b != 0) {

                // Dzielenie
                wynik = a / b;
                printf("Wynik: %.2f\n", wynik);

            } else {

                // Komunikat błędu
                printf("Blad: Nie mozna dzielic przez 0!\n");
            }

            break;

        // Jeśli użytkownik poda zły operator
        default:
            printf("Niepoprawny operator!\n");
    }

    // Zakończenie programu
    return 0;
}