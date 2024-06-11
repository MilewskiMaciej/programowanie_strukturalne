#include <stdio.h>
#include <math.h>
#include <float.h>

// Definicja struktury punkt
struct punkt {
    double x;
    double y;
    double z;
};

// Funkcja obliczaj¹ca odleg³oœæ pomiêdzy dwoma punktami w przestrzeni 3D
double odleglosc(struct punkt p1, struct punkt p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2) + pow(p1.z - p2.z, 2));
}

// Funkcja obliczaj¹ca najmniejsz¹ odleg³oœæ pomiêdzy punktami w tablicy
double najmniejsza_odleglosc(struct punkt* tab, int rozmiar) {
    double min_odleglosc = DBL_MAX;

    for (int i = 0; i < rozmiar - 1; i++) {
        for (int j = i + 1; j < rozmiar; j++) {
            double odleglosc_punktow = odleglosc(tab[i], tab[j]);
            if (odleglosc_punktow < min_odleglosc) {
                min_odleglosc = odleglosc_punktow;
            }
        }
    }

    return min_odleglosc;
}

int main() {
    // Przyk³adowa tablica punktów
    struct punkt tab[] = {
        {0.0, 0.0, 0.0},
        {1.0, 1.0, 1.0},
        {2.0, 2.0, 2.0},
        {3.0, 3.0, 3.0}
    };
    int rozmiar = sizeof(tab) / sizeof(tab[0]);

    double min_odleglosc = najmniejsza_odleglosc(tab, rozmiar);
    printf("Najmniejsza odleg³oœæ pomiêdzy punktami: %.6f\n", min_odleglosc);

    return 0;
}
