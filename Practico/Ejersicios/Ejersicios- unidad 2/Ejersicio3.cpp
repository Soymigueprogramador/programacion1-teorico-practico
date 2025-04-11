//3- Hacer un programa para ingresar por teclado un número y luego informar por pantalla con un cartel aclaratorio si el mismo es par o impar.

#include <iostream>

using namespace std;

int main() {
    int n; 

    cout << " Ingresa un numero ";
    cin >> n;

    if ( n % 2 == 0 )
    {
        cout << " El numero " << n << " es par " << endl;
    } else {
        cout << " El numero " << n << " no es par " << endl;
    }
    
    return 0;
}