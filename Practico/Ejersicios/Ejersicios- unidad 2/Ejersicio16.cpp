/*
    Enunciado: 
    16- Hacer un programa para ingresar por teclado las cuatro notas de los exámenes obtenidas por un 
    alumno y luego emitir uno solo de los  cartel de acuerdo a las siguientes condiciones: 
    - “Promociona”, sí obtuvo en los cuatro exámenes nota 7 o más. 
    - “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes. 
    - “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los exámenes. 
    - “Recursa la materia”, si no aprobó ningún examen parcial.
    
    **Simplificación del problema:**  
    Tengo que crear un programa para calcular las notas de los examenes y mostrar por panalla lo que pasaria. 
    
    **Análisis:**  
    - **Datos de entrada:**
        Variables:
            examen1
            examen2
            examen3
            examen4
    
    - **Datos de salida:**  
    Mostramos un cartel que indique lo que pasa con los datos que seingresaron 
    
    **Operación:** 
    Calculo los 4 esamenes y muestro lo que pasa
    
    **Estrategia:**  
    1- Pedimos las notas de los4examenes
    2- Calculamos las notas
    3- Mostramos los resultados de lo que paso
    
    **Diagrama del código:**  
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.  
    
    **Codificación:**  
*/

#include <iostream>

using namespace std;

int main() {
    int examen1, examen2, examen3, examen4;
    int cantidadAprobados = 0;
    int cantidadPromocionados = 0;

    cout << " ¿ Cómo te fue en el primer examen ? ";
    cin >> examen1;

    cout << " ¿ Cómo te fue en el segundo examen ? ";
    cin >> examen2;

    cout << " ¿ Cómo te fue en el tercer examen ? ";
    cin >> examen3;

    cout << " ¿ Cómo te fue en el cuarto examen ? ";
    cin >> examen4;

    if ( examen1 >= 4 ) cantidadAprobados ++;
    if ( examen2 >= 4 ) cantidadAprobados ++;
    if ( examen3 >= 4 ) cantidadAprobados ++;
    if ( examen4 >= 4 ) cantidadAprobados ++;

    if ( examen1 >= 7 ) cantidadPromocionados ++;
    if ( examen2 >= 7 ) cantidadPromocionados ++;
    if ( examen3 >= 7 ) cantidadPromocionados ++;
    if ( examen4 >= 7 ) cantidadPromocionados ++;

    if ( cantidadPromocionados == 4 ) {
        cout << " Promociona la materia. Felicitaciones!! " << endl;
    } else if ( cantidadAprobados >= 3 ) {
        cout << " Rinde examen final. " << endl;
    } else if ( cantidadAprobados >= 1 ) {
        cout << " Recupera parciales. " << endl;
    } else {
        cout << " Recursa la materia. " << endl;
    }

    return 0;
}
