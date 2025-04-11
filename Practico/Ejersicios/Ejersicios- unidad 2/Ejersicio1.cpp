/*
    Enunciado: 
    1- Hacer un programa para ingresar por teclado un número y luego emitir por pantalla un cartel 
    aclaratorio indicando si el mismo es positivo, negativo o cero.
    Importante:
    Verifique que el programa emita UN SOLO CARTEL.

    **Simplificación del problema:**
    Crear un programa que muestre un cartel indicando si el número ingresado es positivo, negativo o cero. 

    **Análisis:**  
    - **Datos de entrada:**
        Variables:
            numeroIngresado

    - **Datos de salida:**
        Cartel indicando qué número es. 

    **Operación:**
    Ingresamos un número y preguntamos si es positivo, negativo o cero.   

    **Estrategia:**
    1- Pedimos que se ingrese un número.
    2- Evaluamos si el número es positivo, negativo o cero.
    3- Mostramos un cartel indicando qué tipo de número es.

    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  
*/

#include <iostream>

using namespace std;

int main() {
    int numeroIngresado;

    cout << "Ingresa un número: ";
    cin >> numeroIngresado;

    if (numeroIngresado > 0) {
        cout << "El número es positivo." << endl;
    } else if (numeroIngresado < 0) {
        cout << "El número es negativo." << endl;
    } else {
        cout << "El número es cero." << endl;
    }

    return 0;
}