#include <stdio.h>

// Definicja struktury trojkat
struct trojkat {
    double a;
    double b;
    double c;
};

// Funkcja obliczaj¹ca obwód trójk¹ta
double obwod_trojkata(struct trojkat t) {
    return t.a + t.b + t.c;
}

int main() {
    // Przyk³adowe u¿ycie
    struct trojkat t = {3.0, 4.0, 5.0};
    double obwod = obwod_trojkata(t);
    printf("Obwód trójk¹ta: %.2f\n", obwod);

    return 0;
}
