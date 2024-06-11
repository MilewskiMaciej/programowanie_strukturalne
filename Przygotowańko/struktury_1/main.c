#include <stdio.h>

// Definicja struktury trojkat
struct trojkat {
    double a;
    double b;
    double c;
};

// Funkcja obliczaj�ca obw�d tr�jk�ta
double obwod_trojkata(struct trojkat t) {
    return t.a + t.b + t.c;
}

int main() {
    // Przyk�adowe u�ycie
    struct trojkat t = {3.0, 4.0, 5.0};
    double obwod = obwod_trojkata(t);
    printf("Obw�d tr�jk�ta: %.2f\n", obwod);

    return 0;
}
