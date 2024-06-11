#include <stdio.h>
#include <stdlib.h>

// Funkcja do tworzenia dynamicznej dwuwymiarowej tablicy
int** create_2d_array(int n, int m) {
    int** array = (int**)malloc(n * sizeof(int*));
    if (array == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return NULL;
    }

    for (int i = 0; i < n; i++) {
        array[i] = (int*)malloc(m * sizeof(int));
        if (array[i] == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            for (int j = 0; j < i; j++) {
                free(array[j]);
            }
            free(array);
            return NULL;
        }
    }

    return array;
}

// Funkcja do zwolnienia pamiêci zajmowanej przez dwuwymiarow¹ tablicê
void delete_2d_array(int** array, int n, int m) {
    if (array != NULL) {
        for (int i = 0; i < n; i++) {
            free(array[i]);
        }
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
        delete_2d_array(myArray, n, m);
    }

    return 0;
}
