/*
    Enunciado: 
    4- Hacer un programa para ingresar por teclado dos números y luego informar por pantalla la diferencia entre ambos. 
    Ejemplo A: Si se ingresan 3 y 8 se emite 5. Si se ingresan 8 y 3 se emite 5. 
    Ejemplo B: Si se ingresan -3 y 9 se emite 12. Si se ingresan -12 y -1 se emite 11.
    Ejemplo C: Si se ingresan -3 y -9 se emite 6. Si se ingresan -12 y -9 se emite 3.
    Importante: Verifique que el programa emite SIEMPRE UN VALOR POSITIVO porque la diferencia absoluta siempre es un valor positivo.
    
    **Simplificación del problema:** 
    Tengo que crear un programa para comparar d2 numeros. 
    
    **Análisis:**  
    - **Datos de entrada:**
        Variables: 
        n1, n2, diferente
    
    - **Datos de salida:**
    Mostramos cual es ladiferencia
    
    **Operación:**
    Tomo un numero y lo comparo con tro
    
    **Estrategia:**
    1- Pido 2 numeros
    2- Los comparo 
    3- Muestro ladiferencia

    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  
    
    **Codificación:**  
*/

#include <iostream>

using namespace std;

int main() {
    int n1, n2, diferente; 

    cout << " Ingresa unnumero ";
    cin >> n1;
    cout << " Ingresa otro numero ";
    cin >> n2;

    if ( n1 > n2 )
    {
        diferente = n1 - n2;
    } else {
        diferente = n2 - n1;
    }
    
    cout << " Ladiferencia es: " << diferente << endl; 
    return 0;
}