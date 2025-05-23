// Vectores o arrays.

/*
    ¿ Que son los vectores ?
    Un vector es una coleccion de elementos del mismo tipo.
    Antes con una variable podias guardar un solo valor, pero si cambiavas ese valor se eliminaba el valor anterior.
    Ahora con un vector podes guardar varios valores dentro de una misma variables, es por eso que se le llama coleccion.

    ¿ Como definir un vector ?
    Codigo de ejemplo:
    tipo de dato, nombre y cantidad de elementos.
    " int numero[5] "
    Esto guardara una collecion de 5 numeros
*/

// Ejemplo 1: Mostramos un vector.

#include <iostream>
using namespace std;

int main() {
    int numero[5];

    cout << "Ingresa 5 numeros para guardarlos en el vector llamado 'numero':" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numero[i];
    }

    cout << "Los numeros dentro del vector son: ";
    for (int i = 0; i < 5; i++) {
        cout << numero[i] << " ";
    }
    cout << endl;

    return 0;
}
