/*
    Enunciado: 
    12- Hacer un programa para ingresar una lista de 10 números e informar el máximo de los negativos y el mínimo de los positivos. 
    Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24. Máximo Negativo -3. Mínimo Positivo 2.
    
    **Simplificación del problema:**  
    Tengo que crear un programa para ingresar 10 numeros y este mostrara el minimo de los positivos y el maximo de los negativos
    
    **Análisis:**  
    - **Datos de entrada:**
        Variables:
            n;
            maximoNegativo;
            minimoPositivo;
            promerNegativo;
            promerPositivo
    
    - **Datos de salida:**  
    Mostrara el minimo de los positivos y el maximo de los negativos dentro de una lista de 10 numeros
    
    **Operación:**  
    Itero 10 numero en un for y con un condificional comparo los positivos y negativos y muestro el maximo negativo y el minimo positivo.
    
    **Estrategia:**  
    1- Pido 10 numeros 
    2- Los itero con un ciclo for
    3- Con un if comparo los numeros para saber cual es positivo y cual es negativo
    4- Mostramos el maximo negativo y el minimo positivo

    
    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  
    
    **Codificación:**  
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    int maximoNegativo;
    int minimoPositivo;
    bool hayNegativo = false;
    bool hayPositivo = false;

    cout << "Ingrese 10 numeros:" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << "Numero " << i << ": ";
        cin >> n;

        if (n < 0) {
            if (!hayNegativo) {
                maximoNegativo = n;
                hayNegativo = true;
            } else if (n > maximoNegativo) {
                maximoNegativo = n;
            }
        } else if (n > 0) {
            if (!hayPositivo) {
                minimoPositivo = n;
                hayPositivo = true;
            } else if (n < minimoPositivo) {
                minimoPositivo = n;
            }
        }
    }

    cout << "\nResultado:\n";

    if (hayNegativo) {
        cout << "El maximo de los negativos es: " << maximoNegativo << endl;
    } else {
        cout << "No se ingresaron numeros negativos." << endl;
    }

    if (hayPositivo) {
        cout << "El minimo de los positivos es: " << minimoPositivo << endl;
    } else {
        cout << "No se ingresaron numeros positivos." << endl;
    }
    return 0;
}