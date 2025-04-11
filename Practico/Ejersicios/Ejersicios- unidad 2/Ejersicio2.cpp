/*
    Enunciado: 
    2- Hacer un programa para ingresar por teclado dos números y luego informar por pantalla con un cartel aclaratorio 
    si el primer número es múltiplo del segundo. 
    
    **Simplificación del problema:**
    Crearun programa paraver si un numero esmultiplo de otro numero. 
    
    **Análisis:**  
    - **Datos de entrada:**
        Variables:
        n1 
        n2
    
    - **Datos de salida:**
    Mostramosuncartel indicadosielnumeroes multiplo ono loes
    
    **Operación:**
    Comparamos siun numeroes mutiplo delotronumero. 
    
    **Estrategia:**
    1- Pedimosun numero ydespues pedimos otronumero
    2-Comprobamossi sonnumero multiplos 
    3-Mostramosporpantallasieso nonumeromultiplo   
    
    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  
    
    **Codificación:**  
*/
#include <iostream>

using namespace std;

int main() {
    int n1, n2;

    cout <<  " Ingresa un numero ";
    cin >> n1; 
    cout << "Ingresa otronumero ";
    cin >> n2; 

    if ( n1 % n2 == 0 )
    {
        cout << " El numero " << n1 << " es mutiplo de " << n2 << endl; 
    } else {
        cout << " El numero " << n1 << " no es mutiplo de " << n2 << endl;
    }
    
    return 0;
}