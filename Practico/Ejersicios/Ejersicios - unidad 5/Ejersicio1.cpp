/*
    Enunciado:
    1- Hacer una función llamada EsPar que determine si un número es par o no. La función
    debe recibir un número entero por valor y devolver true si es par o false si no lo es.
    La función no debe mostrar nada por pantalla.
    Hacer un programa para ingresar un número y, utilizando EsPar, emita luego un cartel
    indicando si el número ingresado es par o no es par.

    **Simplificación del problema:**
    Tengo que crear una funcion para comprobar si el numero ingresado es par o no.

    **Análisis:**
    - **Datos de entrada:**
        Variables:
            numero;

    - **Datos de salida:**
    Tengo que mostrar un carte que diga si el numero es o no par

    **Operación:**
    Creo una funcion llamada esPar con las condiciones y despues llamo a la funcion dentro del condicional.

    **Estrategia:**
    1- Creo una funcion con los elementos necesario para la condicion.
    2- Pido un numero
    3- Con un condicional comparo si el numero es par o no
    4- Muestro un cartel que indica el resultado

    **Diagrama del código:**
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.

    **Codificación:**
*/
#include <iostream>

using namespace std;

bool esPar(int numero)
{
    return (numero % 2 == 0);
}

int main()
{
    int numero;

    cout << " Ingresa un numero ";
    cin >> numero;

    if (esPar(numero))
    {
        cout << " El numero " << numero << " es un numero par " << endl;
    }
    else
    {
        cout << " El numero " << numero << " no es un numero par " << endl;
    }

    return 0;
}