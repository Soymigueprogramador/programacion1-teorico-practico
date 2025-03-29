/*
    Enunciado:
    3- Una concesionaria de autos paga a los vendedores un sueldo fijo de $5000 más $700 de premio por cada auto vendido. 
    Hacer un programa que permita ingresar por teclado la cantidad de autos vendidos por un vendedor y luego informar por pantalla el sueldo total a pagar.
    Ejemplo: 
    Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de $7800.

    **Simplificación del problema:** 
    Tenemos que calcular la cantidad de autos vendidos por un vendedor y sumarle la comision a su sueldo.
    
    **Análisis:**  
    - **Datos de entrada:**
        Variables:
            sueldoMensual.
            comisionPorVenta.

    - **Datos de salida:**  
        sueldoTotal.

    **Operación:**  
        Tenmos que multiplicar la cantidad de autos vendidos para sumarle al sueldo mensual.

    **Estrategia:**  
        1- Pregunto cuantos autos vendiste en el mes.
        2- Multiplico la comision por ventas por la cantidad de autos vendidos.
        3- El resultado del monto anterior se lo agrego al sueldo.
        4- Muestro los resultados por pantalla.

    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  
    
    **Codificación:**  
*/

#include <iostream>

using namespace std;

int main() {
    // Definición de las variables
    int sueldoMensual, comisionPorVentas, cantidadDeAutosVendidos; 

    // Entrada de datos
    cout << "¿Cuántos autos vendiste este mes? ";
    cin >> cantidadDeAutosVendidos; 
    cout << "¿Cuánto ganas por mes? ";
    cin >> sueldoMensual;
    cout << "¿Cuánto ganas de comisión por cada auto vendido? ";
    cin >> comisionPorVentas;

    // Cálculo del sueldo total
    int sueldoTotal = sueldoMensual + (cantidadDeAutosVendidos * comisionPorVentas);

    // Mostrar el resultado
    cout << "Si tu sueldo es de $" << sueldoMensual 
         << " y tu comisión por venta es de $" << comisionPorVentas 
         << " entonces tu sueldo mensual total es de $" << sueldoTotal << endl;

    return 0;
}