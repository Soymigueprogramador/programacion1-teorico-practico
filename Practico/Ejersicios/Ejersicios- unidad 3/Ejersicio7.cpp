/*
    Enunciado:
    7- Hacer un programa para ingresar una lista de 10 números, luego informar cuántos son positivos, 
    cuántos son negativos, y cuántos iguales a cero.
    Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 11.
    
    **Simplificación del problema:**  
    Hago un programa para mostrar una lista de numeros separados en positivos, negativos y ceros
    
    **Análisis:**  
    - **Datos de entrada:**
    n, positivos, negativos, ceros;
    
    - **Datos de salida:**  
    Se mostrara la cantidad de numeros positivos, negativos y ceros
    
    **Operación:**  
    Iteramos con un for, usamos un condicional para comprobar si los numeros son negativos, positivos o ceros
    
    **Estrategia:**  
    1- Pedimos que se ingresen 5 numeros
    2- Iteramos usos numeros
    3- Comprobamos si son positivos, negativos o ceros
    4- Mostramos todo por pantalla
    
    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  
    
    **Codificación:**  
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    int positivos = 0, negativos = 0, ceros = 0;

    for (int i = 1; i <= 10; i++) {
        cout << "Ingrese el numero #" << i << ":";
        cin >> n;

        if (n > 0) {
            positivos++;
        } else if (n < 0) {
            negativos++;
        } else {
            ceros++;
        }
    }

    cout << "Cantidad de numeros positivos: " << positivos << endl;
    cout << "Cantidad de numeros negativos: " << negativos << endl;
    cout << "Cantidad de ceros: " << ceros << endl;

    return 0;
}