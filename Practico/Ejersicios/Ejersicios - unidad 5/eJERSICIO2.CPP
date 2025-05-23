/*
    Enunciado:
    2-Hacer una función llamada CalcularMaximo que determine el máximo entre dos números.
    La función debe recibir dos números enteros por valor y devolver el valor más grande.
    Si los números son iguales debe devolver cualquiera de los dos. La función no debe mostrar nada por pantalla.
    Hacer un programa para ingresar dos números y, utilizando CalcularMaximo, emita luego el número mayor de ambos.

    **Simplificación del problema:**
    tENGO QUE CREAR:
    1- Tengo que crear una funcion llamada calculrMaximo para mostrar el numero maximo
    2- Tengo que crear un programa para mostrar el numero maximo

    **Análisis:**
    - **Datos de entrada:**
        Variables:
            n1, n2, resultado

    - **Datos de salida:**
    Debo mostrar un cartel con el numero mas grande y si los dos numeros son iguales debo mostrar uno de los dos

    **Operación:**
    Creo una funcion para comparar dos numeros

    **Estrategia:**
    1- Creo una funcion llamada calcularMaximo
    2- Pido dos numeros
    3- Con un condicional comparo que numero es mas grande
    4- Muestro el resultado por pantalla

    **Diagrama del código:**
    - El diagrama correspondiente se encuentra en la carpeta de diagramas.

    **Codificación:**
*/
#include <iostream>

using namespace std;

int calcularMaximo(int n1, int n2)
{
    if (n1 > n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}

int main()
{
    int n1, n2, resultado;

    cout << " Ingrese un numero ", cin >> n1;
    cout << " Ingrese otro numero ", cin >> n2;

    resultado = calcularMaximo(n1, n2);

    if (n1 == n2)
    {
        cout << " Ambos numeros son iguales " << resultado << endl;
    }
    else
    {
        cout << " El numero mas grande es: " << resultado << endl;
    }
    return 0;
}