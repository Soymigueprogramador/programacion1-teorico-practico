/*
    Enunciado: 
    4- Hacer un programa para que el usuario ingrese un número positivo y luego se muestren por 
    pantalla los números entre el 1 y el número ingresado por el usuario. 
    Ejemplo: Si el usuario ingresa 15, se mostrarán los números entre el 1 y el 15.
    
    **Simplificación del problema:**  
    Tengo que crear un programa donde el usuario ingrese un numero positivo y se muestren los numeros desde el 1 
    hasta llegar al numero positivo ingresado.
    
    **Análisis:**  
    - **Datos de entrada:**
        Variables: 
            NumeroPositivo
    
    - **Datos de salida:** 
    Listado de numeros desde el 1 al numero ingresado
    
    **Operación:** 
    Nos ingresa un numero y iteramos desde el 1 hasta llegar al numero positivo. 
    
    **Estrategia:**  
    1- Pedimos un numero positivo
    2- Creamos un condicional para evaluar si el numero ingresado es positivo. 
    3- Iteramos con un fro desde el 1 hasta el numero positivo. 
    4- Mostramos la lista por pantalla.
    
    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  
    
    **Codificación:**  
*/
#include <iostream>

using namespace std;

int main() {
    int numeroPositivo; 

    cout << " Ingresa un numero positivo ";
    cin >> numeroPositivo;

    if ( numeroPositivo > 0 )
    {
        for (int i = 1; i <= numeroPositivo; i++)
        {
            cout << i << endl;
        }
        
    } else {
        cout << " El numero ingresado no es positivo ";
    }
    
    return 0;
} 