/*
    18
Un supermercado tiene registrada la información de las ventas efectuadas durante el mes pasado entre
todas las sucursales y se solicita un programa para obtener determinadas estadísticas.
Los datos que se disponen por cada una de las ventas efectuadas son:
Número de sucursal (1 a 30)
Día de la venta (1 a 31)
Importe de la venta
Tipo de venta (1=Particular, 2=Obra Social)
Forma de Pago (1=Débito, 2=Crédito, 3=Contado)
Los datos están agrupados (no ordenados) por número de sucursal y puede haber varias ventas para la
misma sucursal, para el mismo día, etc. Puede haber sucursales sin ventas durante todo el mes o durante
algunos días del mes, no habrá registros con importes iguales a 0. Al final de todo el lote se
indicará con un registro con número de sucursal igual a 0.
Se pide determinar e informar:
Para cada una de las sucursales el porcentaje de recaudación total  por sus ventas en crédito, débito y contado.
Se informan 3 resultados por cada sucursal.
Indicar en cual sucursal se hizo el menor porcentaje de recaudación total por ventas de Tipo Obra Social. Se informa 1 resultado al final.
Para cada sucursal informar la primera y segunda venta individual de mayor importe. Se informan 2 resultados por sucursal.
La venta de menor importe de todas las ventas, indicando la sucursal y el día de la venta. Se informan 3 resultados al final.
*/

#include <iostream>

using namespace std;

int main() {
    int numeroSucursal = -1, dia, tipoVenta, formaPago;
    int sucursalActual;
    int sucursalMenorObraSocial = 0;
    int sucursalMenorImporte = 0;
    int diaMenorImporte = 0;

    float importe = 0;
    float menorPorcentajeObraSocial = 101;
    float menorImporteGlobal = 9999999;

    while (true) {
        cout << "\nIngrese número de sucursal (1-30, 0 para finalizar): ";
        cin >> numeroSucursal;

        if (numeroSucursal == 0) break;

        sucursalActual = numeroSucursal;

        // Reiniciamos acumuladores por sucursal
        float totalCredito = 0, totalDebito = 0, totalContado = 0, totalObraSocial = 0;
        float maximo1 = 0, maximo2 = 0, totalSucursal = 0;

        // Procesar todas las ventas de esta sucursal
        while (numeroSucursal == sucursalActual) {
            cout << "  Día de la venta (1-31): ";
            cin >> dia;

            cout << "  Importe de la venta: ";
            cin >> importe;

            cout << "  Tipo de venta (1=Particular, 2=Obra Social): ";
            cin >> tipoVenta;

            cout << "  Forma de pago (1=Débito, 2=Crédito, 3=Contado): ";
            cin >> formaPago;

            totalSucursal += importe;

            if (formaPago == 1) totalDebito += importe;
            else if (formaPago == 2) totalCredito += importe;
            else if (formaPago == 3) totalContado += importe;

            if (tipoVenta == 2) totalObraSocial += importe;

            // Dos máximos
            if (importe > maximo1) {
                maximo2 = maximo1;
                maximo1 = importe;
            } else if (importe > maximo2) {
                maximo2 = importe;
            }

            // Menor importe global
            if (importe < menorImporteGlobal) {
                menorImporteGlobal = importe;
                sucursalMenorImporte = sucursalActual;
                diaMenorImporte = dia;
            }

            // Leer próxima sucursal
            cout << "\nIngrese número de sucursal (1-30, 0 para finalizar): ";
            cin >> numeroSucursal;
            if (numeroSucursal == 0) break;
        }

        // Calcular porcentajes si hubo ventas
        if (totalSucursal > 0) {
            float porDebito = (totalDebito * 100) / totalSucursal;
            float porCredito = (totalCredito * 100) / totalSucursal;
            float porContado = (totalContado * 100) / totalSucursal;
            float porObraSocial = (totalObraSocial * 100) / totalSucursal;

            cout << "\n--- Estadísticas de Sucursal " << sucursalActual << " ---\n";
            cout << "Porcentaje Débito: " << porDebito << "%\n";
            cout << "Porcentaje Crédito: " << porCredito << "%\n";
            cout << "Porcentaje Contado: " << porContado << "%\n";

            cout << "1ª venta de mayor importe: $" << maximo1 << endl;
            cout << "2ª venta de mayor importe: $" << maximo2 << endl;

            if (porObraSocial < menorPorcentajeObraSocial) {
                menorPorcentajeObraSocial = porObraSocial;
                sucursalMenorObraSocial = sucursalActual;
            }
        } else {
            cout << "No se registraron ventas para la sucursal " << sucursalActual << ".\n";
        }
    }

    // Resultados globales
    cout << "\n===== Resultados Finales =====\n";
    cout << "Venta de menor importe: $" << menorImporteGlobal
         << " | Sucursal: " << sucursalMenorImporte
         << " | Día: " << diaMenorImporte << endl;

    cout << "Sucursal con menor porcentaje de ventas Obra Social: " << sucursalMenorObraSocial
         << " (" << menorPorcentajeObraSocial << "%)\n";

    return 0;
}