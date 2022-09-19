// Autor: Oscar Teniente
// tenienteornelas@gmail.com
// 12 Septiembre 2022

#include <iostream>
//Bibliotecas necesarias para usar RAND
#include <cstdlib>
#include <ctime>
#include <array>

using namespace std;

// Se hará un código para generar números ALEATORIOS

int main() {

    // Declaración de arreglos
    array < int, 1000> a {} ;
    array < int, 1000> b {} ;
    // DArreglo que contine la suma de a y b
    array < int, 1000> c {} ;

    // Ciclo para iniciar números aleatorios y realizar suma
    for ( int i = 0 ; i < 1000 ; i++) {

        a[i] = ( rand () % 100) + 1 ;
        b[i] = ( rand () % 100) + 1 ;
        c[i] = a[i] + b[i] ;

        // Impresiones

        cout << a[i] << " + " << b[i] << " = " << c[i] << endl ;
    }


    return 0;
}