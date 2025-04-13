/*
    Enunciado: 
    5- Hacer un programa para que el usuario ingrese dos números y luego el programa 
    muestre por pantalla los números entre el menor y el mayor de ambos. 
    Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y 
    el 15 y si el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.
    
    **Simplificación del problema:**  
    Crear un programa para mostrar el numero mayor y el numero menor.
    
    
    **Análisis:**  
    - **Datos de entrada:**
        Variables: 
            n1, n2
            nMayor, nMenor
    
    - **Datos de salida:**  
    Los numeros ordenados
    
    **Operación:**  
    Entran 2 numeros, comprobamos si el primero numero es mayor al seundo y los interamos con un for.
    
    **Estrategia:** 
    1- Pedimos 2 numeros
    2- Guardamos esos numeros en variables y proguntamos cual es el mayor de ellos
    3- Los interamos con un for
    4- Mostramos el resultado por pantalla
    
    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  
    
    **Codificación:**  
*/

#include <iostream>

using namespace std;

int main() {
    int n1, n2;
    int nMayor, nMenor;

    cout << "Ingresa un numero: ";
    cin >> n1;
    cout << "Ingresa otro numero: ";
    cin >> n2;

    if (n1 > n2) {
        nMayor = n1;
        nMenor = n2;
    } else {
        nMayor = n2;
        nMenor = n1;
    }

    for (int i = nMenor; i <= nMayor; i++) {
        cout << i << endl;
    }

    return 0;
}
