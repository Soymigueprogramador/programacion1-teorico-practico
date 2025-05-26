/*
    21- Hacer un programa para ingresar las encuestas de edad efectuadas a 200 personas y luego listar
    la cantidad de personas en cada rango de edad según la siguiente tabla.

    Década 0. (Edad 1-9)   Cantidad de encuestados
    Década 1. (Edad 10-19) Cantidad de encuestados
    ...
    Década 9. (Edad 90-99) Cantidad de encuestados
*/

#include <iostream>

using namespace std;

int main()
{
    const int cantidadPersonas = 200;
    int decada[10] = {0};
    int edad, indice, desde, hasta;

    for (int i = 0; i < cantidadPersonas; i++)
    {
        do
        {
            cout << "Ingresa la edad de la persona " << i + 1 << " (de 1 a 99): ";
            cin >> edad;

            if (edad < 1 || edad > 99)
            {
                cout << "Edad no valida (Debe estar entre 1 y 99)." << endl;
            }

        } while (edad < 1 || edad > 99);

        indice = edad / 10;
        if (edad < 10)
            indice = 0;

        decada[indice]++;
    }

    cout << "\nCantidad de personas por década:\n";

    for (int i = 0; i < 10; i++)
    {
        desde = (i == 0) ? 1 : i * 10;
        hasta = i * 10 + 9;
        cout << "Década " << i << " (" << desde << "-" << hasta << "): " << decada[i] << " personas" << endl;
    }

    return 0;
}