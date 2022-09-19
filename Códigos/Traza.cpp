// Autor: Oscar Teniente
// tenienteornelas@gmail.com
// 12 Septiembre 2022

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>
using namespace std;

int main() {

    // Inicializar matriz
    array < array < int , 10 > , 10 > a = {} ;

    //Declaramos varaible traza
    int traza = 0;

    // Números aleatorios

    for ( int i = 0; i < a.size() ; i ++ ) {
        for ( int j = 0 ; j < a[i].size() ; j ++ ) {
            a [i] [j] = (rand () % 100) + 1 ;

                    // Validación SI i y j son iguales
             if ( i == j ) {
                 traza = a [i] [j] + traza;
                 }
        }

    }
    // Suma diagonal inicial
    cout <<" La traza es igual a:" << traza << endl ;
    
    return 0;
}
