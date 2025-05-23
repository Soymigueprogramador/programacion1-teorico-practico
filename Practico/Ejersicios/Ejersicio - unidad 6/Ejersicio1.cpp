/*
    1- Hacer un programa para ingresar 10 números y guardarlos en un vector. 
    Determinar e informar cuál es la suma de los valores del vector.

*/

#include <iostream>

using namespace std;

int main() {
    int numero[10];
    int suma = 0;

    cout << " Ingresa un numero " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << " Ingresa un numero ";
        cin >> numero[i];

        suma += numero[i];
    }
    
    cout << " La suma de todos los elementos del vectos es: " << suma << endl;
    return 0;
}