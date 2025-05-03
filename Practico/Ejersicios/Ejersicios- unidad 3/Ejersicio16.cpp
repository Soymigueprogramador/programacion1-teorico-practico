/*
    Enunciado:
    16- Hacer un programa para ingresar 5 números, luego informar los 2 mayores valores ingresados, aclarando
    cual es el máximo y cuál el que le sigue.
    Ejemplo A: 10, 8, 12, 14, 3 el resultado será 14 y 12.
    Ejemplo B: 14, 8, 12, 14 ,3 el resultado será 14 y 14.
    Ejemplo C: -4, -8, -12, -20, -10 el resultado será -4 y -8
    Ejemplo D: 100, 20, 5, -15, 70, el resultado será 100 y 70.
    Ejemplo E: -100, -20, -5, 15, -70, el resultado será 15 y -5.

    Se recomienda probar el diagrama que vaya a desarrollar con todos los ejemplos, en particular el Ejemplo D,
    en el cual el máximo de la lista aparece en el primer lugar y que si no se tiene precaución puede llevar a resultados
    como 100 como máximo y 100 como segundo máximo. ¡ESO ES INCORRECTO! El resultado debe ser 100 y 70.

    **Simplificación del problema:**
    Tengo que hacer un programa para ingresar 5 numeros y mostrar el primer numero maximo y el segundo numero maximo

    **Análisis:**
    - **Datos de entrada:**
        Variables:
            numero, PrimerMaximo, segundoMaximo;

    - **Datos de salida:**
    Mostramos el primer numero maximo y el segundo numero maximo.

    **Operación:**
    Ingresamos los numeros e iteramos hasta sacar el numero maximo

    **Estrategia:**
    1- Ingresamos 5 numeros
    2- Iteramos con un for
    3- Mostramos el primer numero y el segundo numero maximo

    **Diagrama del código:**
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.

    **Codificación:**
*/

#include <iostream>

using namespace std;

int main() {
    int numero, primerMaximo=0, segundoMaximo=0;

    for (int i = 0; i < 5; i++) {
        cout << "Ingresa un numero: ";
        cin >> numero;

        if (numero > primerMaximo) {
            segundoMaximo = primerMaximo;
            primerMaximo = numero;
        } else if (numero > segundoMaximo) {
            segundoMaximo = numero;
        }
    }

    cout << "El primer numero maximo es: " << primerMaximo << endl;
    cout << "El segundo numero maximo es: " << segundoMaximo << endl;

    return 0;
}

