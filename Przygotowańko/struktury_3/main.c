#include <stdio.h>

// Definicja struktury zespolone
struct zespolone {
    double re; // czêœæ rzeczywista
    double im; // czêœæ urojona
};

// Funkcja dodaj¹ca dwie liczby zespolone
struct zespolone dodaj(struct zespolone z1, struct zespolone z2) {
    struct zespolone wynik;
    wynik.re = z1.re + z2.re;
    wynik.im = z1.im + z2.im;
    return wynik;
}

int main() {
    // Przyk³adowe liczby zespolone
    struct zespolone z1 = {2.0, 3.0};
    struct zespolone z2 = {4.0, 5.0};

    // Dodanie dwóch liczb zespolonych
    struct zespolone suma = dodaj(z1, z2);

    // Wyœwietlenie wyniku
    printf("Suma: %.2f + %.2fi\n", suma.re, suma.im);

    return 0;
}
