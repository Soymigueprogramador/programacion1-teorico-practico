/*
    Enunciado: 
    16- El Laboratorio V&V hace frascos de píldoras para aprender a programar. 
    Cada frasco contiene 75 píldoras y cada píldora contiene 45 mg de Betamol, 2 grs de Micilina y 7 mg de Ácido Sinítico.
    Nos solicitan un programa donde se ingrese la cantidad de frascos de un pedido y muestre la cantidad de miligramos de Betamol, 
    Micilina y de Ácido Sinítico que son necesarios para elaborarlos.
    
    **Simplificación del problema:**
    Tengo que crear un programa para calcular cuantos frascos se necesitan para un pedido a un laboratorio. 
    
    **Análisis:**  
    - **Datos de entrada:**
        Variables: 
        frascos 
        betanol
        micilina
        acidosinitrico
    
    - **Datos de salida:** 
    Cantidad de frascos y la cantidad de medicamentos.  
    
    **Operación:**
    multiplicamos la cantidad de frascos por la cantidad de medicamentos. 
    
    **Estrategia:** 
    1- Pregunto cual es el pedido
    2- Muestro las cantidades de frascos y medicamentos
    
    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  
    
    **Codificación:**  
*/

#include <iostream>

using namespace std;

int main() {
    int frascos;
    int betamol, micilina, acidoSinitico; 

    cout << "Ingresa la cantidad de frascos del pedido: ";
    cin >> frascos;

    betamol = frascos * 75 * 45;         
    micilina = frascos * 75 * 2 * 1000;  
    acidoSinitico = frascos * 75 * 7;   

    cout << "\nPara " << frascos << " frascos se necesitan:" << endl;
    cout << "- " << betamol << " mg de Betamol" << endl;
    cout << "- " << micilina << " mg de Micilina" << endl;
    cout << "- " << acidoSinitico << " mg de Ácido Sinítico" << endl;
    return 0;
}
