/*
    4- Dada una lista de números compuesta por 10 grupos y cada grupo separado del siguiente por un cero, se pide determinar e informar:

    a) Para cada uno de los grupos el máximo de los números pares y el máximo de los números impares. Se informan 2 resultados por cada grupo.
    b) Para cada uno de los grupos el porcentaje de números negativos y números positivos. Se informan 2 resultados por cada grupo.
    c) Cuántos números positivos había en total entre los 10 grupos. Se informa 1 resultado al final.
*/

/*
#include <iostream>

using namespace std;

int main()
{
    int numero;
    int cantidadGrupos = 10;
    int totalPositivos = 0;
    int positivos = 0;
    int negativos = 0;
    int totalNumeros = 0;
    int maximoPar = 0;
    int maximoImpar = 0;

    for (int i = 0; i < cantidadGrupos; i++)
    {
        cout << "Ingrese numeros para el grupo " << " (finaliza con 0) " << endl;

        while (true)
        {
            cin >> numero;
            if (numero == 0)
            {
                break;
            }

            // Esta parte pertenece al punto A
            if (numero % 2 == 0)
            {
                if (numero > maximoPar)
                {
                    maximoPar = numero;
                }
                else
                {
                    if (numero < maximoImpar)
                    {
                        maximoImpar = numero;
                    }

                    // Esta parte pertenece al punto B
                    if (numero > 0)
                    {
                        positivos++;
                        totalPositivos++;
                    }
                    else if (numero < 0)
                    {
                        negativos++;
                    }
                    totalNumeros++;
                }
            }

            // Resultados
            cout << "Grupo " << i << endl;
            cout << "  Maximo par: " << maximoPar  << endl;
            cout << "  Maximo impar: " << maximoImpar  << endl;
            cout << "  Porcentaje positivos: " << totalNumeros << endl;
            cout << "  Porcentaje negativos: " << totalNumeros << endl;
            cout << "---------------------------" << endl;
        }
    }

    cout << " Total de numeros positivos entre todos los grupos:  " << totalPositivos << endl;
    return 0;
}
*/





#include <iostream>
#include <climits> // Para INT_MIN

using namespace std;

int main()
{
    int numero;
    int cantidadGrupos = 10;
    int totalPositivos = 0;

    for (int i = 0; i < cantidadGrupos; i++)
    {
        int positivos = 0;
        int negativos = 0;
        int totalNumeros = 0;
        int maximoPar = INT_MIN;
        int maximoImpar = INT_MIN;

        cout << "Ingrese numeros para el grupo " << i + 1 << " (finaliza con 0):" << endl;

        while (true)
        {
            cin >> numero;
            if (numero == 0) break;

            // Punto A
            if (numero % 2 == 0)
            {
                if (numero > maximoPar)
                    maximoPar = numero;
            }
            else
            {
                if (numero > maximoImpar)
                    maximoImpar = numero;
            }

            // Punto B
            if (numero > 0)
            {
                positivos++;
                totalPositivos++;
            }
            else if (numero < 0)
            {
                negativos++;
            }

            totalNumeros++;
        }

        // Mostrar resultados del grupo
        cout << "Grupo " << i + 1 << ":" << endl;
        cout << "  Maximo par: " << (maximoPar == INT_MIN ? 0 : maximoPar) << endl;
        cout << "  Maximo impar: " << (maximoImpar == INT_MIN ? 0 : maximoImpar) << endl;

        double porcentajePositivos = totalNumeros > 0 ? (positivos * 100.0 / totalNumeros) : 0;
        double porcentajeNegativos = totalNumeros > 0 ? (negativos * 100.0 / totalNumeros) : 0;

        cout << "  Porcentaje positivos: " << porcentajePositivos << "%" << endl;
        cout << "  Porcentaje negativos: " << porcentajeNegativos << "%" << endl;
        cout << "---------------------------" << endl;
    }

    // Punto C
    cout << "Total de numeros positivos entre todos los grupos: " << totalPositivos << endl;

    return 0;
}
