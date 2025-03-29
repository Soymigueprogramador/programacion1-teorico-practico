#include <iostream>

using namespace std;

int main() {
    // Tipos de constantes en C++
    // son lo mism pero antes del tipo se le agrega const.
    const int n1 = 10; 
    const float n2 = 3.5; 
    const std::string saludar = "Hola"; 
    
    // Tipos de variables en C++.

    // Variables con numeros enteros.
    int numeroEntero = 1; 

    // Variables con numeros decimales.
    float numeroDecimal = 1.5;

    // Variables con booleanos.
    bool boleano = true;

    // Variables con cadena de caracteres (STRING)
    std::string nombre = "Miguel"; 

    // Cin para el ingreso de datos.
    cin >> numeroDecimal; 
    
    // cout mostramos un aviso.
    cout << "Hola";
    
    // para hacer una operacion usamos el operador de asignacion ( = ).
    numeroDecimal = numeroEntero; 

    // Operadores basicos en C++.
    /*
        asignacion     =
        
    Matematicos:
        suma           +
        resta          -
        multiplicacion *
        division       /
        resto div ent  %

    Relacionales: 
        mayor          <
        menor          >
        mayor o igual  <=
        menor o igual  >=
        distinto       !=
        igual          ==

    Logicos: 
        and            &&
        or             ||
        not            ! 
    */

    
    return 0;
}