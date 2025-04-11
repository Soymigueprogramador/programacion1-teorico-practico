/*
    Enunciado: 
    1- Hacer un programa para mostrar por pantalla los números del 1 al 10.
    Importante: El programa no tiene ningún ingreso de datos.
    
    **Simplificación del problema:**  
    
    **Análisis:**  
    - **Datos de entrada:**
        No se ingresan datos
    
    - **Datos de salida:**
    Un listado del 1 al 10
    
    **Operación:** 
    Creo un ciclo for que inicie en 1 y termine en 10
    
    **Estrategia:**  
    1- Iniciamos con la variable i en 1
    2- En la condicion indicamos que llegue a 10 
    3- Mostramos el listado por pantalla 
    
    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  
    
    **Codificación:**  
*/
#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl; 
    }
    
    return 0;
}