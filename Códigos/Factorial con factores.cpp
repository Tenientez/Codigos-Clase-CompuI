#include <iostream>
using namespace  std;

template <typename T>
T numeroFactorial(T &factorial, T &numero);

int main() {

    int numero;
    int factorial = 1;

    cout << "El valor de referencia de factorial es:" << &factorial << endl;
    cout << "El valor de referencia de numero es:" << &numero << endl;

    cout << "Agregar un numero entero:" << endl;
    cin >> numero;
    cout << numeroFactorial(factorial, numero) << endl;
    return 0;
}

template <typename T>
T numeroFactorial(T &factorial, T &numero) {

        for (int i=1; i <= numero; i++) {
            factorial = (factorial) * (i);
    }
    cout << "El valor de " << numero << "! es:" << endl;
    return factorial;
    }