/*
    Enunciado: 
    12- Una granja vende la caja de 12 unidades a $1000 y cada huevo suelto a $120.
    Hacer un programa para ingresar la cantidad de huevos que compra un cliente y mostrar por pantalla el importe total a pagar.
    Recordatorio. Por cada 12 huevos se debe calcular una caja y el excedente se calcula como suelto.
    Ejemplo A:
    Si la cantidad ingresada son 15 huevos, el programa calculará 1 caja y 3 sueltos, es decir $1000 + $120 x 3 = $1360.
    Ejemplo B:
    Si la cantidad ingresada son 28 huevos el programa calculará 2 cajas y 4 sueltos, es decir $1000 x 2 + $120 x 4 = $2480.
    Ejemplo C:
    Si la cantidad ingresada son 8 huevos, el programa calculará: 0 cajas y 8 sueltos, es decir $120 x 8 = $960.
    Ejemplo D:
    Si la cantidad ingresada son 200 huevos, el programa calculará: 16 cajas y 8 sueltos, es decir $1000 x 16 + $120 x 8 = $16960.

    
    **Simplificación del problema:**
    Debo crear un programa para canculas cuantas cajas de huevos y cuantos huevos sueltos se venden. 
    
    **Análisis:**  
    - **Datos de entrada:**
        Constantes ( const int )
            precioCaja
            precioSueltos
            cantidadPorCaja

        Variables:
            cantidadHuevos
            cajas
            sueltos   
            aPagar
    
    - **Datos de salida:**
    Mostramos por pantalla la cantidad de huevos sueltos, la cantidad de cajar vendudas y el precio a pagar.  
    
    **Operación:**
    Multiplicar la cantidad de cajas vendudas, multiplicar la cantidad de sueltos vendidos. 
    
    **Estrategia:**
    1- Pregunto cuantas cajas se vendieron
    2- Pregunto cuantos sueltos se vendieron.
    3- Sumo la cantidad de cajar mas la cantidad de sueltos.  
    
    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  
    
    **Codificación:**  
*/
#include <iostream>

using namespace std;

int main() {
    // Variables.
    int cantidadHuevos, cajas, sueltos, aPagar; 

    // Constantes.
    const int precioCaja = 1000;
    const int precioSueltos = 120;
    const int cantidadPorCaja = 12;

    cout << " ¿ Cuantos huevos vas a llevar ? ";
    cin >> cantidadHuevos;

    cajas = cantidadHuevos / cantidadPorCaja;
    sueltos = cantidadHuevos / precioSueltos; 
    aPagar = ( cajas * precioCaja ) + ( sueltos * precioSueltos );

    cout << " cantidad de cajas " << cajas << "/n" << endl;
    cout << " Cantidad de huevos sueltos " << sueltos << "/n" << endl;
    cout << " Total a pagar es de $" << aPagar << "/n" << endl;
    return 0;
}