/*
    9- Escribir una función que reciba un número y retorne 1 si el número recibido es perfecto y 0 si no es perfecto.
    Hacer un programa para que, dada una lista de números que finaliza con cero, informe cuántos de ellos eran perfectos.
    Utilizar la función solicitada.
*/

#include <iostream>
using namespace std;

// Función para verificar si un número es perfecto
int numeroPerfecto(int n) {
    int suma = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            suma += i;
        }
    }
    return (suma == n) ? 1 : 0;
}

int main() {
    int numero;
    int contadorPerfecto = 0;

    cout << "Ingresa una lista de numeros (termina con 0):" << endl;

    while (true) {
        cin >> numero;

        if (numero == 0)
            break;

        if (numeroPerfecto(numero)) {
            cout << numero << " es un numero perfecto." << endl;
            contadorPerfecto++;
        } else {
            cout << numero << " no es un numero perfecto." << endl;
        }
    }

    cout << "\nLa cantidad de numeros perfectos es: " << contadorPerfecto << endl;

    return 0;
}