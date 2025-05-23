/*
    10- Hacer una función que reciba un código de naipe (del 1 al 40) y determine el número y el palo de la
    baraja española de 40 cartas (sin los 8, 9 y comodines del mazo). La función debe recibir por referencia
    el número de naipe y el nombre del palo (para ser completados por la función) y por valor el código de naipe.

    Tener en cuenta que:
    Los códigos de naipes de espada van del 1 al 10, basto del 11 al 20, copa del 21 al 30 y oro del 31 al 40. Por
    ejemplo, naipe con ID #10 es el 12 de espadas.

*/

#include <iostream>

using namespace std;

void obtenerNaipesDelMazo(int codigo, int &numero, string &palo)
{
    int pos = (codigo - 1) % 10 + 1;

    if (pos <= 7)
    {
        numero = pos;
    }
    else
    {
        numero = pos + 2;
    }

    if (codigo >= 1 && codigo <= 10)
    {
        palo = " Espada ";
    }
    else if (codigo >= 11 && codigo <= 20)
    {
        palo = " Basto ";
    }
    else if (codigo >= 21 && codigo <= 30)
    {
        palo = " Copa ";
    }
    else if (codigo >= 31 && codigo <= 40)
    {
        palo = " Oro ";
    }
    else
    {
        palo = " Código inválido ";
    }
}

int main()
{
    int codigo, numero;
    string palo;

    cout << " Ingresa el código del naipe (1 al 40, sin los 8, 9 ni comodines): ";
    cin >> codigo;

    if (codigo < 1 || codigo > 40)
    {
        cout << " El código ingresado no es válido. " << endl;
        return 1;
    }

    obtenerNaipesDelMazo(codigo, numero, palo);

    cout << " El naipe es: " << numero << " de " << palo << endl;

    return 0;
}