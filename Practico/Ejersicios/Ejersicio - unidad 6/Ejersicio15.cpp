/*
    15- Dada una lista de 5 números, cargarlos en un vector. 
    Armar luego otro vector de 9 elementos donde por cada 2 elementos del vector original intercale el promedio de ellos. 
    Por ejemplo: [2, 4, 6, 8, 10],  el vector queda: [2, 3, 4, 5, 6, 7, 8, 9, 10].

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int arrayOriginal[5];
    vector<int> resultado;

    for (int i = 0; i < 5; i++)
    {
        cout << " Ingresa un numero " << endl;
        cin >> arrayOriginal[i];
    }
    
    for (int i = 0; i < 4; i++)
    {
        resultado.push_back( arrayOriginal[i] );
        int promedio = ( arrayOriginal[i] + arrayOriginal[i + 1] ) / 2;
        resultado.push_back(promedio);
    }
    

    resultado.push_back( arrayOriginal[4] );

    cout << " Vector  ";

    for ( int numero : resultado )
    {
        cout << numero << "  " << endl;
    }
    
    return 0;
}