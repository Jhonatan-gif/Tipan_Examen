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
    // Imprimir las notas de los alumnos
    printf("Notas de los alumnos:\n");
    for (int i = 0; i < alumnos; i++) {
        printf("Alumno %d: ", i+1);
        for (int j = 0; j <progresos; j++) {
            printf("%d ", calificaciones[i][j]);
        }
        printf("\n");
    }


    return 0;
}
