#include <iostream>
using namespace std;

//Cáluclo de factorial de un número


int main() {

    int numero;
    int factorial = 1;

    cout << "Agregar un número entero:";
    cin >> numero;

    for (int i=1; i <= numero; i++) {
        factorial = factorial * i;
    }

    cout << "Resultado:" << factorial << endl;

    return 0;
}

template <typename T>
T factorrr(T &factorial, T &numero) {

    for (int i=1; i <= &numero; i++) {
    &factorial = &factorial * i;
}

return factorrr;
}