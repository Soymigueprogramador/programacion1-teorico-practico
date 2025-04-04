/*
    Enunciado: 
    8- Hacer un programa para ingresar por teclado el importe de una venta sin el descuento y el importe de esa misma venta con el descuento aplicado 
    luego informar por pantalla el porcentaje de descuento aplicada a la misma.
    
    Ejemplo:
    A. Si el importe de la venta sin descuento es $1500 
    y el importe de la venta con descuento es $1200 entonces el porcentaje de descuento aplicado fue el 20%.
    
    Ejemplo:
    B. Si el importe de la venta sin descuento es $500 
    y el importe de la venta con descuento es $500 entonces el porcentaje de descuento aplicado fue el 0%.
    
    Importante: 
    Le sugerimos que haga una prueba con este ejemplo, 
    ya que muchos lo resuelven y concluyen que el descuento es el 80%. 
    Eso NO es el descuento. Si el descuento fuera de 80% entonces una venta de $1500 se cobraría tan solo $300.
    
    **Simplificación del problema:** 
    Tenemos que hacer un programa que muestre una compora con y sin descuento y que a su ves muestre el porcentaje del descuento.
    
    **Análisis:**  
    - **Datos de entrada:**
        Variables:
        compraSin Descuento
        compraConDescuento
        porcentajeDescuento
    
    - **Datos de salida:**
    Valor de la compra con descuento, valor de la compra sin descuento y el porcentaje del descuento. 
    
    **Operación:**
    Compra sin descuento: 
        Solo muestro la compra si el descuento.
    Compra con descuento:
        Muestro el valor de la compra con el descuento aplicado y el porcentaje del descuento
    
    **Estrategia:**
    1- Pido el valor de la compra sin descuento.
    2- Pido el valor de la compra con descuento. 
    3- Pido el importe del descuento.  
    
    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  
    
    **Codificación:**  
*/

#include <iostream>

using namespace std;

int main() {
    float compraConDescuento, compraSinDescuento, descuento; 

    cout << " ¿ Cual es el valor de la compra sin descuento ? ";
    cin >> compraSinDescuento; 

    cout << " ¿ Cual es el valor de la compra con descuento ? ";
    cin >> compraConDescuento;

    descuento = ( compraSinDescuento - compraConDescuento ) * 100 / compraSinDescuento;

    cout << " Tu descuneto es del " << descuento << "%/n" << endl;
    return 0;
}