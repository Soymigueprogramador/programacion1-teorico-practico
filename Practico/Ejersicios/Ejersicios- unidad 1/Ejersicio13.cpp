/*
    Enunciado: 
    13- Hacer un programa para un cajero automático para ingresar un importe a retirar y convertir el mismo en la cantidad de billetes de 
    $1.000, $500, $200 y $100 a entregar.
    Ejemplo A:
    Si el importe a retirar es $2500 se mostrará por pantalla que se deberán entregar 2 billetes de $1.000, 1 billete de $500,  0 billetes de $200 y 0 billetes de $100.
    Ejemplo B:
    Si el importe a retirar es $3400 se mostrará por pantalla que se deberán entregar 3 billetes de $1.000, 2 billetes de $200, 0 billetes de $500 y 0 billetes de $100.
    Ejemplo C:
    Si el importe a retirar es $300 se mostrará por pantalla que se deberán entregar 1 billete de $200, 1 billete de $100, 0 billetes de $1.000 y 0 billetes de $500.
    Recordatorio: 
    Considerar en todos los casos que el importe a retirar es en todos los casos múltiplo de $100 ya que el cajero no cuenta con billetes de $50, $20 o $10.
    
    **Simplificación del problema:**
    Tengo que crear un programa para un caje automatico que convierta el monto ingresado en billetes a retirar. 
    
    **Análisis:**  
    - **Datos de entrada:**
        Variables:
        billetesDe1000
        billetesDe500
        billetesDe200
        billetesDe100
        importeTotal
    
    - **Datos de salida:**
    Mostramos la cantidad de dinero que se va a retirar. 
    
    **Operación:**
    Tomo la cantidad de billetes a retirar y divido el importe por la cantidad de billetes.  
    
    **Estrategia:**
    1- Pregunto la cantidad de dinero que se va a retirar
    2- Muestro por pantalla el valor a retirar 
    
    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  
    
    **Codificación:**  
*/

#include <iostream>

using namespace std;

int main() {
    int importe, billetesde1000, billetesde500, billetesde200, billetesde100;

    cout << "Ingresa el importe a retirar (Debe ser múltiplo de 100): ";
    cin >> importe;

    billetesde1000 = importe / 1000;
    importe %= 1000;

    billetesde500 = importe / 500;
    importe %= 500;

    billetesde200 = importe / 200;
    importe %= 200;

    billetesde100 = importe / 100;
    importe %= 100;

    cout << "Billetes de $1000: " << billetesde1000 << endl;
    cout << "Billetes de $500: " << billetesde500 << endl;
    cout << "Billetes de $200: " << billetesde200 << endl;
    cout << "Billetes de $100: " << billetesde100 << endl;

    return 0;
}
