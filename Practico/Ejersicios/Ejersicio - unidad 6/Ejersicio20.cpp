/*
    20- Dadas dos listas de 5 números cada una y sin números repetidos, cargarlas en dos vectores. 
    Generar un tercer vector que contenga los elementos de ambos vectores intercalados. Mostrar en pantalla el nuevo vector.
    Vector 1: [8, 10, -3, 5, 7]
    Vector 2: [20, -8, 10, 9, 3]
    Vector 3: [8, 20, 10, -8, -3, 10, 5, 9, 7, 3]

*/

// Recordatorio: Para fucionar o guardar datos en vectores debemos usar ".push_back( nombreDelVector[i] )"

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> array1 = {8, 10, -3, 5, 7};
    vector<int> array2 = {20, -8, 10, 9, 3};
    vector<int> array3;

    for (int i = 0; i < 5; i++)
    {
        array3.push_back( array1[i] );
        array3.push_back( array2[i] );
    }
    
    cout << " Asi se ve el array numero 3 ";
    for ( int numero : array3 )
    {
        cout << numero << endl;
    }
    
    return 0;
}