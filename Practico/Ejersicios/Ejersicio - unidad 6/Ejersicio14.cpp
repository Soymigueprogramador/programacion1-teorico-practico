/*
    14- Dada una lista de 10 números, cargarlos en un vector. 
    Luego contar y listar la cantidad de números primos que aparecen en el vector.

*/

#include <iostream>

using namespace std;

int primo( int n ) {
    if ( n <= 1 ) return false;
    {
        for (int i = 2; i * i <= n; i++)
        {
            if ( n % i == 0 )
            {
                return false;
            }
        }
    }
    
    return true;
}

int main() {
    int array[10];
    int cantidadPrimo = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << " Ingresa un numero " << endl;
        cin >> array[i];
    }
    
    cout << " Numeros primos encontrados " << endl;
    for (int i = 0; i < 10; i++)
    {
        if ( primo(array[i]) )
        {
            cantidadPrimo ++;
        }
        
    }
    
    cout << " La cantidad de numeros primos es: " << cantidadPrimo << endl;
    return 0;
}   