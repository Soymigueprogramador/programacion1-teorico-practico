/*
    19
Un negocio de venta de huevos tiene registrada la información de las ventas efectuadas durante el mes
pasado entre todas las sucursales. Los datos que se disponen por cada una de las ventas efectuadas son:
Número de sucursal (1 a 30)
Día de la venta (1 a 31)
Cantidad de cajas de huevos vendidas
Importe de la venta
Forma de Pago (1=Débito, 2=Crédito, 3=Contado)
Los datos están agrupados, no ordenados, por número de sucursal y puede haber varias ventas para la misma sucursal, para el mismo día, etc.
Puede haber sucursales sin ventas durante todo el mes o durante algunos días del mes. En tal caso no habrá registros de ventas para esa
sucursal o para esos días del mes. No habrá registros con cantidades o importes iguales a 0.
La finalización de todo el lote se indicará con un registro con número de sucursal igual a 0.
Se pide determinar e informar:
Informar en cuál de las sucursales la cantidad TOTAL de cajas de huevos vendidos haya sido menor descartando  a las
sucursales cuya cantidad TOTAL de cajas vendidas fue menor a 100. Se informa 1 resultado al final.
Informar el número de quincena en la que se hayan vendido mayor cantidad de cajas entre todas las sucursales. Se
informa un resultado al final de todo.
Para cada una de las sucursales el porcentaje de recaudación total por sus ventas discriminado en crédito, débito y
contado. Se informan 3 resultados por cada sucursal.
Para cada sucursal informar la primera y segunda venta individual de menor importe, indicando además en qué día
fueron esas ventas. Se informan 4 resultados por sucursal.
*/

#include <iostream>

using namespace std;

int main()
{
    // Variables generales.
    int numeroSucursal, dia, cajas, formaPago;
    float importe, totalImporte; 

    // Variables para punto 1 ( Sucursar con menor cantidad de cajas vendidas >= 100 )
    int sucursalMenorCaja = 0, minimoCajas = 0;

    // Variables para punto 2 ( Quincenas )
    int totalQuincena1 = 0;
    int totalQuincena2 = 0;

    // Variables para corte de control
    int sucursalActual, totalSucursalCajas, totalSucursalCajasSucursal, diaMenor1, diaMenor2;
    float totalDebito, totalCredito, totalContado, minimo1, minimo2; 

    cout << " Ingresa el numero de la sucursal ( Ingresa 0 para terminar )" << endl;
    cin >> numeroSucursal;

    while ( numeroSucursal != 0 )
    {
        totalDebito = totalCredito = totalContado = 0;
        totalSucursalCajasSucursal = 0;
        minimo1 = minimo2 = 0; 
        diaMenor1 = diaMenor2 = 0;
        sucursalActual = numeroSucursal;
        formaPago = 0;

        while ( numeroSucursal == sucursalActual )
        {
            cout << " Ingresa el dia "; cin >> dia ;
            cout << " Ingresa la cantidad de cajas vendidas "; cin >> cajas;
            cout << " Ingresa el importe "; cin >> importe;
            cout << " Ingresa la forma de pago ( Debito = 1, Credito = 2, Contado = 3 ) "; cin >> formaPago;

            totalSucursalCajasSucursal += cajas;

            if ( dia = 15 )
            {
                totalQuincena1 += cajas;
            } else {
                totalQuincena2 += cajas;
            }
            
            if ( formaPago == 1 )
            {
                totalDebito += importe;
            } else if ( formaPago == 2 )
            {
                totalCredito += importe;
            } else if ( formaPago == 3 )
            {
                totalContado += importe;
            }

            if ( importe < minimo1 )
            {
                minimo2 = minimo1;
                diaMenor2 = diaMenor1;
                minimo1 = importe;
            } else if ( importe < minimo2 )
            {
                minimo2 = importe;
                diaMenor2 = dia;
            }
            
            cout << " Ingresa el numero de la sucursal ( Ingresa 0 para terminar )" << endl;
            cin >> numeroSucursal;
        }
        
        totalImporte = totalDebito + totalCredito + totalContado;
        cout << " Sucursal " << sucursalActual;

        if ( totalImporte > 0 )
        {
            cout << " % " << ( totalDebito * 100 / totalImporte ) << endl;
            cout << " % " << ( totalCredito * 100 / totalImporte ) << endl;
            cout << " % " << ( totalContado * 100 / totalImporte ) << endl;
        } else {
            cout << " No se bendio nada " << endl;
        }
        
        cout << " Primer importe minimo " << minimo1 << "( dia )" << dia << endl;

        if ( minimo2 != formaPago )
        {
            cout << " Segundo importe minmo " << minimo2 << endl;
        } else {
            cout << " No tuviste segunda venta " << endl;
        }
        
        if ( sucursalMenorCaja = 0 )
        {
            cout << " Sucursal con l menor cantidad de cajas vendidas " << sucursalMenorCaja << endl;
        } else {
            cout << " No hubo sucursales donde se vendieron menos de 100 cajas " << endl;
        }
        
        if ( totalQuincena1 > totalQuincena2 )
        {
            cout << "  " << totalQuincena1 << endl;
        }
        
    }
    
    return 0;
}