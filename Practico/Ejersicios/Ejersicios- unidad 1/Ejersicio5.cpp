/*
    Enunciado: 
    5- Un comercio vende tres marcas de alfajores distintas A, B y C. 
    Hacer un programa para ingresar por teclado la cantidad de alfajores vendidos de cada una de las tres marcas y luego se informe el 
    porcentaje de ventas para cada una de ellas.
    Ejemplo:  
    Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calculará e informará A: 50%, B: 12,50% y C: 37,50%.

    
    **Simplificación del problema:**  
    Tenemos que crear un programa para calcular la cantidad de alfajores vendidos segun la marca. 
    
    **Análisis:**  
    - **Datos de entrada:**
        Variables:
            cantidadAlfajoresVendidosA
            cantidadAlfajoresVendidosB
            cantidadAlfajoresVendidosC
            cantidadVentasTotales
    
    - **Datos de salida:** 
        cantidad total de alfajores vendidos
        porcentaje de alfajores vendidos segun la marca
    
    **Operación:**  
    
    **Estrategia:** 
        1- Preguntamos la cantidad total de alfajores vendidos
        2- Preguntamos la cantidad de alfajores vendidos segun la marca
        3- Mostramos la cantidad total de alfajores vendidos, la cantidad de alfajores vendidos segun la marca y el porcentaje de las ventas
    
    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  
    
    **Codificación:**  
*/

#include <iostream>

using namespace std;

int main() {
    // Definición de variables.
    int cantidadAlfajoresVendidosA, cantidadAlfajoresVendidosB, cantidadAlfajoresVendidosC, cantidadVentasTotales;
    float porcentajeA, porcentajeB, porcentajeC;

    // Entrada de datos.
    cout << "\u00bfCuántos alfajores de la marca A vendiste? ";
    cin >> cantidadAlfajoresVendidosA;
    cout << "\u00bfCuántos alfajores de la marca B vendiste? ";
    cin >> cantidadAlfajoresVendidosB;
    cout << "\u00bfCuántos alfajores de la marca C vendiste? ";
    cin >> cantidadAlfajoresVendidosC;

    // Cálculo de la cantidad total de alfajores vendidos.
    cantidadVentasTotales = cantidadAlfajoresVendidosA + cantidadAlfajoresVendidosB + cantidadAlfajoresVendidosC;

    // Cálculo de los porcentajes.
    porcentajeA = (cantidadVentasTotales != 0) ? (static_cast<float>(cantidadAlfajoresVendidosA) / cantidadVentasTotales) * 100 : 0;
    porcentajeB = (cantidadVentasTotales != 0) ? (static_cast<float>(cantidadAlfajoresVendidosB) / cantidadVentasTotales) * 100 : 0;
    porcentajeC = (cantidadVentasTotales != 0) ? (static_cast<float>(cantidadAlfajoresVendidosC) / cantidadVentasTotales) * 100 : 0;

    // Salida de datos.
    cout << "Cantidad total de alfajores vendidos: " << cantidadVentasTotales << endl;
    cout << "Porcentaje de ventas por marca:" << endl;
    cout << "Marca A: " << porcentajeA << "%" << endl;
    cout << "Marca B: " << porcentajeB << "%" << endl;
    cout << "Marca C: " << porcentajeC << "%" << endl;
    
    return 0;
}
