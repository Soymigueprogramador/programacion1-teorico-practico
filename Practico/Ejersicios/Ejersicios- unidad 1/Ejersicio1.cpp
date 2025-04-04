/*
    Enunciado:
    1- Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario y el
       valor que se le paga por hora trabajada, luego listar por pantalla el sueldo que le corresponde.

    Simplificación del problema:
    Calculamos la cantidad de horas trabajadas por el operario, realizamos el cálculo de cuánto se le paga por hora 
    trabajada y determinamos el sueldo correspondiente.

    Identificación del problema:
    - Calcular la cantidad de horas trabajadas.
    - Determinar cuánto se le paga por hora.
    - Calcular el sueldo mensual.

    Análisis:
    Datos de entrada:
        - valorHorasTrabajadas (cuánto se paga por hora).
        - horasTrabajadas (cantidad de horas trabajadas al día).
        - total

    Datos de salida:
        - sueldoMensual (sueldo total del operario).

    Operación:
        sueldoMensual = valorHorasTrabajadas * horasTrabajadas * diasTrabajados

    Estrategia:
    1. Preguntar cuánto se paga por hora.
    2. Preguntar cuántas horas se trabajaron por día.
    3. Preguntar cuántos días se trabajaron en el mes.
    4. Calcular el sueldo mensual del operario.
    5. Mostrar el resultado por pantalla.

    Diagrama del código:
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.

    Codificación:
*/

#include <iostream>

using namespace std;

int main() {
    int valorHorasTrabajadas, horasTrabajadas, total; 

    cout << " ¿ Cuanto tepaganporhora trabajada ? ";
    cin >> valorHorasTrabajadas;

    cout << " ¿ Cuantas horastrabajas ? ";
cin >> horasTrabajadas; 

    total =valorHorasTrabajadas* horasTrabajadas; 

    cout << " Tu sueldo es odeberia ser de $ " << total << endl; 
    return 0;
}