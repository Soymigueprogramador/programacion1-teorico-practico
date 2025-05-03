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
