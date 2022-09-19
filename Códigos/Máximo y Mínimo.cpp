// Autor: Oscar Teniente
// tenienteornelas@gmail.com

#include <iostream>
using namespace std;

int main() {

    /* Poner un valor máximo */
    int max = -999999;

    /* Definición de un ciclo */
    for ( int x = 0; x<3; x+1 );
    for (int y = 0; y<3; y+1);
    for (int z = 0; z<3; z+1){

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