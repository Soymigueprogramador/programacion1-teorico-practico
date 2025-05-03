/*
    Enunciado:
    15- Hacer un programa para ingresar una lista de 8 números y luego informar si todos están ordenados en forma creciente.
    En caso de haber dos números “empatados” considerarlos como crecientes.
    Por ejemplo si la lista fuera:
    Ejemplo A: -10, 1, 5, 7, 15, 18, 20, 23 se emitirá un cartel: “Conjunto Ordenado”
    Ejemplo B: 10, 10, 15, 20, 25, 25, 28, 33 se emitirá un cartel: “Conjunto Ordenado”
    Ejemplo C: 10, 1, 15, 7, -15, 18, 20, 23 se emitirá un cartel: “Conjunto No Ordenado”
    Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 17.

    **Simplificación del problema:**
    Hacer un programa que al ingresar 8 muestre el primero, el segundo, el ante-ultimo y el ultimo.

    **Análisis:**
    - **Datos de entrada:**
        Variables:
            numero, primerNumero, segundoNumero, anteUltimoNumero, ultimoNumero, ordenado;

    - **Datos de salida:**
    Se mostrara solo el primer numero, el segundo numero, el ante-ultimo numero y el ultimo numero

    **Operación:**
    Usamos un ciclo for para iterar y un if para verificar

    **Estrategia:**
    1- Creamos un ciclo for que va desde el 0 al 7
    2- Pedimos que el usuario ingrese los numeros necesarios
    3- Con los condicionales vamos verificando que solo se muestren los numeros solicitados en la consigna
    4- Mostramos la informacion por pantalla

    **Diagrama del código:**
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.

    **Codificación:**
*/

#include <iostream>
using namespace std;

int main() {
    int numero, anterior;
    int primerNumero, segundoNumero, anteUltimoNumero, ultimoNumero;
    bool ordenado = true;

    cout << "Ingresa un numero: ";
    cin >> numero;
    primerNumero = numero;
    anterior = numero;

    cout << "Ingresa un numero: ";
    cin >> numero;
    segundoNumero = numero;
    
    if (numero < anterior) {
        ordenado = false;
    }
    anterior = numero;

    for (int i = 2; i < 8; i++) {
        cout << "Ingresa un numero: ";
        cin >> numero;

        if (numero < anterior) {
            ordenado = false;
        }

        anterior = numero;

        if (i == 6) {
            anteUltimoNumero = numero;
        }
        if (i == 7) {
            ultimoNumero = numero;
        }
    }

    cout << "\nEl primer numero es: " << primerNumero << endl;
    cout << "El segundo numero es: " << segundoNumero << endl;
    cout << "El anteultimo numero es: " << anteUltimoNumero << endl;
    cout << "El ultimo numero es: " << ultimoNumero << endl;

    // Mostrar si el conjunto está ordenado
    if (ordenado) {
        cout << "Este conjunto esta Ordenado" << endl;
    } else {
        cout << "Este conjunto No esta Ordenado" << endl;
    }

    return 0;
}
