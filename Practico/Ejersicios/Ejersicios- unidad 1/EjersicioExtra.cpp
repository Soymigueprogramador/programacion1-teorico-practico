/*
    Enunciado:| 
    Crear un programa que convierta el sueldo en pesos a dolar. 
    
    **Simplificación del problema:**
    Tengo que crear un programa que me permita convertir mi sueldo en pesos a dolares. 
    
    **Análisis:**  
    - **Datos de entrada:**
        Variables:
        suendoEnPesos
        suendoEnDolar
        valorDolar
    
    - **Datos de salida:**
    Mostramos el sueldo en dolares  
    
    **Operación:** 
    Tomo el sueldo en pesos y lo divido por el valor del dolar
    
    **Estrategia:**
    1- Pregunto de cuanto es el sueldo en pesos
    2- Divido el valor del sueldo segun el valor del dolar 
    3- Muestro el resultado por pantalla
    
    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  
    
    **Codificación:**  
*/

#include <iostream>

using namespace std;

int main() {
    int sueldoEnPesos, sueldoEnDolares, valorDolar; 

    cout << " ¿ Cual es tu sueldo en pesos ? ";
    cin >> sueldoEnPesos; 

    cout << " ¿ Cual es el valor del dolar ? ";
    cin >> valorDolar;

    sueldoEnDolares = sueldoEnPesos / valorDolar; 

    cout << " Tu sueldo en dolares es de USD " << sueldoEnDolares << endl; 
    return 0;
}