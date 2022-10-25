#include <iostream>
#include "Triangulo.h"
#include <array>
#include <cstdlib>
#include <ctime>

#define N 10
using namespace std;

int main() {
    Triangulo miTriangulo[N];
    float basetriangulo = 0, alturatriangulo = 0, minArea = 10000, maxArea = -10000;
    array <float, 4> V {0};
    srand((int) time(0));

    for (int j = 0; j < N; ++j) {

        for (int i = 0; i < 4; ++i) {
            V[i] = (rand()%100) + 1;
        }

        if ((V[2] - V[0]) != 0 ){
            basetriangulo = V[2] - V[0];
        } else return 0;

        if (basetriangulo < 0) {
            basetriangulo = basetriangulo * -1;
        }

        cout << basetriangulo << "\n";

        if ((V[3] - V[1]) != 0 ){
            alturatriangulo = V[3] - V[1];
        } else return 0;

        if (alturatriangulo < 0){
            alturatriangulo = alturatriangulo *-1;
        }

        cout << alturatriangulo << "\n";

        miTriangulo[j].setBase(basetriangulo);
        miTriangulo[j].setAltura(alturatriangulo);


        if (miTriangulo[j].calcularArea() < minArea) {
            minArea = miTriangulo[j].calcularArea();
        }

        if (miTriangulo[j].calcularArea() > maxArea) {
            maxArea = miTriangulo[j].calcularArea();
        }
    }

    cout << "El triangulo de mayor area es: " << maxArea << "\n";

    cout << "El triangulo de menor area es: " << minArea << "\n";

    return 0;
}