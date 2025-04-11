#include <iostream>
#include <string>

using namespace std;

int main() {
    string profesion = "verdulero";

    cout << "¿Cuál es tu profesión? ";
    cin >> profesion;

    if (profesion != "verdulero") {
        cout << "Tengo todo lo que quieren las wachas: fuman, toman y se arrebatan. Tengo todo lo que las vuelve locas...!";
    } else {
        cout << "Tengo todo lo que quieren las wachas: papas, cebollas y remolachas. Tengo todo lo que las vuelve locas: manzana, banana y hasta mandioca!!";
    }

    return 0;
}