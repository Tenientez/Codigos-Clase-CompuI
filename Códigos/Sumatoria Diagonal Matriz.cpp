// Autor: Oscar Teniente
// tenienteornelas@gmail.com
// 19 Septiembre 2022

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>
using namespace std;

int main() {

    // Inicializar matriz
    array < array < int , 10 > , 10 > a = {} ;

    // Números aleatorios

    for ( int i = 0; i < a.size() ; i ++ ) {
        for ( int j = i ; j < a[i].size() ; j ++ ) {
            a [i] [j] = (rand () % 100) + 1 ;

                    // Validación SI i y j son iguales
             if ( i == j ) {
                 a [i] [j] + a [i] [j];
                 }
        }

    }
    // Suma diagonal
    cout <<" La suma es igual a:" << a [i] [j] + a [i] [j] << endl ;

    return 0;
}