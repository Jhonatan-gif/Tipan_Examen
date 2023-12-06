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
    // Promedio del grupo para cada progreso
    float promedios[progresos];
    for (int j = 0; j < progresos; j++) {
        int suma = 0;
        for (int i = 0; i < alumnos; i++) {
            suma += calificaciones[i][j];
        }
        promedios[j] = (float)suma / alumnos;
    }

    // Imprimir la nota promedio del grupo para cada progreso
    printf("Nota promedio del grupo para cada progreso:\n");
    for (int j = 0; j < progresos; j++) {
        printf("Parcial %d: %.2f\n", j+1, promedios[j]);
    }

    // Encontrar el alumno con el puntaje más alto en todo el semestre
    int maxPuntaje = 0;
    int alumnoMaxPuntaje = 0;
    for (int i = 0; i < alumnos; i++) {
        int puntajeAlumno = 0;
        for (int j = 0; j < progresos; j++) {
            puntajeAlumno += calificaciones[i][j];
        }
        if (puntajeAlumno > maxPuntaje) {
            maxPuntaje = puntajeAlumno;
            alumnoMaxPuntaje = i;
        }
    }

    // Imprimir el alumno con el puntaje más alto en todo el semestre
    printf("Alumno con el puntaje mas alto en todo el semestre: Alumno %d\n", alumnoMaxPuntaje+1);

    return 0;
}
