#include <stdio.h>
#include <stdlib.h>

int** create_2d_array(int n, int m) {
    // Alokujemy pami�� na tablic� wska�nik�w
    int** array = (int**)malloc(n * sizeof(int*));
    if (array == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return NULL;
    }

    // Alokujemy pami�� na ka�dy wiersz tablicy
    for (int i = 0; i < n; i++) {
        array[i] = (int*)malloc(m * sizeof(int));
        if (array[i] == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            // Uwalniamy wcze�niej alokowan� pami��
            for (int j = 0; j < i; j++) {
                free(array[j]);
            }
            free(array);
            return NULL;
        }
    }

    return array;
}

// Funkcja pomocnicza do zwolnienia pami�ci
void free_2d_array(int** array, int n) {
    for (int i = 0; i < n; i++) {
        free(array[i]);
    }
    free(array);
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
        free_2d_array(myArray, n);
    }

    return 0;
}
