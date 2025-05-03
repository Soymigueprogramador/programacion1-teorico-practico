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

#include <iostream>

using namespace std;

int main() {
    for ( int i = 0; i < 10 ; i++)
    {
        cout << " Hola mundo desde C++ " << endl;
    }

    return 0;
}

// Ejemplo 2: Pedimos un número y lo repetimos 100 veces.

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

// Ciclo inexacto ( While )
/*
    ¿ Ques es un ciclo while ?
    es una herramienta que nos permite repetir codigo.

    ¿ Porque es un ciclo inexacto ?
    Un ciclo while es un ciclo inexacto por que a diferencia de un for en este caso le indicamos la cantidad de veces
    qie se tiene que repetir pero no le decimos cuando tiene que parar, el va a parar cuando se cumpla 
    cierta condicion.

    Que tipo de instrucciones se pueden usar dentro de un ciclo while ?
    Dentro de un ciclo podemos usar todo tipo de instrucciones como:
    - condicionales
    - secuenciales
    - entrada
    - salida
    - otros ciclos

    Codigo de un ciclo while:
    while ( condicion ) {
        resto del codigo;
    }
*/

// Ejemplo 1 - Hacemos que un usuarios ingrese numeros hasta cansarce y corte el cico con un 0. 

#include <iostream>

using namespace std;

int main() {
    int n;

    cout << " Ingresa un numero ";
    cin >> n;

    while ( n != 0 )
    {
        cout << " Ingresa un numero ";
        cin >> n;
    }
    
    if ( n == 0 )
    {
        cout << " Salimos del ciclo while, somos libres!! " << endl;
    } else {
        cout << " Seguimos atrapados en este ciclo " << endl;
    }
    
    return 0;
}

// Ciclo inexacto ( DO WHILE )
/*
    Codigo de un ciclo while:
    do {
        codigo que se ejecta una vs, pedido de un dato
    } while ( condicion ) {
        resto del codigo;
    }

¿ Cual es la diferencia entre el while y el do while ?
    while:
    Es un ciclo inexacto el cual no usamos una variable de inicio ni la variable de incremento.
    Solo usamos el condicional. 
    En este caso:
    - Primero pedimos un cato
    - Ejecutamos el ciclo y si la condicion no se cumple volvemos a pedir un dato
    do while:
    Es lo mismo solo que en este caso:
    - Primero se ejecuta el ciclo
    - Pedimos un datos 
    - Verificamos que la condicion se cumpla
*/

// ¿ Cuando usamos estos ciclos ?
/*
    1- do while:
        En algun momento de la vida. Se lo usa muy poco.
    
    2- FOR:abort:
        Cuando se sabe la cantidad de vueltas exactas que tenemos que dar usamos un ciclo for. 
    
    3- While: 
        Cuando no sabemos cuantas vueltas tenemos que dar y solo necesitamos que se cumpla tal condicion
        usamos un ciclo while. 
*/