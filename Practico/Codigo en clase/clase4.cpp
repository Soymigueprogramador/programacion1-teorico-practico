// Ciclos combinados
/*
    ¿ Que son los ciclos combinados ?
    Los ciclos combinados son la mescla entre ciclos como for, while o do while.alignas

    ¿ Que combinaciones puede haber dentro de los ciclos combinados ?
    Dentro de los ciclos combinados podemos meter ciclos exactos e inexactos como:
    - for con un for adentro
    - for con un while adentro
    - while con un for adentro
    - while con un do while adentro

    ¿ Que es lote y sublote ?
    Lote: Es un conjunto agrupado de elementos o unidades que comparten características
    comunes, procesados o manejados como una sola unidad.
    Sublote: Es una subdivisión dentro de un lote. Contiene una parte del lote con información
    más específica o detallada.
    Ejemplo (más claro en contexto técnico):
    Imaginemos que tenemos un sistema que registra la producción de medicamentos:
    Lote: Corresponde al conjunto total de unidades producidas en una misma tanda (por ejemplo,
    todas las pastillas hechas el mismo día con el mismo proceso).
    Sublote: Son divisiones internas de ese lote, por ejemplo, por tipo de empaque, por turno de producción,
    o por destino (si parte del lote va a una farmacia y otra parte a un hospital).
    Tu ejemplo del embalaje podría mejorarse así:
    Lote: Es el conjunto de productos enviados en un solo paquete grande.
    Sublote: Son las cajas individuales que contienen cada producto dentro del paquete.

    ¿ Como es la sintaxis de un ciclo combinado ?
    Ciclo combinado con 2 ciclos for:
    for (int i = 0; i < 3; i++)
    { // Primer ciclo externo (Lote)
        cout << "Lote " << i + 1 << ": Ingresa un numero: ";
        cin >> numero;
        cout << "Termino el primer ciclo (Lote)\n";

        for (int z = 0; z < 3; z++)
        { // Segundo ciclo anidado (Sublote)
            cout << "  Sublote " << z + 1 << ": Ingresa un numero: ";
            cin >> numero;
            cout << "  Termino el segundo ciclo (Sublote)\n";
        }
        cout << "----------------------------------\n";
    }

    Ciclo combinado con 1 ciclo for y 1 ciclo while adentro:
    for (int i = 0; i < 5; i++) {
        cout << "Lote " << i + 1 << ":" << endl;

        cout << "  Ingresa un numero (0 para terminar el lote): ";
        cin >> numero;

        while (numero != 0) {
            cout << "  Ingresa un numero (0 para terminar el lote): ";
            cin >> numero;
        }

        cout << "Se termino el lote " << i + 1 << ".\n";
        cout << "---------------------------\n";
    }

    Ciclo combinado con 1 ciclo for y 1 ciclo do while adentro:
    for (int i = 0; i < 5; i++) {
        cout << "Lote " << i + 1 << ":" << endl;

        do {
            cout << "  Ingresa un numero (0 para terminar el lote): ";
            cin >> numero;
        } while (numero != 0);

        cout << "Se termino el lote " << i + 1 << ".\n";
        cout << "---------------------------\n";
    }

*/

// Ejemplo 1: Hacer un programa para ingresar 5 lotes de numeros.
/*
#include <iostream>

using namespace std;

int main()
{
    int numero;

    for (int i = 0; i < 3; i++)
    { // Primer ciclo externo (Lote)
        cout << "Lote " << i + 1 << ": Ingresa un numero: ";
        cin >> numero;
        cout << "Termino el primer ciclo (Lote)\n";

        for (int z = 0; z < 3; z++)
        { // Segundo ciclo anidado (Sublote)
            cout << "  Sublote " << z + 1 << ": Ingresa un numero: ";
            cin >> numero;
            cout << "  Termino el segundo ciclo (Sublote)\n";
        }
        cout << "----------------------------------\n";
    }

    return 0;
}
*/

// Ejemplo 2: Hacer un programa para ingresar 5 lotes de números.
// Cada lote termina cuando se ingresa un 0.
/*
#include <iostream>

using namespace std;

int main() {
    int numero;

    for (int i = 0; i < 5; i++) {
        cout << "Lote " << i + 1 << ":" << endl;

        do {
            cout << "  Ingresa un numero (0 para terminar el lote): ";
            cin >> numero;
        } while (numero != 0);

        cout << "Se termino el lote " << i + 1 << ".\n";
        cout << "---------------------------\n";
    }

    return 0;
}
*/

// Ejemplo 2: Hacer un programa para ingresar 5 lotes de números.
// Cada lote termina cuando se ingresa un 0.
/*
#include <iostream>

using namespace std;

int main() {
    int numero;

    for (int i = 0; i < 5; i++) {
        cout << "Lote " << i + 1 << ":" << endl;

        cout << "  Ingresa un numero (0 para terminar el lote): ";
        cin >> numero;

        while (numero != 0) {
            cout << "  Ingresa un numero (0 para terminar el lote): ";
            cin >> numero;
        }

        cout << "Se termino el lote " << i + 1 << ".\n";
        cout << "---------------------------\n";
    }

    return 0;
}
*/

// Corte de control
/*
    ¿ Que es el corte de control ?
    El corte de control es una metodologia para la manipulacion de datos bajo determinado escenario.

    ¿ Cual es la clave e corte de control ?
    La clave para que el corte de control funcione es que los datos tiene que venir agrupados.
    Esto no es lo mismo que ordenados.
    Ejemplo:
    Tengo un comercio y tengo facturas A, B y C.
    Cuando hablamos de que los datos tienen que estar agrupados quiero decir que
    las facturas A van con todas las facturas A.
    las facturas B van con las B.
    las facturas C van con las C.
    Pero esto no quiere decir que se tienen que ingresar en orden. yo puedo ingresarlas como C,B,A o B,A,C
    o el orden que yo quiera siempre que las facturas esten agrupadas.

    ¿ Como es la estructura de un corte de control ?
    En corte de contros siempre se usa un ciclo while dentro de otro ciclo while.
    Ya que cuando usamos corte de control no sabemos cuando es que termina en ingreso de datos
    y como el ciclo while es "MIENTRAS SE CUMPLA TAL CONDICION" es perfecto para este tipo de tareas.


*/

// Codigo de ejemplo:
// Ingresamos una lista de personajes.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    //int numeroSerie, numeroSerieActual, nombrePersonaje, nombreSerie, edad;
     int numeroSerie;
    string nombrePersonaje;
    int edad;

    cout << " Ingresa el nombre de una serie ";
    cin >> nombreSerie;

    cout << " Ingresa el nombre del personje ";
    cin >> nombrePersonaje;

    cout << " Ingresa la edad del personaje ";
    cin >> edad;

    while (numeroSerie != 0)
    {
        numeroSerie == numeroSerieActual;

        cout << " Ingresa el nombre de una serie ";
        cin >> nombreSerie;

        cout << " Ingresa el nombre del personje ";
        cin >> nombrePersonaje;

        cout << " Ingresa la edad del personaje ";
        cin >> edad;

        while (numeroSerie == numeroSerieActual)
        {
            if ( nombrePersonaje = numeroSerieActual )
            {
                cout << " Este personaje pertenece a esta serie " << numeroSerieActual << endl ;
            } else {
                cout << " Este personaje no es de esta serie " << numeroSerieActual << endl;
            }
        }
    }
    
    cout << " Se termino el programa " << numeroSerie << endl;
    return 0;
}