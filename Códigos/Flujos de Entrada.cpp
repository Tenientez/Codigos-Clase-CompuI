// Autor: Oscar Teniente
// tenienteornelas@gmail.com

#include <iostream>
using namespace std;

int main() {

    /* Definición de variables */
        int a = 0, b = 0;

        //Le indicamos al usuario una instruccion
        cout << "Ingresar 2 numeros enteros" << endl;

        //Usamos "cin" para que el usuario pueda definir las dos variables
        cin >> a >> b;

        // Operador de suma
        cout << "La suma de " << a << " + " << b << " es igual a: " <<  a + b  << endl;

        // Operador de resta
        cout << "La resta de " << a << " - " << b << " es igual a: " <<  a - b  << endl;

        // Operador de multiplicación
        cout << "La multiplicacion de " << a << " * " << b << " es igual a: " <<  a * b  << endl;

        // Operador de división
        cout << "La division de " << a << " / " << b << " es igual a: " <<  a / b  << endl;

        // Operador de división
        cout << "El modulo de " << a << " % " << b << " es igual a: " <<  a % b  << endl;

        return 0;
    }
