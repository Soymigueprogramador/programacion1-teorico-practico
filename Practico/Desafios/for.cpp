/*
    Enunciado:
    Desafío ( Ciclo for )
    Tu sobrina está aprendiendo las tablas de multiplicar y quisiera disponer de un programa para que pueda 
    corroborar que las cuentas realizadas en su cuaderno sean correctas. Ella sabe que estás estudiando 
    programación en la universidad y le parece que es algo que no debería llevarte más que unos pocos minutos.
    Puntualmente te pi dió que puedas ingresar un número entre 1 y 15 y dibuje por pantalla las tablas de 
    dicho número desde el 0 hasta el 10 inclusive.
    Por ejemplo:
Ingresa el número del cual quieres ver los cálculos: 6
    
    **Simplificación del problema:**  
    Tengo que crear un programa para verificar el que el calculo de las tablas este correcto
    
    **Análisis:**  
    - **Datos de entrada:**
        Variables:
            Tabla;
    
    - **Datos de salida:**  
    Mostramos todos los calculos de la tabla
    
    **Operación:** 
    Usamos un ciclo for para iterar y mostrar los resultados 
    
    **Estrategia:**  
    1 Pedimos que el usuario ingrese un numeto
    2 Iteramos con un ciclo for para sacar el calculo
    3 Mostramos el resultado de toda la tabla 
    
    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  
    
    **Codificación:**  
*/

#include <iostream>

using namespace std;

int main() {
    int tabla;

    cout << " ¿ Cual tabla estas haciendo ? ";
    cin >> tabla;

    for (int i = 1; i <= 10; i++)
    {
        cout << " El resultado es: " << tabla << " x " << i << " = " << tabla * i << endl;
    }
    
    return 0;
}