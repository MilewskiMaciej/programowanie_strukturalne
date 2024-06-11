#include <stdio.h>
#include <stdlib.h>

int** create_2d_array(int n, int m) {
    // Alokujemy pamiêæ na tablicê wskaŸników
    int** array = (int**)malloc(n * sizeof(int*));
    if (array == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return NULL;
    }

    // Alokujemy pamiêæ na wszystkie elementy w jednym bloku
    array[0] = (int*)malloc(n * m * sizeof(int));
    if (array[0] == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        free(array);
        return NULL;
    }

    // Ustawiamy wskaŸniki dla ka¿dego wiersza
    for (int i = 1; i < n; i++) {
        array[i] = array[0] + i * m;
    }

    return array;
}

// Funkcja pomocnicza do zwolnienia pamiêci
void free_2d_array(int** array) {
    if (array != NULL) {
        free(array[0]);
        free(array);
    }
}

int main() {
    int n = 3, m = 4;
    int** myArray = create_2d_array(n, m);

    if (myArray != NULL) {
        // Przyk³adowe u¿ycie tablicy
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                myArray[i][j] = i * m + j;
                printf("%d ", myArray[i][j]);
            }
            printf("\n");
        }

        // Uwalniamy pamiêæ po zakoñczeniu pracy z tablic¹
        free_2d_array(myArray);
    }

    return 0;
}
