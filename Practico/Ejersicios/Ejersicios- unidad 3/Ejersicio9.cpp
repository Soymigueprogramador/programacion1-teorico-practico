/*
    Enunciado: 
    9- Hacer un programa para ingresar una lista de 10 números, luego informar el máximo.
    Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20. Se listará Máximo 35.
    Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20. Se listará Máximo 55.
    Ejemplo C: -15, -10, -20, -8, -25, -13, -55, -6, -55, -20. Se listará Máximo -6
    El tercer ejemplo demuestra que NO SIEMPRE en una lista de números el máximo es un positivo.
    Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 9 y TP2 EJ 10.
    
    **Simplificación del problema:** 
    Crear un programa que liste 10 numros y muestre el numero mas grande. 
    
    **Análisis:**  
    - **Datos de entrada:**
        Variables:
            n, nMaximo;
    
    - **Datos de salida:**  
    Mostramos el numero mas grande
    
    **Operación:**  
    Ingreso 10 numeros, los proceso con un for y muestro el numero mas grande.
    
    **Estrategia:** 
    1- Pedimos 10 numeros 
    2- Procesamos esa lista de numeros 
    3- Mostramos el numero mas grande
    
    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  
    
    **Codificación:**  
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    int nMaximo;

    cout << "Ingresa 10 numeros:" << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> n;
        
        if (i == 0 || n > nMaximo) {
            nMaximo = n;
        }
    }

    cout << "El numero maximo es: " << nMaximo << endl;

    return 0;
}
