/*
    10- Dada una lista de 20 números, cargarlos en un vector. 
    Determinar e informar la cantidad de “rupturas” que tiene el vector con respecto a un orden estrictamente creciente. 
    Ejemplo: el vector 1,3,4,2,4,4,6,8,1,7,9 tiene 3 rupturas.

*/

#include <iostream>

using namespace std;

int main() {
    int vector[20];
    int rupturas = 0;

    for (int i = 0; i < 20; i++)
    {
        cout << " Ingresa un numero ";
        cin >> vector[i];
    }

    for (int i = 0; i < 20; i++)
    {
        if ( vector[i] <= vector[i - 1] )
        {
            rupturas ++;
        }
        
    }
    
    cout << " La cantidad de rupturas es: " << rupturas << endl;
    return 0;
}