/*
    8- Escribir una función que reciba el valor de un año y retorne 1 si el mismo es bisiesto y 0 si es un año no bisiesto.
    Recordar que son años bisiestos los divisibles por 4, excepto los divisibles por 100,
    pero dentro de este grupo se incluyen los divisibles por 400. Por ejemplo 1992 fue
    bisiesto por ser divisible por 4. El año 1900 no fue bisiesto por ser divisible por 100,
    aun siendo divisible por 4. Y el año 2000 fue bisiesto por ser divisible por 400, aun siendo divisible por 100.
    Hacer un programa para ingresar una lista de 10 valores de años y contar cuantos son bisiestos. Utilizar la función solicitada.

*/

#include <iostream>

using namespace std;

int anioBisiesto(int anio)
{
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0))
    {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    int anio;
    int contador = 0;
    int cantidadAniosBisiestos = 10;

    for (int i = 0; i < cantidadAniosBisiestos; i++)
    {
        cout << " Ingresa un anio " << endl;
        cin >> anio;

        if (anioBisiesto(anio))
        {
            cout << "El año ingresado " << anio << " es un año bisiesto." << endl;
            contador ++;
        } else {
            cout << "El año ingresado " << anio << " no es un año bisiesto." << endl;
        }
    }

    cout << "\nLa cantidad de años bisiestos es: " << contador << endl;
    return 0;
}