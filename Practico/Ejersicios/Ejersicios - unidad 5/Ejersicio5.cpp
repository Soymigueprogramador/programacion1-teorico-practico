/*
    5- Hacer una función llamada Redondear que reciba como parámetro un número float y devuelva un número entero con el redondeo del mismo.
    Por ejemplo:
    Si recibe 7.78, debe devolver 8.
    Si recibe 7.48, debe devolver 7.
    Si recibe 7.5, debe devolver 8.

    Hacer un programa para ingresar un número y, utilizando Redondear, emita luego un cartel indicando el número redondeado.

*/

#include <iostream>

using namespace std;

int redondear( float numero ) {
    return static_cast< int >( numero + 0.5 );
}

int main() {
    int numero, resultado;

    cout << " Ingresa un numero ", cin >> numero;
    
    resultado = redondear(numero);

    cout << " El numero redondo es: " << resultado << endl;
    return 0;
}