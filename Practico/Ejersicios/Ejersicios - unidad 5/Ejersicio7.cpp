/*
    7- Escribir una función CalcularMaximoAbsoluto que reciba dos números y retorne el máximo absoluto de ambos. 
    Por ejemplo el máximo absoluto de los números -40 y 20 es 40.
    Hacer un programa para ingresar dos números y, utilizando CalcularMaximoAbsoluto, emita luego el número mayor absoluto de ambos.

*/

#include <iostream>
#include <cmath>

using namespace std;

int calcularMaximoAbsoluto( int n1, int n2 ){
    return (abs(n1) > abs(n2)) ? abs(n1) : abs(n2);
}

int main() {
    int num1, num2, result;

    cout << " Ingresa un numero ";
    cin >> num1;

    cout << " Ingresa otro numero ";
    cin >> num2;

    result = calcularMaximoAbsoluto( num1, num2 );

    cout << " El numero absoluto es: " << result << endl;
    return 0;
}