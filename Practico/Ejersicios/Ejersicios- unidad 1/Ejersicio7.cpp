/*
    Enunciado:
    7- Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje de descuento aplicada a la 
    misma y luego informar por pantalla el importe a pagar.
    Ejemplo:
    A. Si el importe de la venta es $1200 y el descuento es el 15% entonces el total a pagar será de $1020.
    Ejemplo:
    B. Si el importe de la venta es $800 y el descuento es el 0% entonces el total a pagar será de $800.

    
    **Simplificación del problema:**  
    Hacemos un programa para calcular el descuento que tiene una compra. 

    **Análisis:**  
    - **Datos de entrada:**
        Variables: 
        valorCompra
        descuento
        compraCoDescuento
    
    - **Datos de salida:** 
    precion con el descuento aplicado.  
    
    **Operación:**  
    Tomo el valor de una compra, multiplico por el valor del descuento, lo divido entre 100, todo ese resultado 
    y se lo descuento al valor de la compra. 

    **Estrategia:**  
    1- Pedimos el valor de una compra. 
    2. Pedimos el descuento. 
    3- Multiplicamos el valor de la compra por el monto del descuento y lo dividimos por 100.
    4- Tomo el valor de la compra y le resto el valor del descuento.

    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  
    
    **Codificación:**  
*/

/*
    Enunciado
    
    **Simplificación del problema:**  
    
    **Análisis:**  
    - **Datos de entrada:**
    
    - **Datos de salida:**  
    
    **Operación:**  
    
    **Estrategia:**  
    
    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  
    
    **Codificación:**  
*/
#include <iostream>

using namespace std;

int main() {
    float valorCompra, descuento, compraConDescuento; 

    cout << " ¿ Cual es el importe de la compra ? ";
    cin >> valorCompra; 
    cout << " ¿ Cual es elimporte del descuento ? ";
    cin >> descuento; 

    compraConDescuento = valorCompra - ( valorCompra * descuento ) / 100;

    cout << " El valor de la compra con el descuento incluido es de $ " << compraConDescuento << endl;
    return 0;
}