/*
    Enunciado:
    3- Leer 10 números y guardarlos en un vector. 
    Determinar e informar cuál es el valor máximo y su posición dentro del vector.
    
    **Simplificación del problema:** 
    Tengo que:
    1- Leer los numeros de un venctor.
    2- Crear un programa para determinar cual es el numero mas grande y cual es su posicion en el vector.
    
    **Análisis:**  
    - **Datos de entrada:**
        Variables y vector:
            -posicion, valorMaximo
            numero[10]
    
    - **Datos de salida:**  
    Voy a mostrar dos resultados:
    1- El valor maximo del vector
    2- La posicion del valor maximo dentro del vector.
    
    **Operación:**  
    Usamos un ciclo for para leer el vector y cuardar los valores alli. 
    Usamos un condicional para comprobar el numero maximo y la posicion.
    
    **Estrategia:**  
    1- Pedims 10 numeros y los guardamos dentro de un vector
    2- Usamos ciclo for para ller el vector
    3- Usamos un condicional para comprobar el numero maximo y la posicion del mismo
    4- Mostramos los resultados por pantalla
    
    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  
    
    **Codificación:**  
*/

#include <iostream>

using namespace std;

int main() {
    int maximo, posicion;
    int numero[10];

    for (int i = 0; i < 10; i++)
    {
        cout << " Ingresa un numero " << endl;
        cin >> numero[i];
    }

    maximo = numero[0];
    posicion = 0;

    for (int i = 1; i < 10; i++)
    {
        if ( numero[i] > maximo )
        {
            maximo = numero[i];
            posicion = i;
        }
        
    }
    
    cout << " El valor maximo es: " << maximo << endl;
    cout << " La posicion del mismo es: " << posicion << endl;
    return 0;
}