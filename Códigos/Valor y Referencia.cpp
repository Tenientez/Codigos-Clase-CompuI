#include <iostream>
using namespace std;

/*Parámetros de referencia y valor. Valor: Sirve para hacer una copia y que quede guardado y aunque cambie el inicial
se queda igual desde aquí. Sirve para bajar la complejidad de n. Y los de refrecnia se denotan con el simbolo << & >> */


template <typename T>
T sumaRef (T &a, T &b);
template <typename T>
T sumaVal (T a, T b);

int main() {

    int a = 5;
    int b = a;

    int *ptrA = &a; //Apuntador (ptr[Variable]) para obtener la dirección de una variable. Si al apuntador le pones un apuntador se desreferencia (quita referencia).
    cout << ptrA << endl;
    cout << &a << endl;

    cout << "La suma por referencia es:" << sumaRef (a,b) << endl;
    cout << a << endl;
    int c = sumaVal(a,b);
    cout << "La suma por valor es:" << sumaVal (a,b) << endl;
    cout << a << endl;

    return 0;
}

template <typename T>
T sumaRef (T &a, T &b) {
    a = 7;
    return a + b;
}

template <typename T>
T sumaVal (T a, T b) {
    a = 9;
    cout << "Valor dentro de sumaVal:" << a << endl;
    return a + b;
}