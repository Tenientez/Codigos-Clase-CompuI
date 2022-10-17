// Autor: Oscar Teniente
// tenienteornelas@gmail.com
// 19 Septiembre 2022

#include <iostream>
#include <cstdlib>
#include <array>

using namespace std;

//Definir variable

#define n 10

// Inicialización matrices

void inicializarMatrices () ;
void imprimirMatrices (array < array < int , n > , n > Mat) ;

// Definir matrices

array < array < int , n > , n > sumarMatrices ();
array < array < int , n > , n > multiplicarMatrices ();
array < array < int , n > , n > restarMatrices ();

// Definir 2 matrices

array < array < int , n > , n > a = {} ;
array < array < int , n > , n > b = {} ;

int main() {

    inicializarMatrices () ;
    imprimirMatrices (a) ;
    imprimirMatrices (b) ;

    return 0;
}

    // Números aleatorios

    for ( int i = 0; i < n ; i ++ ) {
        for ( int j = 0 ; j < n ; j ++ ) {
            a [i] [j] = (rand () % 100) + 1 ;
            b [i] [j] = (rand () % 100) + 1 ;
            }
        }

    }

    // Impresión

    void imrpimirMatriz ( array < array < int , n > , n > Mat) {
        cout << endl;
        cout << "Impresión Matriz" < endl;
        for ( int i = 0 ; i < n ; i++ ){
            for ( int j = 0; j < n ; j++){
                cout << Mat [i] [j] << " " ;
            }
            cout << endl;
        }

}


