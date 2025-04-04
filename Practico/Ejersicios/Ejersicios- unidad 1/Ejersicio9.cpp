/*
    Enunciado: 
    9- Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cuantas horas y minutos equivalen.
    Ejemplo A:
    si se ingresan 380 minutos el programa mostrará por pantalla que equivalen a 6 horas y 20 minutos.
    Ejemplo B:
    si se ingresan 720 minutos el programa mostrará por pantalla que equivalen a 12 horas y 0 minutos.
    Ejemplo C:
    si se ingresan 50 minutos el programa mostrará por pantalla que equivalen a 0 horas y 50 minutos

    
    **Simplificación del problema:**
    Tengo que crear un programa al cual le ingreso una antidad de minutos y el evalua a cuantas horas y minutos equivale.   
    
    **Análisis:**  
    - **Datos de entrada:**
        Variables:
        cantidadMinutos
        horas
        minutos
    
    - **Datos de salida:**
    La cantidad de horas y minutos que equivae. 
    
    **Operación:**
    Tomo la cantidad de minutos y los divido entre 60. 
    
    **Estrategia:**
    1- Pido la cantidad de minutos
    2- Calculo la cantidad de minutos ingresados y los divido por 60  
    
    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  
    
    **Codificación:**  
*/
#include <iostream>

using namespace std;

int main() {
    int cantidadMinutos, horas, minutos;

    cout << " Ingresa la cantidad de minutos ";
    cin >> cantidadMinutos; 

    horas = cantidadMinutos / 60; 
    minutos = cantidadMinutos % 60;

    cout << "La cantidad de " << cantidadMinutos << " minutos equivale a " << horas << " horas y " << minutos << " minutos." << endl;
    return 0;
}