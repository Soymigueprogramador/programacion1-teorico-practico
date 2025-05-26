/*
    13- Dada una lista de 10 números, cargarlos en un vector. 
    Luego contar y listar la cantidad de números pares que aparecen en el vector.

*/

#include <iostream>

using namespace std;

int main() {
    int numeroVector[10];
    int cantidad = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << " Ingresa un numero " << endl;
        cin >> numeroVector[i];
    }
    
    for (int i = 0; i < 10; i++)
    {
        if ( numeroVector[i] % 2 == 0 )
        {
            cantidad ++;
            cout << " Numeros pares encontrados " << numeroVector[i]  << endl;
        }
    }

    cout << " La cantidad de numeros pares es " << cantidad << endl;
    return 0;
}