/*
    Enunciado: 
    2- Hacer un programa para mostrar por pantalla los números del 1 al 20 
    salteando de a 3 valores. Es decir: 1, 4, 7, 10, 13, 16, 19.
    Importante: El programa no tiene ningún ingreso de datos.
    
    **Simplificación del problema:**  
    Tengo que crear un programa para contar desde el 20 para atras hasta llegar al 1
    
    **Análisis:**  
    - **Datos de entrada:**
    No hay datos de entrada
    
    - **Datos de salida:**  
    Se muestran los numeros del 20 al 1
    
    **Operación:**  
    Creamos un for iniciando en 20 y que retroseda hasta el 1
    
    **Estrategia:**  
    1- Iniciamos con una variable de contro el 20
    2- Hacemos que la condicion sea menor o igual a 1
    3- Mostramos la lista por pantalla
    
    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  
    
    **Codificación:**  
*/
#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 20; i += 3)
    {
        cout << i << endl;
    }
    
    return 0;
}