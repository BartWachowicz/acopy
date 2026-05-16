# Program do kopiowania plików w C

## Opis projektu

To prosty program napisany w języku C służący do kopiowania zawartości jednego pliku tekstowego do drugiego.

Program:
- otwiera plik źródłowy,
- tworzy plik docelowy,
- kopiuje dane znak po znaku,
- zamyka oba pliki.

Projekt został przygotowany do nauki:
- obsługi plików w C,
- funkcji fopen(),
- funkcji fgetc() i fputc(),
- pętli while,
- instrukcji if.

---

# Jak działa program

1. Program otwiera plik `tekst.txt`.
2. Następnie tworzy plik `kopia.txt`.
3. Każdy znak z pierwszego pliku jest kopiowany do drugiego.
4. Po zakończeniu kopiowania pliki zostają zamknięte.

---

# Wymagania

Do uruchomienia programu potrzebujesz:
- kompilatora GCC,
- systemu Linux / Windows / macOS.

---

# Kompilacja programu

## Linux / macOS

```bash
gcc kopiowanie.c -o kopiowanie
```

Uruchomienie:

```bash
./kopiowanie
```

---

## Windows

```bash
gcc kopiowanie.c -o kopiowanie.exe
```

Uruchomienie:

```bash
kopiowanie.exe
```

---

# Przykład działania

Plik `tekst.txt`:

```text
Hello World
```

Po uruchomieniu programu powstanie plik `kopia.txt`:

```text
Hello World
```

---

# Struktura projektu

```text
projekt/
│
├── kopiowanie.c
├── tekst.txt
├── kopia.txt
└── README.md
```

---


Projekt edukacyjny napisany w języku C.
