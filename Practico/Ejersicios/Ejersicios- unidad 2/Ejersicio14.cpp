/*
    14
    Hacer un programa para ingresar por teclado la fecha de nacimiento de una persona, ingresando día, mes y año como 3 datos individuales. 
    Luego ingresar la fecha actual ingresando día, mes y año como 3 datos individuales. 
    Calcular luego la edad en años de esa persona y listar por pantalla. 
    Ejemplo 1:  
    Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 18 ya que los 19 recién los cumple en diciembre. 
    Ejemplo 2:
    Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 19. 
    Ejemplo 3:
    Si se ingresa como fecha de nacimiento: 28/2/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 18 ya que le faltan 2 días para cumplir los 19 años.
*/ 

#include <iostream>

using namespace std;

int main() {
    // Dfinicion de las variables
    int diaNaciste, mesNaciste, anioNaciste;
    int diacActual, mesActual, anioActual; 
    int edad;

    // Pedimos que se ingresen la fecha, el mes y el año de nacimiento
    cout << " ¿ Que dia naciste ? ";
    cin >> diaNaciste;
    cout << " ¿ En que mes naciste ? ";
    cin >> mesNaciste; 
    cout << " ¿ En que año naciste ? ";
    cin >> anioNaciste; 

    // Pedimos que se ingresen la fecha, el mes y el año actual
    cout << " ¿ Que dia es ? ( Ingresa el numero ) ";
    cin >> diacActual;
    cout << " ¿ En que mes estamos ? ( Ingresa el numero ) " ;
    cin >> mesActual;
    cout << " ¿ En que año estamos ? ( Ingresa el numero ) ";
    cin >> anioActual; 

    // Restamos el año de nacimiento - el año actual y obtenemos la edad.
    edad = anioActual - anioNaciste; 

    // Condicional para comprobar que la fecha, mes y año de nacimiento sea diferente a la fecha, mes y año actual
    /*if ( mesActual < mesNaciste || ( mesActual == mesNaciste < diacActual < diaNaciste ) )
    {
        edad --;
    }*/

    if (mesActual < mesNaciste || (mesActual == mesNaciste && diacActual < diaNaciste)) {
        edad--;
    }
    
    
    // Mostramos los datos por pantalla
    cout << " Esta persona tiene " << edad << " años de edad " << endl;
    return 0;
}   