/*En este apartado deberá entregar el laboratorio grupal  de vectores y matrices aplicado al caso "Universidad".  Este laboratorio deberá cumplir con los siguientes requisitos:

1. Manejar tres(3) matrices ( Ingeniería, arquitectura y Administración)

2. Las notas se generaran aleatoriamente y corresponderán a los exámenes: Primer Parcial (20 puntos), Segundo Parcial(25 puntos), Examen Final(35 puntos) y Actividades(20 puntos).  Se asume que las notas corresponden al promedio de todos los cursos asignados por alumno.  Se deberán calcular 10 alumnos por cada facultad.

3. El programa deberá calcular quien es la mejor facultad, el mejor alumno por facultad, el mejor alumnos por las tres facultades y el promedio general de las tres.

4. deberán desplegarse los datos detallados de cada facultad y los promedios solicitados.

5. El proceso deberá llevarse a cabo a través de un ciclo WHILE dos veces.

DEREK SAMAHEL THOMAS MONTERROSO 9959-21-7658 50%
Jordan Josué Israel Rodríguez Ruano 9959-21-8991 50%
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int NUM_FACULTADES = 3;
const int NUM_ALUMNOS = 10;
const int NUM_EVALUACIONES = 4;
const string FACULTADES[NUM_FACULTADES] = {"Ingeniería", "Arquitectura", "Administración"};

void generarNotas(float notas[][NUM_EVALUACIONES]);
void calcularPromedios(float notas[][NUM_EVALUACIONES], float promedios[], float &promedioGeneral);
int buscarMejorFacultad(float promedios[]);
int buscarMejorAlumno(float notas[][NUM_EVALUACIONES], int numFacultad);
int buscarMejorAlumnoTotal(float notas[][NUM_EVALUACIONES]);
void imprimirDatos(float notas[][NUM_EVALUACIONES], float promedios[], float promedioGeneral);

int main() {
    srand(time(NULL));
    float notas[NUM_FACULTADES][NUM_ALUMNOS][NUM_EVALUACIONES];
    float promedios[NUM_FACULTADES];
    float promedioGeneral;

    // Generar notas aleatorias
    for (int i = 0; i < NUM_FACULTADES; i++) {
        generarNotas(notas[i]);
    }

    // Calcular promedios
    calcularPromedios(notas[0], promedios, promedioGeneral);

    // Ciclo WHILE
    int iteracion = 1;
    while (iteracion <= 2) {
        // Imprimir datos
        imprimirDatos(notas[0], promedios, promedioGeneral);

        // Calcular promedios y buscar mejor facultad
        calcularPromedios(notas[iteracion], promedios, promedioGeneral);
        int mejorFacultad = buscarMejorFacultad(promedios);

        // Buscar mejor alumno por facultad y en total
        int mejorAlumnoFacultad = buscarMejorAlumno(notas[iteracion], mejorFacultad);
        int mejorAlumnoTotal = buscarMejorAlumnoTotal(notas[0]);

        // Imprimir resultados
        cout << "\nMejor facultad: " << FACULTADES[mejorFacultad] << endl;
        cout << "Mejor alumno de " << FACULTADES[mejorFacultad] << ": " << "Alumno " << mejorAlumnoFacultad + 1 << endl;
        cout << "Mejor alumno en total: " << "Alumno " << mejorAlumnoTotal + 1 << endl;

        iteracion++;
    }

    return 0;
}

// Función para generar notas aleatorias
void generarNotas(float notas[][NUM_EVALUACIONES]) {
    for (int i = 0; i < NUM_ALUMNOS; i++) {
        for (int j = 0; j < NUM_EVALUACIONES; j++) {
            notas[i][j] = (rand() % 51) / 10.0; // Generar número aleatorio entre 0 y 5 con una precisión de 1 decimal
        }
    }
}

// Función para calcular promedios
void calcularPromedios(float notas[][NUM_EVALUACIONES], float promedios[], float &promedioGeneral)
{
    for (int i = 0; i < NUM_ALUMNOS; i++)
    {
        for (int j = 0; j < NUM_EVALUACIONES; j++)
        {

        }
    }
}
