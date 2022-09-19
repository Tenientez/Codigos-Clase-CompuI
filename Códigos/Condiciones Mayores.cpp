// Autor: Oscar Teniente
// tenienteornelas@gmail.com

#include <iostream>
using namespace std;

int main() {

    /* Definición de variable */
    int x = 0;
    int y = 0;
    int z = 0;

    //Le indicamos al usuario una instruccion
    cout << "Ingresar 3 numeros enteros distintos:" << endl;

    //Usamos "cin" para que el usuario pueda definir la variable
    cin >> x;
    cin >> y;
    cin >> z;

    // Operaciones
    cout << "La suma es: " << (x+y+z) << endl;
    cout << "El promedio es: " << ((x+y+z)/3) << endl;
    cout << "La producto es: " << (x*y*z) << endl;

    // Mayor y Menor
    for (int i=0; i<3; ++i) {
        // Usar condicionales
        if (x > y & x > z) {
           cout << "El mayor es: " << x << endl;
        }
        if (y > z) {
            cout << "El mayor es: " << y << endl;

        if (z)
           cout << "El mayor es: " << z << endl;
        }

    }

    return 0;
}