/*
    22- Una empresa comercializa 20 tipos de artículos y por cada venta realizada genera un registro con los siguientes datos:
    Número de Artículo (1 a 20)
    Cantidad Vendida
    Puede haber varios registros para el mismo artículo y el último registro se indica cuando se ingresa un número de artículo
    igual a 0. Se pide determinar e informar:

    a) El número de artículo que más se vendió en total.
    b) Los números de artículos que no registraron ventas.
    c) Cuántas unidades se vendieron del número de artículo 10.

*/

#include <iostream>
using namespace std;

int main()
{
    const int TOTAL_ARTICULOS = 20;
    int ventas[TOTAL_ARTICULOS] = {0};
    int numeroArticulo, cantidad;

    // Entrada de ventas
    cout << "Ingrese numero de articulo (1 a 20, 0 para finalizar): ";
    cin >> numeroArticulo;

    while (numeroArticulo != 0)
    {
        if (numeroArticulo >= 1 && numeroArticulo <= TOTAL_ARTICULOS)
        {
            cout << "Ingrese cantidad vendida: ";
            cin >> cantidad;
            ventas[numeroArticulo - 1] += cantidad;
        }
        else
        {
            cout << "Numero de articulo invalido. Intente nuevamente." << endl;
        }

        cout << "\nIngrese numero de articulo (1 a 20, 0 para finalizar): ";
        cin >> numeroArticulo;
    }

    // Punto A: Artículo más vendido
    int articuloMasVendido = 1;
    int maxVentas = ventas[0];

    for (int i = 1; i < TOTAL_ARTICULOS; i++)
    {
        if (ventas[i] > maxVentas)
        {
            maxVentas = ventas[i];
            articuloMasVendido = i + 1;
        }
    }

    cout << "\n--- Resultados ---\n";
    cout << "A) El articulo mas vendido fue el numero: " << articuloMasVendido
         << " con " << maxVentas << " unidades." << endl;

    // Punto B: Artículos que no registraron ventas
    cout << "B) Articulos que no registraron ventas: ";
    bool todosVendieron = true;
    for (int i = 0; i < TOTAL_ARTICULOS; i++)
    {
        if (ventas[i] == 0)
        {
            cout << (i + 1) << " ";
            todosVendieron = false;
        }
    }
    if (todosVendieron)
    {
        cout << "Todos los articulos registraron ventas.";
    }
    cout << endl;

    // Punto C: Ventas del artículo 10
    cout << "C  ) Unidades vendidas del articulo 10: " << ventas[9] << endl;

    return 0;
}