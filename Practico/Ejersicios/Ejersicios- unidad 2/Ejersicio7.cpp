/*
    Enunciado:
    7- Hacer un programa para ingresar por teclado tres números e informar 
    con una leyenda aclaratoria si los tres son todos distintos entre sí, caso contrario no emitir nada. 
    Tener en cuenta: 
    Si A es distinto de B y B es distinto de C, eso no significa que A y C sean distintos. Ejemplo: A=8, B=6 y C=8.
    
    **Simplificación del problema:**
    Tengo que crear un programa que compare 3 numeros y en caso de ser distintos  los debera avisar 
    
    **Análisis:**  
    - **Datos de entrada:**
        Variables:
            nq, nw, ne
    
    - **Datos de salida:** 
    Mostrar una leyenda que indique que los 3 numero son distintos 
    
    **Operación:**
    Comparar los 3 numeros entre si
    
    **Estrategia:**
    1- Pido 3 numeros 
    2- Los comparo entre si
    3- En caso de ser diferentes muestro una leyenda aclarando la diferencia 
    
    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  
    
    **Codificación:**  
*/

#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3; 

    cout << " Ingresa el primer numero ";
    cin >> n1; 

    cout << " Ingresa el segundo numero ";
    cin >> n2;

    cout << " Ingresa el tercer numero ";
    cin >> n3;

    if ( n1 != n2 && n2 != n3 && n1 != n3 )
    {
        cout << " Todos los numeros son distintos ";
    }
    
    return 0;
}