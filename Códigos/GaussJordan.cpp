#include <iostream>
#include <array>

// Añadir std para fácil llamado de funciones
using namespace std;

#define Variables 3

//// Declaración de funciones
//Definimos un template (un tipo de dato) para nuestra matriz
template <typename matriz>
void LlenarMatriz(matriz & miMatriz);

template <typename matriz>
void GaussJordan(matriz & miMatriz);

template <typename matriz>
void ImprimirSolucion(matriz & miMatriz);

template <typename matriz>
array<float, 4> Restar(array<float, 4> z, array<float, 4> y);

template <typename matriz>
array<float, 4> Multiplicar(array<float, 4> z, float mult);

template <typename matriz>
void ReordenarF(matriz &miMatriz);


int main()
{
    // Definimos el número de variables de nuestro sistema
    const int variables = Variables;
    // El número de columnas será el número de variables más su solición para cada ecuación
    const int columnas = variables + 1;

    // Inicializamos la matriz que vamos miMatriz ocupar
    array <array<float, columnas>, variables> miMatriz = { 0 };

    // Pedimos al usuario que llene la matriz
    LlenarMatriz(miMatriz);

    // Aplicamos el método de Gauss-Jordan sobre nuestra matriz
    GaussJordan(miMatriz);

    // Imprimimos la solución de la matriz
     ImprimirSolucion(miMatriz);

    return 0; // Indicamos que salimos del programa con éxito
}

/*
Llena 'miMatriz' con valores ingresados por el usuario para cada elemento.
No regresa ningún valor.
*/
template <typename matriz>
void LlenarMatriz(matriz & miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        for (int j = 0; j <= variables; j++) {
            cout << "Valor elemento [" << i << "][" << j << "]: ";
            cin >> miMatriz[i][j];
        }
    }
}

/*
Imprime cada elemento de 'miMatriz' emulando una matriz con corchetes cuadrados.
No regresa ningún valor.

template <typename matriz>
void ImprimirMatriz(matriz & miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        cout << "[ ";
        for (int j = 0; j < variables + 1; j++)
            cout << miMatriz[i][j] << '\t';
        cout << "]\n";
    }
}
Imprime en pantalla la solución para cada variable del sistema de ecuaciones correspondiente miMatriz los valores en 'miMatriz'.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirSolucion(matriz & miMatriz)
{
    cout << "Resultado:" << endl;
    cout << "x = "  << miMatriz[0][3] << endl;
    cout << "y = " << miMatriz[1][3] << endl;
    cout << "z = " << miMatriz[2][3] << endl;
}
/*
Implementa el algoritmo de Gauss-Jordan sobre 'miMatriz', finalizando en ella la solución del algoritmo.
No regresa ningún valor.
*/

template <typename matriz>
array<float, 4> Multiplicar(array<float, 4> z, float mult){
    for(int i = 0; i < z.size(); i++)
    {
        z[i] = z[i] * mult;
    }
    return z;
}

template <typename matriz>
void GaussJordan(matriz & miMatriz)
{
    ReordenarF<matriz>(miMatriz);

    for(int i = 0; i < miMatriz.size(); i++)
    {
        if (miMatriz[i][i] == 0)
        {
            cout << "No se puede resolver!.";
            exit (0);
        }
    }
    for (int i = 0; i < miMatriz.size(); i++)
    {
        miMatriz[i] = Multiplicar<matriz>(miMatriz[i], 1 / miMatriz[i][i]);
        for (int j = 0; j < miMatriz.size(); j++)
        {
            if (i != j)
            {
                miMatriz[j] = Restar<matriz>(Multiplicar<matriz>(miMatriz[i], miMatriz[j][i]), miMatriz[j]);
            }
        }
    }
    for (int i = 0; i < miMatriz.size(); i++)
    {
        miMatriz[i] = Multiplicar<matriz>(miMatriz[i], 1 / miMatriz[i][i]);
    }

}
template <typename matriz>
array<float, 4> Restar(array<float, 4> z, array<float, 4> y)
{
    for (int i = 0; i < z.size(); i++)
    {
        z[i] = z[i] - y[i];
    }
    return z;
}

template <typename matriz>
void ReordenarF(matriz &miMatriz)
{
    for (int i = 0; i < miMatriz.size(); i++)
    {
        if (miMatriz[i][i] == 0)
        {
            for (int j = i; j < miMatriz.size(); j++)
            {
                if (miMatriz[j][i] != 0)
                {
                    array<float, 4> matriz2 = miMatriz[i];
                    miMatriz[i] = miMatriz[j];
                    miMatriz[j] = matriz2;
                };
            }
        }
    }
}