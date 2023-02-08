// Jordan Josue Israel Rodriguez Ruano
// Carne == 9959-21-8991



#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

//Definición de prototipos
void menuPrincipal();
void menuOperacionesBasicas();
void menuOperacionesExtendidas();
void factorial();
void raiz();
void potencia();
void porcentaje();
void valorAbsoluto();
void logaritmoB10();
void sumar();
void restar();
void multiplicar();
void dividir();

int main() {
    menuPrincipal();
    return 0;
}
//Implementación de funciones
void menuOperacionesExtendidas()
{
    int opciones;
    bool repetir = true;
    do
    {
        system("cls");
        cout << "\n\n\t\t\tMenu Operaciones Extendidas" << endl;
        cout << "\t\t\t-----------------" << endl;
        cout << "\t1. Factorial" << endl;
        cout << "\t2. Raiz" << endl;
        cout << "\t3. Potencia" << endl;
        cout << "\t4. Porcentaje" << endl;
        cout << "\t5. Valor absoluto" << endl;
        cout << "\t6. Logaritmo base 10" << endl;
        cout << "\t7. Salir" << endl;
        cout << "\n\tIngrese una opción: ";
        cin >> opciones;
        switch (opciones)
        {
        case 1:
                factorial();
                break;
        case 2:
                raiz();
                break;
        case 3:
                potencia();
                break;
        case 4:
                porcentaje();
                break;
        case 5:
                valorAbsoluto();
                break;
        case 6:
                logaritmoB10();
                break;

        case 7: repetir = false;
                break;



        }
    } while (repetir);
}
void menuOperacionesBasicas()
{
    int opciones;
    bool repetir = true;
    do
    {
        system("cls");
        cout << "\n\n\t\t\tMenu Operaciones Basicas" << endl;
        cout << "\t\t\t-----------------" << endl;
        cout << "\t1. Sumar dos números" << endl;
        cout << "\t2. Restar dos números" << endl;
        cout << "\t3. Multiplicar dos números" << endl;
        cout << "\t4. Dividir dos números" << endl;
        cout << "\t5. SALIR" << endl;
        cout << "\n\tIngrese una opción: ";
        cin >> opciones;
        switch (opciones)
        {
        case 1:
                sumar();
                break;
        case 2:
                restar();
                break;
        case 3:
                multiplicar();
                break;
        case 4:
                dividir();
                break;
        case 5: repetir = false;
                break;
        }
    } while (repetir);
}
void menuPrincipal()
{
    int opciones;
    bool repetir = true;
    do
    {
        system("cls");
        cout << "\n\n\t\t\tMENU CALCULADORA" << endl;
        cout << "\t\t\t-----------------" << endl;
        cout << "\t1. Operaciones Basicas" << endl;
        cout << "\t2. Operaciones Extendidas" << endl;
        cout << "\t3. SALIR" << endl;
        cout << "\n\tIngrese una opción: ";
        cin >> opciones;
        switch (opciones)
        {
        case 1:
                menuOperacionesBasicas();
                break;
        case 2:
                menuOperacionesExtendidas();
                break;
        case 3:
                repetir = false;
                break;
        }
    } while (repetir);
}
void factorial()
{
    system("cls");
    int numeroIngresado, i;
    float resultadoFactorial;
    cout << "\n\tCalculo del Factorial" << endl;
    cout << "\t\t\t-----------------" << endl;
    cout << "\n\tIngrese Número: ";
    cin >> numeroIngresado;
    resultadoFactorial = 1;
    for (i=1; i <= numeroIngresado; i++)
    {
        resultadoFactorial = resultadoFactorial * i;
    }
    cout << "\t" << numeroIngresado << "! = " << resultadoFactorial << endl;
    system("pause>nul");
}
void raiz()
{
    system("cls");
    int numeroIngresado;
    float resultadoRaiz;
    cout << "\n\tCalculo de la raiz cuadrada";
    cout << "\n\t----------------------" << endl;
    cout << "\n\tIngrese el numero: ";
    cin >> numeroIngresado;
    resultadoRaiz = 1;
    if (numeroIngresado <= -1)
    {
        cout << "\tError el numero ingresado debe ser igual o mayor a 0" << endl;
    }else
    {
         resultadoRaiz = (sqrt(numeroIngresado));
         cout << "\tLa raiz de " << numeroIngresado << " \tes " << resultadoRaiz << endl;
    }
    system("pause>nul");

}
void potencia()
{
    system("cls");
    int primerNumero, segundoNumero;
    float resultadoPotencia;
    float potencia = 1;
    cout << "\n\tIngrese primer Número: ";
    cin >> primerNumero;
    cout << "\n\tIngrese segundo Número: ";
    cin >> segundoNumero;
    cout << "\n\t----------------------" << endl;
    for(resultadoPotencia = 1; resultadoPotencia <= segundoNumero; resultadoPotencia++)
    {
        potencia = potencia * primerNumero;
    }
    cout << "\tLa potencia del numero ingresado es: " << potencia << endl;
    system("pause>nul");
}
void porcentaje()
{
    system("cls");
    int primerNumero, segundoNumero;
    float resultadoPorcentaje;
    float operacion;
    float base = 0.01;

    cout << "\n\tIngrese el numero a evaluar: " << endl;
    cin >> primerNumero;
    cout << "\n\tIngrese el numero de porcentaje de 1 a 100: " << endl;
    cin >> segundoNumero;
    cout << "\n\t----------------------" << endl;
    if(segundoNumero <= 0, segundoNumero >= 101)
    {
        cout << "\tError ingrese un numero dentro de los intervalos" << endl;
    }else
    {
        operacion = segundoNumero * base;
    resultadoPorcentaje = primerNumero * operacion;
    }
  cout << "El porcentaje del numero es: " << resultadoPorcentaje << endl;
  system("pause>nul");
}
void valorAbsoluto()
{
    system("cls");
    int numeroIngresado;
    float resultado;
    cout << "\n\tIngrese el numeroa evaluar: " << endl;
    cin >> numeroIngresado;
    resultado = numeroIngresado;
    cout << "\tEl valor absoluto es: " << resultado << endl;
    system("pause>nul");
}
void logaritmoB10()
{
    system("cls");
    int numeroIngresado;
    cout << "\tIngrese el numeroa evaluar: " << endl;
    cin >> numeroIngresado;
    if(numeroIngresado <= 0)
    {
        cout << "\tError el numero ingresado tiene que ser igual o mayor a 1" << endl;
    }else
    {
        numeroIngresado = numeroIngresado;
    }
    cout << "\tEl logaritmo de base 10 del numero es: "<< log10(numeroIngresado) << endl;
    system("pause>nul");
}

void sumar()
{
    int primerNumero, segundoNumero;
    float resultadoSumar;
    cout << "\n\tIngrese primer Número: ";
    cin >> primerNumero;
    cout << "\n\tIngrese segundo Número: ";
    cin >> segundoNumero;
    cout << "\n\t----------------------" << endl;
    resultadoSumar = primerNumero + segundoNumero;
    cout << "\tResultado de la suma: " << resultadoSumar << endl;
    system("pause>nul");
}
void restar()
{
    int primerNumero, segundoNumero;
    float resultadoRestar;
    cout << "\n\tIngrese primer Número: ";
    cin >> primerNumero;
    cout << "\n\tIngrese segundo Número: ";
    cin >> segundoNumero;
    cout << "\n\t----------------------" << endl;
    resultadoRestar = primerNumero - segundoNumero;
    cout << "\tResultado de la resta: " << resultadoRestar << endl;
    system("pause>nul");
}
void multiplicar()
{
    int primerNumero, segundoNumero;
    float resultadoMultiplicar;
    cout << "\n\tIngrese primer Número: ";
    cin >> primerNumero;
    cout << "\n\tIngrese segundo Número: ";
    cin >> segundoNumero;
    cout << "\n\t----------------------" << endl;
    resultadoMultiplicar = primerNumero * segundoNumero;
    cout << "\tResultado de la multiplicacion: " << resultadoMultiplicar << endl;
    system("pause>nul");
}
void dividir()
{
    int primerNumero, segundoNumero;
    float resultadoDividir;
    cout << "\n\tIngrese primer Número: ";
    cin >> primerNumero;
    cout << "\n\tIngrese segundo Número: ";
    cin >> segundoNumero;
    cout << "\n\t----------------------" << endl;
    if (segundoNumero == 0)
    {
        cout << "\tSegundo numero no puede ser cero (0) ERROR" << endl;
    } else
    {
        resultadoDividir = primerNumero / segundoNumero;
        cout << "\tResultado de la division: " << resultadoDividir << endl;
    }
    system("pause>nul");
}

