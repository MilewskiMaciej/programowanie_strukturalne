#include <stdio.h>

// Definicja struktury zespolone
struct zespolone {
    double re; // cz�� rzeczywista
    double im; // cz�� urojona
};

// Funkcja dodaj�ca dwie liczby zespolone
struct zespolone dodaj(struct zespolone z1, struct zespolone z2) {
    struct zespolone wynik;
    wynik.re = z1.re + z2.re;
    wynik.im = z1.im + z2.im;
    return wynik;
}

int main() {
    // Przyk�adowe liczby zespolone
    struct zespolone z1 = {2.0, 3.0};
    struct zespolone z2 = {4.0, 5.0};

    // Dodanie dw�ch liczb zespolonych
    struct zespolone suma = dodaj(z1, z2);

    // Wy�wietlenie wyniku
    printf("Suma: %.2f + %.2fi\n", suma.re, suma.im);

    return 0;
}
