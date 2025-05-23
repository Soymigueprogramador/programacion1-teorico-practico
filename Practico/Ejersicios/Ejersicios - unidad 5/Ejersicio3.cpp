/*
    3- Hacer una función llamada EsPrimo que determine si un número es primo o no.
    La función debe recibir el número y devolver true si es primo o false si no lo es.
    La función no debe mostrar nada por pantalla.
    Hacer un programa para ingresar un número y, utilizando EsPrimo,
    emita luego un cartel indicando si el número ingresado es primo o no es primo.

*/

#include <iostream>

using namespace std;

bool esPrimo(int numero)
{
    if (numero <= 1)
    {

        return false;
    }

    for (int i = 2; i <= numero / 2; i++)
    {
        if (numero % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int numero;

    cout << " Ingresa un numero ", cin >> numero;

    if (esPrimo(numero))
    {
        cout << " El numero ingresado " << numero << " es primo " << endl;
    } else {
        cout << " El numero ingresado " << numero << " no es primo " << endl;
    }

    return 0;
}