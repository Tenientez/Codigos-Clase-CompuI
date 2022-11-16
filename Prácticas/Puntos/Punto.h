//
// Created by V303_11 on 09/11/2022.
//

#include <array>
#include <math.h>
#ifndef PUNTOS_PUNTO_H
#define PUNTOS_PUNTO_H

#include <iostream>
#include <array>
using namespace std;


class Punto2D {
public:
    void SetPosicion(float x, float y);
    void Trasladar(float temp1, float temp2);
    void RotarRespectoAlOrigen(float temp1);
    void Escalar(float temp1, float temp2);
    float GetX();
    float GetY();

private:
    array <float, 2> Posicion {};
    array < std::array <float,2>, 2> Operacion {};

};

#endif //PUNTOS_PUNTO_H
