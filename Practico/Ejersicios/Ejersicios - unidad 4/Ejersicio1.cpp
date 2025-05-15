/*
    Enunciado:
    1- Hacer un programa para ingresar una lista de 10 números y luego informar cuántos
    de los números ingresados son perfectos. Se informa 1 resultado al final.

    **Simplificación del problema:**
    Tengo que crear un programa para ingresar 10 numeros y muestro los numeros perfectos (Enteros)

    **Análisis:**
    - **Datos de entrada:**
        Variables:
            numeros, numeroPerfecto;

    - **Datos de salida:**
    Mostramos un numero perfecto

    **Operación:**
    Tenemos que iterar con un ciclo for

    **Estrategia:**
    1- Pedimos un numero
    2- Iteramos ese numero hasta llegar al maximo
    3- Mostramos un numero como resultado

    **Diagrama del código:**
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.

    **Codificación:**
*/

#include <iostream>
using namespace std;

int main()
{
    int numero, i, j, sumaDivisores;
    int numeroPerfecto = 0;
    int cantidadNumeros = 10;

    for (i = 0; i < cantidadNumeros; i++)
    {
        cout << "Ingrese el numero " << (i + 1) << ": ";
        cin >> numero;

        sumaDivisores = 0; 

        for (j = 1; j < numero; j++)
        {
            if (numero % j == 0)
            {
                sumaDivisores += j;
            }
        }

        if (sumaDivisores == numero)
        {
            numeroPerfecto++;
        }
    }

    cout << "Cantidad de numeros perfectos ingresados: " << numeroPerfecto << endl;
    return 0;
}
