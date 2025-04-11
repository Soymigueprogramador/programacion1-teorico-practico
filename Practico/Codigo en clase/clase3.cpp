// Cliclos exactos (for)

/*
    ¿ Ques es un ciclo for ?
    Un ciclo for es una herramienta que nos permite re-ejecutar ciertas instrucciones.

    ¿ Porque es un ciclo exsacto ?
    Un ciclo exacto nos permite configurarle la cantidad de vueltas necsarias.

    ¿ Que tipo de instrucciones se pueden usar dentro de un ciclo for ?
    Dentro de un ciclo podemos usar todo tipo de instrucciones como:
    - condicionales
    - secuenciales
    - entrada
    - salida
    - otros ciclos

    Codigo de un ciclo for.
    Usamos la palabra reservada for con parentesis y llaves
    " for (  ) {} "

    Iniciamos el ciclo con una variable de control con un valor inicial
    " i = 0; " (Se debe indicar el tipo de variables),
               (El nombre de la variable y el valor pueden variar)

    Agregamos una condicion
    " i condicion; " (La condicion puede ser cualquier cosa)

    Usamos una instruccion de incremento
    " i++; " (El nombre de la variables y el operador de incremento)

    Codigo final:alignas:
    " for ( i = 0; 0 < 10; i++; ) {
        resto del codigo;
    } "
*/

// Ejemplo 1:
/*
    #include <iostream>

using namespace std;

int main() {
    for ( int i = 0; i < 10 ; i++)
    {
        cout << " Hola mundo desde C++ " << endl;
    }

    return 0;
}
*/

// Ejemplo 2: Pedimos un número y lo repetimos 100 veces.
/*
    #include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Ingresa un número: ";
    cin >> n;

    for (int i = 0; i < 10; i++) {
        cout << n << endl;
    }

    return 0;
}
*/

