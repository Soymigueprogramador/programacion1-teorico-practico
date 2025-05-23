/*
    4- Hacer una función llamada EsPrimoSophieGermain que reciba un número entero y determine 
    si el mismo es un número primo de Sophie Germain. Debe devolver verdadero si lo es y falso si no lo es.
    NOTA: En teoría de números, se dice que un número natural es un número primo de Sophie Germain, si el 
    número n es primo y 2*n+1 también lo es.
    Ejemplo:
    El número 2 es número primo de Sophie Germain porque:
    2 es primo
    2*2+1 → 5 es primo.

    Hacer un programa para ingresar un número y, utilizando EsPrimoSophieGermain, emita luego un cartel indicando 
    si el número ingresado es primo Sophie Germain o no lo es.

*/

#include <iostream>

using namespace std;

bool esPrimo( int numero ) {
    if ( numero <= 1 )
    {
        return false;
    }
    
    for (int i = 2; i <= numero; i++)
    {
        if ( numero % i == 0 )
        {
            return false;
        }
    }
    
    return true;
}

bool esPrimoGermain( int numero ) {
    return esPrimo( numero ) && esPrimo(2 * numero + 1);
}

int main() {
    int n;

    cout << " Ingresa un numero ", cin >> n;

    if ( esPrimoGermain(n) )
    {
        cout << n << " Es un numero primo de Sophie Germain." << endl;
    } else {
        cout << n << " No es un numero primo de Sophie Germain." << endl;
    }
    
    return 0;
}