// Autor: Oscar Teniente
// tenienteornelas@gmail.com
// Fecha: 24 Septiembre 2022

#include <iostream>
using namespace std;

int main() {

    // Declaración variables de operaciones
    char  b ;

    // Definición de variables
    int a = 0, c=0 ;

    //Le indicamos al usuario una instruccion
    cout << "Calculadora de operaciones basicas. Bienvenido:" << endl;

    //Usamos "cin" para que el usuario pueda definir la primer variable
    cout << "Primer numero:";
    cin >> a ;

    //Pedimos la opreación
    cout << "Operacion: ";
    cin >> b ;

    //Usamos "cin" para que el usuario pueda definir la segunda variable
    cout << "Segundo numero: ";
    cin >> c ;

    //Condicionales

    if (b == '+') {
        cout  << "Resultado: " << a << b << c << " = " << a + c << endl;
    }
    else if (b == '-') {
            cout  << "Resultado: " << a << b << c << " = " << a - c << endl;
        }
        else if (b == '*') {
                    cout  << "Resultado: " << a << b << c << " = " << a * c << endl;
            }
            else if (b == '/'){
                    cout  << "Resultado: " << a << b << c << " = " << a / c << endl;
                }
                else if ( b == '%') {

                         cout  << "Resultado: " << a << b << c << " = " << a % c << endl;
                }
                    else {
                        cout << "Sintax Error :|" << endl;
                    }
}

