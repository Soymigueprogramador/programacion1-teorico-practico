/*
    12- Dada una lista de 10 números, cargarlos en un vector. 
    Luego ingresar un número e informar la cantidad de veces que ese número aparece en el vector.

*/

#include <iostream>

using namespace std;

int main() {
    int numeroVector[10];
    int numeroRepetido;
    int cantidad = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << " Ingresa un numero " << endl;
        cin >> numeroVector[i];
    }
    
    cout << " ¿ Clau es el numero que queres ver si se repite ? " << endl;
        cin >> numeroRepetido;
    
    for (int i = 0; i < 10; i++)
    {
        if ( numeroVector[i] == numeroRepetido )
        {
            cantidad ++;
        }
    }

    cout << " El numero " << numeroRepetido << " aparece repetido " << cantidad << " de veces " << endl;
    return 0;
}