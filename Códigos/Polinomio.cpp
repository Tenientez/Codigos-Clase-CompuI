// Autor: Oscar Teniente
// tenienteornelas@gmail.com

#include <iostream>
#include <math.h>
using namespace std;

int main() {

    /* Definición de variable */
    int x = 0;

    //Le indicamos al usuario una instruccion
    cout << "Ingresar 1 numero entero" << endl;

    //Usamos "cin" para que el usuario pueda definir la variable
    cin >> x;

    // Polinomio
    cout << "La ecuacion " << " 3(" << x << "^2) + 16(" << x << ") + 8  es igual a: " <<  ((3*(pow(x,2))) +(16*x) + 8) << endl;

    return 0;
}