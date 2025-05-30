/*
    23- Una empresa posee un grupo de 15 vendedores para atender a sus clientes.
    Por cada venta realizada se genera un registro con la siguiente información:

    Número de vendedor (1 a 15)
    Importe de la venta (en $)
    Un vendedor puede realizar más de una venta. El último registro se indica con número de vendedor igual a 0.
    Se pide determinar e informar:

    a) El número de vendedor que más vendió en total (en $).
    b) Cada uno de los números de vendedores que no hayan realizado ventas.
    c) El total recaudado por la empresa por todas las ventas efectuadas por sus vendedores
*/

#include <iostream>
using namespace std;

int main()
{
    const int vendedores = 15;
    float ventas[vendedores] = {}; 
    int numeroVendedor;
    float importe;

    // Ingreso de datos
    cout << "Ingresa el numero del vendedor (Del 1 al 15) o 0 para salir del programa: ";
    cin >> numeroVendedor;

    while (numeroVendedor != 0)
    {
        if (numeroVendedor >= 1 && numeroVendedor <= vendedores)
        {
            cout << "Ingresa el importe de la venta realizada por el vendedor: ";
            cin >> importe;
            ventas[numeroVendedor - 1] += importe;
        }
        else
        {
            cout << "Numero de vendedor invalido.\n";
        }

        cout << "\nIngresa el numero del vendedor (Del 1 al 15) o 0 para salir del programa: ";
        cin >> numeroVendedor;
    }

    // A) Determinar el vendedor que más vendió
    int mejorVendedor = 0;
    float maxVentas = ventas[0];

    for (int i = 1; i < vendedores; i++)
    {
        if (ventas[i] > maxVentas)
        {
            maxVentas = ventas[i];
            mejorVendedor = i;
        }
    }

    // B) Mostrar vendedores sin ventas
    cout << "\n--- Resultados ---\n";
    cout << "A) El vendedor que mas vendio fue el N° " << (mejorVendedor + 1)
        << " con un total de $" << ventas[mejorVendedor] << endl;

    cout << "B) Vendedores sin ventas: ";
    bool haySinVentas = false;
    for (int i = 0; i < vendedores; i++)
    {
        if (ventas[i] == 0)
        {
            cout << (i + 1) << " ";
            haySinVentas = true;
        }
    }
    if (!haySinVentas)
    {
        cout << "Todos realizaron al menos una venta.";
    }
    cout << endl;

    // C) Total recaudado
    float total = 0;
    for (int i = 0; i < vendedores; i++)
    {
        total += ventas[i];
    }

    cout << "C) La empresa recaudo un total de $" << total << endl;
    return 0;
}