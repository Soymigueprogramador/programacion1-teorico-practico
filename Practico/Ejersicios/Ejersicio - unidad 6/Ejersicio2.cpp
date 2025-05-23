/*
    2- Leer 10 números y guardarlos en un vector. 
    Calcular el promedio y luego mostrar por pantalla los valores que son mayores al promedio.

*/

#include <iostream>

using namespace std;

int main() {
    int numero[10];
    int suma = 0;
    float promedio;

    cout << " Ingresa un numero " << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << " Ingresa un numero " << endl;
        cin >> numero[i];
        suma += numero[i];
    }

    promedio = suma / 10;

    for (int i = 0; i < 10; i++)
    {
        if ( numero[i] > promedio )
        {
            cout << numero[i] << endl;
        }
        
    }
    
    cout << " El promedio es: " << promedio << endl;
    cout << " El numero mayor al promedio es: " << endl;
    return 0;
}