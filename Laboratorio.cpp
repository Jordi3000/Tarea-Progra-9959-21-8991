/*En este apartado deberá entregar el laboratorio grupal  de vectores y matrices aplicado al caso "Universidad".  Este laboratorio deberá cumplir con los siguientes requisitos:
1. Manejar tres(3) matrices ( Ingeniería, arquitectura y Administración)
2. Las notas se generaran aleatoriamente y corresponderán a los exámenes: Primer Parcial (20 puntos), Segundo Parcial(25 puntos), Examen Final(35 puntos) y Actividades(20 puntos).  Se asume que las notas corresponden al promedio de todos los cursos asignados por alumno.  Se deberán calcular 10 alumnos por cada facultad.
3. El programa deberá calcular quien es la mejor facultad, el mejor alumno por facultad, el mejor alumnos por las tres facultades y el promedio general de las tres.
4. deberán desplegarse los datos detallados de cada facultad y los promedios solicitados.
5. El proceso deberá llevarse a cabo a través de un ciclo WHILE dos veces.
DEREK SAMAHEL THOMAS MONTERROSO 9959-21-7658 50%
Jordan Josué Israel Rodríguez Ruano 9959-21-8991 50%
LINK DEL VIDEO: https://drive.google.com/file/d/1DghZ1BlNozl009tjLy5kx-9VOo_1v3Du/view?usp=share_link
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int NUM_STUDENTS = 10; // Number of students per faculty
const int NUM_FACULTIES = 3; // Number of faculties

void generateGrades(int grades[][4]) {
    srand(time(NULL));
    for(int i=0; i<NUM_STUDENTS; i++) {
        for(int j=0; j<4; j++) {
            grades[i][j] = rand() % 101; // Random grades between 0 and 100
        }
    }
}

void displayGrades(int grades[][4], string faculty) {
    cout << "Grades for " << faculty << " faculty: " << endl;
    for(int i=0; i<NUM_STUDENTS; i++) {
        cout << "Student " << i+1 << ": ";
        for(int j=0; j<4; j++) {
            cout << grades[i][j] << " ";
        }
        cout << endl;
    }
}

void calculateAverages(int grades[][4], double &average, double studentAverages[]) {
    double totalSum = 0;
    for(int i=0; i<NUM_STUDENTS; i++) {
        double studentSum = 0;
        for(int j=0; j<4; j++) {
            studentSum += grades[i][j];
        }
        studentAverages[i] = studentSum / 4.0; // Average of student's grades
        totalSum += studentAverages[i];
    }
    average = totalSum / NUM_STUDENTS; // Average of all students' averages
}

int getBestStudent(double studentAverages[]) {
    int bestStudent = 0;
    for(int i=1; i<NUM_STUDENTS; i++) {
        if(studentAverages[i] > studentAverages[bestStudent]) {
            bestStudent = i;
        }
    }
    return bestStudent;
}

int main() {
    int engineeringGrades[NUM_STUDENTS][4];
    int architectureGrades[NUM_STUDENTS][4];
    int administrationGrades[NUM_STUDENTS][4];

    // Generate grades for each faculty
    generateGrades(engineeringGrades);
    generateGrades(architectureGrades);
    generateGrades(administrationGrades);

    // Display grades for each faculty
    displayGrades(engineeringGrades, "Engineering");
    displayGrades(architectureGrades, "Architecture");
    displayGrades(administrationGrades, "Administration");

    // Calculate averages for each faculty
    double engineeringAverage, architectureAverage, administrationAverage;
    double engineeringStudentAverages[NUM_STUDENTS];
    double architectureStudentAverages[NUM_STUDENTS];
    double administrationStudentAverages[NUM_STUDENTS];

    calculateAverages(engineeringGrades, engineeringAverage, engineeringStudentAverages);
    calculateAverages(architectureGrades, architectureAverage, architectureStudentAverages);
    calculateAverages(administrationGrades, administrationAverage, administrationStudentAverages);

    // Display averages for each faculty
    cout << "Average grades for each faculty:" << endl;
    cout << "Engineering: " << engineeringAverage << endl;
    cout << "Architecture: " << architectureAverage << endl;
    cout << "Administration: " << administrationAverage << endl;

    // Calculate best student per faculty
    int engineeringBestStudent = getBestStudent(engineeringStudentAverages);
    int architectureBestStudent = getBestStudent(architectureStudentAverages);
    int administrationBestStudent = getBestStudent(architectureStudentAverages);
}
