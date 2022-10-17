#include <iostream>
using namespace std;

int factorial (int n){
    //Caso Base
        if ( n==0 )
            return 1;
        //Recursividad
        int fact= 0;
        fact = n * factorial (n-1);
        return fact;
}
int main() {
    int n;
      cout  << "Ingrese numero: ";
        cin >> n;
            cout << "El factorial del numero " << n << " es: " << factorial(n);
                return 0;
}
