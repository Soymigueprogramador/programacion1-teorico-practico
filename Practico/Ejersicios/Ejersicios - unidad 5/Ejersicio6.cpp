/*
    6- Hacer una función que reciba un número entero por valor llamado día y un string llamado 
    nombre por referencia y le asigne el nombre correspondiente según el número de día. Siendo 0 → Domingo y 6 → Sábado.
*/

#include <iostream>
#include <string>

using namespace std;

void asignarNombreDia( int dia, string &nombre ) {
    switch (dia) {
        case 0: nombre = "Domingo"; break;
        case 1: nombre = "Lunes"; break;
        case 2: nombre = "Martes"; break;
        case 3: nombre = "Miércoles"; break;
        case 4: nombre = "Jueves"; break;
        case 5: nombre = "Viernes"; break;
        case 6: nombre = "Sábado"; break;
        default: nombre = "Día inválido"; break;
    }
}

int main() {
    int dia;
    string nombre;

    cout << " Ingresa un numero de dia ( del 0 al 6 ) "; 
    cin >> dia;

    asignarNombreDia( dia, nombre );

    cout << " El día correspondiente es: " << nombre << endl;
    return 0;
}