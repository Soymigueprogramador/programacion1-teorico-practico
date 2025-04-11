/*
    5- 
    Un negocio de perfumería efectúa descuentos según el importe de la venta.
    Si el importe es menor a $100 aplicar un descuento del 5%
    Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
    Si el importe es mayor a $500 aplicar un descuento del 15%

    Hacer un programa donde se ingresa el importe original sin descuento y se informe por pantalla el importe con el descuento ya aplicado.
    Importante: Verifique que el programa emita UN SOLO CARTEL.
*/

#include <iostream>

using namespace std;

int main() {
    float precio, precioFinal;

    cout << "¿Cuál es el importe a pagar? ";
    cin >> precio;

    if (precio < 100) {
        precioFinal = precio * 0.95; 
    } else if (precio <= 500) {
        precioFinal = precio * 0.90; 
    } else {
        precioFinal = precio * 0.85; 
    }

    cout << "El precio con descuento es de $ " << precioFinal << endl;
    return 0;
}