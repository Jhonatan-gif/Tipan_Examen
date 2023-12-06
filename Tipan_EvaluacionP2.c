#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define alumnos 23
#define progresos 3

int main() {
    int calificaciones[alumnos][progresos];

    // Generar las notas aleatorias 
    srand(time(NULL));
    for (int i = 0; i < alumnos; i++) {
        for (int j = 0; j < progresos; j++) {
            calificaciones[i][j] = rand() % 11; // aleatoria entre 0 y 10
        }
    }



    return 0;
}
