/*
    4- Leer 10 números y guardarlos en un vector. 
    Determinar e informar cuál es el valor máximo absoluto del vector. 
    Por ejemplo 20, -43 y 5, el máximo absoluto es -43.

*/

#include <iostream>

using namespace std;

int main() {
    int numero[10]; 
    int valorMaximoAbsoluto;

    for (int i = 0; i < 10; i++)
    {
        cout << " Ingresa un numero " << endl;
        cin >> numero[i];
    }
    
    valorMaximoAbsoluto = numero[0];

    for (int i = 1; i < 10; i++)
    {
        if ( abs( numero[i] ) > abs( valorMaximoAbsoluto ) )
        {
            valorMaximoAbsoluto = numero[i];
        }
        
    }
    
    cout << " El valor maximo absoluto es: " << valorMaximoAbsoluto << endl;
    return 0;
}