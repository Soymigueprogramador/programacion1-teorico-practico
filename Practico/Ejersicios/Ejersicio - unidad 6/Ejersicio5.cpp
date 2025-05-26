/*
    5-Leer 10 números y guardarlos en un vector. Determinar e informar cuál es el menor de los impares y el mayor de los pares.
    Suponer que habrá al menos un número par y uno impar.

*/

#include <iostream>

using namespace std;

int main()
{
    int vector[10];
    int menorImpar = 0;
    int mayorPar = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << " Ingresa un numero " << endl;
        cin >> vector[i];

        if (vector[i] % 2 == 0)
        {
            if (vector[i] > mayorPar)
            {
                mayorPar = vector[i];
            }
            else
            {
                if (vector[i] < menorImpar)
                {
                    menorImpar = vector[i];
                }
            }
        }
    }

    cout << " El mayor par es: " << mayorPar << endl;
    cout << " El menor impar es: " << menorImpar << endl;
    return 0;
}