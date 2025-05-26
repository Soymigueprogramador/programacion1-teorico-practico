/*
    11- Dada una lista de 10 números, cargarlos en un vector. 
    Luego ingresar un número e informar el primer índice donde ese número aparece en el vector. 
    En caso de no aparecer se mostrará el valor índice igual a -1.

*/

#include <iostream>

using namespace std;

int main() {
    int numeroVector[10];
    int buscado;
    int indice = -1;

    // Carga de números en el vector
    for (int i = 0; i < 10; i++) {
        cout << "Ingresa un numero: ";
        cin >> numeroVector[i];
    }

    cout << "¿Cuál es el numero que querés buscar? ";
    cin >> buscado;

    for (int i = 0; i < 10; i++) {
        if (numeroVector[i] == buscado) {
            indice = i;
            break;  
        }
    }

    // Resultado
    cout << "El índice del número buscado es: " << indice << endl;
    return 0;
}