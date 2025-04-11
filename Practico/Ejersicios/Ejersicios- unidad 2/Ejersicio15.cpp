/*
    Enunciado: 
    15- Un año es bisiesto si es múltiplo de 4, exceptuando a los años que son múltiplos de 100 
    pero que no sean múltiplos de 400. 
    Esto último significa que el año 1900 no es bisiesto, pero el año 2000 sí lo es. 
    Hacer un programa para  ingresar un año y listar por pantalla si es bisiesto o no lo es. 

    Ejemplo A. Si se ingresa el año 2020 se indicará como bisiesto. 
    Ejemplo B. Si se ingresa el año 2019 se indicará como no bisiesto. 
    Ejemplo C. Si se ingresa el año 1800 o 1900 se indicará como no bisiesto. 
    Ejemplo D. Si se ingresa el año 1600 o 2000 se indicará como bisiesto.
    
    **Simplificación del problema:**  
    Tengo que hacer un programa que muestra si el año es ono bisiesto
    
    **Análisis:**  
    - **Datos de entrada:**
        Variables
            anio
    
    - **Datos de salida:** 
    Un carte que diga si es o no bisiesto
    
    **Operación:**
    Tomo un año y comparo si es o no bisiesto
    
    **Estrategia:**  
    1- Pido que se ingrese un año
    2- Calculo que es multiplo de 4 o no lo es
    3- Muestro por pantalla si es o no bisiesto
    
    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  
    
    **Codificación:**  
*/
#include <iostream>

using namespace std;

int main() {
    int anio; 

    cout << " Ingresa un año ";
    cin >> anio; 

    if ( (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0) )
    {
        cout << " Este año " << anio << " es bisiesto " << endl;
    }  else {
        cout << " Este año " << anio << " no es bisiesto " << endl;
    }
    
    return 0;
}