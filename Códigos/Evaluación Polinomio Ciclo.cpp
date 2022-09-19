// Autor: Oscar Teniente
// tenienteornelas@gmail.com

#include <iostream>
using namespace std;

int main() {

    /* Poner un valor máximo */
    int max = -999999;

    /* Definición de un ciclo */
    for ( int x = 0; x<=4; x++ ){

    // Evaluar la función ( x^2 + 5x + 13 )
        float eval = ( (x*x) + (5*x) + (13) );

    // Usar condicionales
        if (eval > max) {
            max = eval;
            }
    }
    //Decirle al programa que poner
    cout << "El valor maximo es: " << max << endl;

    return 0;
}