/*
    Enunciado
    2- Hacer un programa que solicite al usuario ingresar dos números por teclado y los almacene en dos variables distintas.  
    Luego, los valores de estas variables deben intercambiarse y mostrarse por pantalla.  

    Ejemplo:  
    Si el usuario ingresa 3 y 8 como valores para las variables A y B respectivamente (A = 3, B = 8),  
    después del intercambio deberán quedar como A = 8 y B = 3.  

    **Simplificación del problema:**  
    - Declaramos dos variables (A y B) con valores iniciales, por ejemplo, A = 3 y B = 8.  
    - Intercambiamos los valores entre las variables.  
    - Mostramos el resultado por pantalla.  

    **Análisis:**  
    - **Datos de entrada:**  
      - Variables:  
        - a = 3  
        - b = 8  
    - **Datos de salida:**  
      - Variables después del intercambio:  
        - a = 8  
        - b = 3  

    **Operación:**  
    1. Solicitar al usuario que ingrese dos números.  
    2. Almacenar los valores en variables.  
    3. Intercambiar los valores de las variables.  
    4. Mostrar el resultado por pantalla.  

    **Estrategia:**  
    1. Declarar las variables con los valores ingresados por el usuario.  
    2. Realizar el intercambio de valores.  
    3. Imprimir el resultado.  

    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  

    **Codificación:**  
*/

#include <iostream>

using namespace std;

int main() {
    // Denificion de las variables. 
    int a, b, entero; 

    // Ingreso de datos. 
    cout << "Ingresa un valor para la variable A";
    cin >> a;
    cout << "Ingresa otro valor para la variable B";
    cin >> b;

    // Mostrar valores de las variables antes del cambio. 
    cout << "Antes de que las variables cambien A = " << a << " B = " << b << endl; 

    // Cambiando el valor de las variables. 
    entero = a;
    a = b; 
    b = entero; 

    // Mostrando las variables despues de cambiar. 
    cout << "Despues de que las variables cambien A = " << a << " B = " << b << endl; 
    return 0;
}