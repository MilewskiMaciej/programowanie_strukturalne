#include <stdio.h>
#include <stdlib.h>

// Funkcja do tworzenia dynamicznej dwuwymiarowej tablicy
int** create_2d_array(int n, int m) {
    int** array = (int**)malloc(n * sizeof(int*));
    if (array == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return NULL;
    }

    array[0] = (int*)malloc(n * m * sizeof(int));
    if (array[0] == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        free(array);
        return NULL;
    }

    for (int i = 1; i < n; i++) {
        array[i] = array[0] + i * m;
    }

    return array;
}

// Funkcja do zwolnienia pami�ci zajmowanej przez dwuwymiarow� tablic�
void delete_2d_array(int** array, int n, int m) {
    if (array != NULL) {
        free(array[0]);  // Zwalniamy ci�g�y blok pami�ci
        free(array);     // Zwalniamy tablic� wska�nik�w
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
        delete_2d_array(myArray, n, m);
    }

    return 0;
}
