#include <stdio.h>
#include <stdlib.h>

int** create_2d_array(int n, int m) {
    // Alokujemy pami�� na tablic� wska�nik�w
    int** array = (int**)malloc(n * sizeof(int*));
    if (array == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return NULL;
    }

    // Alokujemy pami�� na wszystkie elementy w jednym bloku
    array[0] = (int*)malloc(n * m * sizeof(int));
    if (array[0] == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        free(array);
        return NULL;
    }

    // Ustawiamy wska�niki dla ka�dego wiersza
    for (int i = 1; i < n; i++) {
        array[i] = array[0] + i * m;
    }

    return array;
}

// Funkcja pomocnicza do zwolnienia pami�ci
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
        // Przyk�adowe u�ycie tablicy
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                myArray[i][j] = i * m + j;
                printf("%d ", myArray[i][j]);
            }
            printf("\n");
        }

        // Uwalniamy pami�� po zako�czeniu pracy z tablic�
        free_2d_array(myArray);
    }

    return 0;
}
