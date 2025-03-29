/*
    Enunciado;
    4- Hacer un programa para ingresar por teclado la cantidad de asientos totales en un avión y la cantidad de pasajes ocupados y luego 
    calcular e informar el porcentaje de ocupación y el porcentaje de no ocupación del mismo.
    Ejemplo:
    Si el avión tiene 200 asientos totales y se vendieron 80 pasajes, el porcentaje de ocupación que se 
    informará será de un 40% y el porcentaje de no ocupación será de un 60%.
    
    **Simplificación del problema:** 
    Tenemos que calcular cuantos asientos tiene un avion, cuantos asientos se vendiendon, que espacio ocupado tenemos 
    y que espacio libre nos queda. 
    
    **Análisis:**  
    - **Datos de entrada:**
        Variables:
            cantidadAsientosTotales;
            pasajesVendidos;
            asientosOcupados;
            asientosLibres;
    
    - **Datos de salida:** 
        Mostramos por pantalla la cantidad se asientos totales, asientos vendidos, espacio ocupado y espacio libre. 
    
    **Operación:**  
        Tenemos que tomar la cantidad de asientos totales, restarles la cantidad de asientos vendidos.
        Tenemos que multiplicar la cantidad de asientos totales por la cantidad de asientos vendisos y dividirlos por 100. 

    **Estrategia:** 

        1- Preguntamos cuantos asientos tiene el avion.
        2- Preguntamos cuantos pasajes se vendieron.
        3- Mutiplicamos la cantidad de asientos totales por la cantidad de asientos vendidos y lo dividimos por 100.
        4- 
    
    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  
    
    **Codificación:**  
*/

#include <iostream>

using namespace std;

int main() {
    // Definición de las variables.
    int cantidadAsientosTotales, pasajesVendidos, asientosLibres;
    float porcentajeOcupacion, porcentajeNoOcupacion;

    // Entrada de datos.
    cout << "¿Cuántos asientos tiene el avión? ";
    cin >> cantidadAsientosTotales;
    
    cout << "¿Cuántos pasajes se vendieron? ";
    cin >> pasajesVendidos;

    cantidadAsientosTotales = max(1, cantidadAsientosTotales); 
    pasajesVendidos = max(0, min(pasajesVendidos, cantidadAsientosTotales)); 
    
    asientosLibres = cantidadAsientosTotales - pasajesVendidos;
    porcentajeOcupacion = (static_cast<float>(pasajesVendidos) / cantidadAsientosTotales) * 100;
    porcentajeNoOcupacion = 100 - porcentajeOcupacion;

    // Salida de datos.
    cout << "Asientos totales: " << cantidadAsientosTotales << endl;
    cout << "Pasajes vendidos: " << pasajesVendidos << endl;
    cout << "Asientos libres: " << asientosLibres << endl;
    cout << "Porcentaje de ocupación: " << porcentajeOcupacion << "%" << endl;
    cout << "Porcentaje de no ocupación: " << porcentajeNoOcupacion << "%" << endl;

    return 0;
}