// Este ejemplo prentende mostrar el nivel de adaptacion de c a c++, utilizando matrices o arreglos bidimensionales
//Fecha de creacion 16 de febrero 2023
//Incluyendo librerias de c++
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iomanip>
#include <string>

using namespace std;
const int NUMERO_ALUMNOS = 3;
const int NUMERO_MATERIAS = 3;
const int MAX_CALIFICACION = 100;
const int MIN_CALIFICACION = 0;
const int MAX_LONGITUD_CADENA = 100;
int busquedaAleatorios(int minimo, int maximo);
void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS+1]);
void imprimirLineaMatriz();
void imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS+1], char alumnos[NUMERO_ALUMNOS][MAX_LONGITUD_CADENA]);

int main()
{
    srand(getpid());
    float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS+1];
    char alumnos[NUMERO_ALUMNOS][MAX_LONGITUD_CADENA]= {"Mario", "Carlos", "Maria"} ;
    llenarMatriz(matriz);
    imprimirMatriz(matriz, alumnos);
    return 0;
}
int busquedaAleatorios(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1)+1);
}
void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS+1])
{
    int y, x;
    for (y=0; y < NUMERO_ALUMNOS; y++)
    {
        float sumaNotasAlumno = 0;
        for (x=0; x < NUMERO_MATERIAS; x++)
        {
            int calificacionAlumno = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION);
            sumaNotasAlumno += (float)calificacionAlumno;
            matriz[y][x] = calificacionAlumno;
        }
        float promedioNotasAlumno = sumaNotasAlumno / NUMERO_MATERIAS;
        matriz[y][NUMERO_MATERIAS] = promedioNotasAlumno;
    }
}
void imprimirLineaMatriz()
{
    int x;
    printf("+-----------------");
    for (x=0; x < NUMERO_MATERIAS + 1; x++)
    {
        printf("----------");

    }
    printf("+\n");
}
void imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS+1], char alumnos[NUMERO_ALUMNOS][MAX_LONGITUD_CADENA])
{
    int y,x;
    float promedioMayor = matriz[0][NUMERO_MATERIAS];
    float promedioMenor = matriz[0][NUMERO_MATERIAS];
    char alumnoPromedioMayor[MAX_LONGITUD_CADENA];
    char alumnoPromedioMenor[MAX_LONGITUD_CADENA];
    memcpy(alumnoPromedioMayor, alumnos[0], MAX_LONGITUD_CADENA);
    memcpy(alumnoPromedioMenor, alumnos[0], MAX_LONGITUD_CADENA);
    imprimirLineaMatriz();
    printf("|  Alumno  |");
    for (x = 0; x < NUMERO_MATERIAS; x++)
    {
        cout << "Cal %d   |"<< x + 1 ;
    }
    cout << "Promedio|\n" << endl;;
    imprimirLineaMatriz();
    for (y = 0; y < NUMERO_ALUMNOS ; y++)
    {
        printf("|% -10s|", alumnos[y]);
        float suma = 0;
        for (x = 0; x < NUMERO_MATERIAS; x++)
        {
            int calificacion = matriz[y][x];
            printf("%-7d|", calificacion);
        }
        float promedio = matriz[y][NUMERO_MATERIAS];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy(alumnoPromedioMayor, alumnos[y], MAX_LONGITUD_CADENA);
        }
        if (promedio < promedioMenor)
        {
            promedioMenor = promedio;
            memcpy(alumnoPromedioMayor, alumnos[y], MAX_LONGITUD_CADENA);

        }
        cout << promedio<< "     |\n" << endl;
        imprimirLineaMatriz();

    }
    cout << "Promedio mayor: " << alumnoPromedioMayor << " con " << promedioMayor << endl;
    cout <<"Promedio menor: " << alumnoPromedioMenor << "con" << promedioMenor << endl;
}

