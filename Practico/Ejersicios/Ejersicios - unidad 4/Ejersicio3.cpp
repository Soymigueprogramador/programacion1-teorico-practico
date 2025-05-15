/*
    Enunciado:
    3- Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa 
    un cero y luego informar el porcentaje de números primos y el porcentaje de números 
    no primos. Se informan 2 resultados al final.

    
    **Simplificación del problema:** 
    Tengo que hacer un programa para ingresar una lista de numeros que termina cuando se agrega un 0. 
    Tambien tengo que mostrar el porsentaje de numeros primos y el porcentaje de numeros no primos.
    
    **Análisis:**  
    - **Datos de entrada:**
        Variables:
            numeros
            numerosPrimos
            numerosNoPrimos
            porcentaje
    
    - **Datos de salida:**  
    El porcentaje de los numeros primos y no primos
    
    **Operación:**  
    Iteramos con dos ciclos while
    
    **Estrategia:**  
    1- Pedimos una lista de numeros hasta que el usuario ingrese un 0
    2- Iteramos con los ciclos while
    3- Mostramos el porcentaje de los numeros primos y no primos
    
    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  
    
    **Codificación:**  
*/

#include <iostream>

using namespace std;

int main() {
    int numeros; 
    int numerosPrimos = 0; 
    int numerosNoPrimos = 0;
    float todosNumeros = 0; 
    float porcentajePrimos = 0;
    float porcentajeNoPrimos = 0;


    cout << " Ingresa un numero ";

    while ( true )
    {
        cin >> numeros;
        if ( numeros == 0 )
        {
            break;
        }
        todosNumeros ++;

        if ( numeros <= 1 )
        {
            //esPrimo = false; 
            numerosPrimos ++;
        } else {
            for (int i = 1; i < numeros / 2; i++)
            {
                if ( numeros % i == 0 )
                {
                    numerosPrimos ++; 
                    break;
                }
                
            }
            
        }

        if ( numerosPrimos )
        {
            numerosPrimos ++;
        } else {
            numerosNoPrimos ++;
        }
        
        if ( todosNumeros == 0 )
        {
            cout << " No se ingresaron numeros primos " << endl;
        } else {
            porcentajePrimos = ( numerosPrimos * 100 ) / todosNumeros;
            numerosNoPrimos = ( numerosNoPrimos * 100 ) / todosNumeros;
        }
        
    }
    

    cout << " El procentaje de numeros primos es: " << numerosPrimos << endl;
    cout << " El procentaje de numeros no primos es: " << numerosNoPrimos << endl;
    return 0;
}