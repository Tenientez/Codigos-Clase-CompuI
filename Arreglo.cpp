// Autor: Oscar Teniente
// tenienteornelas@gmail.com
// 09 Septiembre 2022

#include <iostream>
using namespace std;

// Define: Para definir una varibale por un múmero
#define N 10

int main() {

    // Definición de un arreglo
    int arr[N] { 1 };

    // Iterar arreglo
    for (int i=0 ; i < N ; i++) {

        //Al arreglo en la posición de i se agrega un valor
        arr[i] = i + i ;
        cout << arr[i] << "\t";
    }
    return 0;
}
x
