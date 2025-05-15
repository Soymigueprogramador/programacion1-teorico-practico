/*
    Enunciado:
    17- Una empresa registró las ventas que efectuó durante un día y para cada venta registró los siguientes datos:

    Número de Artículo Vendido (1 a 30)
    Cantidad de Unidades Vendidas
    Importe de la Venta

    El lote finaliza cuando se ingresa un registro con Número de Artículo igual a 0. En el lote anterior no aparecen registros
    de los artículos que por alguna razón no se hayan vendido durante el día. Los registros están agrupados por número de artículo.
    Se pide determinar e informar:
    La recaudación total para cada uno de los artículos vendidos. Se informa 1 resultado para cada uno de los grupos.
    El número de artículo con mayor cantidad TOTAL de unidades vendidas.


    **Simplificación del problema:**
        Variables:
            NumeroArticuloVendido,
            cantidadUnidadesVendidas,
            importa

    **Análisis:**
    - **Datos de entrada:**
    Mostramos un listado con los lotes agrupados

    - **Datos de salida:**
    procesamos con ciclos while en ciclos combinados

    **Operación:**
    1- Pedimos que se ingrese un registro que este agrupado
    2- Procesamos con ciclos while
    3- Mostramos los datos por pantalla

    **Estrategia:**

    **Diagrama del código:**
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.

    **Codificación:**
*/

#include <iostream>
using namespace std;

int main()
{
    int numeroArticulo, cantidad;
    float importe;

    int articuloMasVendido = 0;
    int masUnidadesVendidas = 0;

    cout << "Ingresa el numero de articulo (1 a 30, 0 para finalizar): ";
    cin >> numeroArticulo;

    while (numeroArticulo != 0)
    {
        int articuloActual = numeroArticulo;
        int totalUnidades = 0;
        float totalImporte = 0;

        // Corte de control para agrupar por artículo
        while (numeroArticulo == articuloActual && numeroArticulo != 0)
        {
            cout << "Ingresa la cantidad de unidades vendidas: ";
            cin >> cantidad;
            cout << "Ingresa el importe de la venta: ";
            cin >> importe;

            totalUnidades += cantidad;
            totalImporte += importe;

            cout << "Ingresa el numero de articulo (1 a 30, 0 para finalizar): ";
            cin >> numeroArticulo;
        }

        cout << "Con el articulo " << articuloActual << " recaudaste $" << totalImporte << endl;

        if (totalUnidades > masUnidadesVendidas)
        {
            masUnidadesVendidas = totalUnidades;
            articuloMasVendido = articuloActual;
        }
    }

    cout << "\nEl articulo con mayor cantidad total de unidades vendidas es: ";
    cout << articuloMasVendido << " con " << masUnidadesVendidas << " unidades vendidas.\n";

    return 0;
}
