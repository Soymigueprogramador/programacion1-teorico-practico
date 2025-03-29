/*
    Enunciado: 
    6- Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para cada una de las cuatro semanas del mes. 
    El programa debe listar la recaudación promedio por semana y el porcentaje de recaudación por semana.
    Ejemplo: 
    Si se ingresa $1600, $1200, $4800 y $400 se listará como recaudación promedio $2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.

    
    **Simplificación del problema:** 
    Debo crear un programa para calcular y listar la recaudacion de un comercio. 
    
    **Análisis:**  
    - **Datos de entrada:**
        Variables: 
            recaudacionSemana1
            recaudacionSemana2
            recaudacionSemana3
            recaudacionSemana4
            porcentajeRecaudacionSemanal
            porcentajeRecaudacion
    
    - **Datos de salida:** 
        Recaudacion por semana
        porcentaje de recaudacion por semana
        porcentaje de recaudacion
    
    **Operación:**  
        Sacamos el porcentaje de la recaudacion por semana y el total.
    
    **Estrategia:**  
        1- Preguntamos cuanto se recaudo por semana.
        2- Calculamos el porcentaje de la recaudacion. 
        3- Calculamos el total de la recaudacion.
    
    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  
    
    **Codificación:**  
*/

#include <iostream>

using namespace std;

int main() {
    // Declaramos las variables.
    int semana1, semana2, semana3, semana4, total;
    float porcentajeRecaudacionSemana1, porcentajeRecaudacionSemana2, porcentajeRecaudacionSemana3, porcentajeRecaudacionSemana4, promedioRecaudacion;

    // Entrada de datos.
    cout << "\u00bfCuánto se recaudó en la primera semana? ";
    cin >> semana1;
    cout << "\u00bfCuánto se recaudó en la segunda semana? ";
    cin >> semana2;
    cout << "\u00bfCuánto se recaudó en la tercera semana? ";
    cin >> semana3;
    cout << "\u00bfCuánto se recaudó en la cuarta semana? ";
    cin >> semana4;

    // Cálculo de la recaudación total y promedio.
    total = semana1 + semana2 + semana3 + semana4;
    promedioRecaudacion = static_cast<float>(total) / 4;

    // Cálculo de los porcentajes de cada semana.
    porcentajeRecaudacionSemana1 = (total != 0) ? (static_cast<float>(semana1) / total) * 100 : 0;
    porcentajeRecaudacionSemana2 = (total != 0) ? (static_cast<float>(semana2) / total) * 100 : 0;
    porcentajeRecaudacionSemana3 = (total != 0) ? (static_cast<float>(semana3) / total) * 100 : 0;
    porcentajeRecaudacionSemana4 = (total != 0) ? (static_cast<float>(semana4) / total) * 100 : 0;

    // Salida de datos.
    cout << "\nLa recaudación total del mes es de: $" << total << endl;
    cout << "El promedio de recaudación semanal es de: $" << promedioRecaudacion << endl;
    cout << "\nPorcentaje de recaudación por semana:" << endl;
    cout << "Semana 1: " << porcentajeRecaudacionSemana1 << "%" << endl;
    cout << "Semana 2: " << porcentajeRecaudacionSemana2 << "%" << endl;
    cout << "Semana 3: " << porcentajeRecaudacionSemana3 << "%" << endl;
    cout << "Semana 4: " << porcentajeRecaudacionSemana4 << "%" << endl;
    
    return 0;
}