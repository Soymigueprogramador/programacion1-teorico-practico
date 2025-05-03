/*
    Enunciado:
    6- Hacer un programa para ingresar un N valor que indica la cantidad de números que 
    componen una lista y luego solicitar se ingresen esos N números. 
    Se pide informar cuantos son positivos
    Ejemplo A: 
    Se ingresa como N el valor 5, y luego se ingresa: 10, -3, 2, 5, 4. Se listará:  Cantidad de Positivos: 4
    Ejemplo B: 
    Se ingresa como N el valor 6, y luego se ingresa: -10, -3, -2, 0, -5, -4. Se listará: Cantidad de Positivos: 0
    
    **Simplificación del problema:** 
    Tengo que crear un programa donde ingreso un N valor y me tiene que listar todos los numers positivos. 
    
    **Análisis:**  
    - **Datos de entrada:**
        Variables:
            n, numero, positivo;
    
    - **Datos de salida:**  
    Se mostrara la lista con los numeros positivos
    
    **Operación:**  
    Se ingresa un numero y se lo itera para sacas los numeros positivos.
    
    **Estrategia:** 
    1- Pedimos un numero
    2- Lo interamos con un ciclo for.
    3- Mostramos la cantidad de numeros positivos
    
    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  
    
    **Codificación:**  
*/
#include <iostream>

using namespace std;

int main() {
    int n, numero, positivo = 0;

    cout << " Ingresa un numero ";    
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << " Ingresa un numero ";  
        cin >> numero;
        
        if ( numero < 0 )
        {
            positivo ++;
        }
    }
    
    cout << " La cantidad de numeros positivos es: " << positivo << endl;
    return 0;
}