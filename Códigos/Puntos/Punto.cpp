//
// Created by V303_11 on 09/11/2022.
//

#define _USE_MATH_DEFINES
#include <array>
#include <iostream>
#include <cmath>
#include "Punto.h"


using namespace std;

void Punto2D::SetPosicion(float x, float y) {
    Posicion[0] = x;
    Posicion[1] = y;
}

void Punto2D::Trasladar(float temp1, float temp2) {
    Posicion[0] = Posicion[0] + temp1;
    Posicion[1] = Posicion[1] + temp2;
}

void Punto2D::RotarRespectoAlOrigen(float temp1) {
    array <float, 2> C {};

    Operacion[0][0] = cos((temp1/180)*M_PI);
    Operacion[0][1] = sin((temp1/180)*M_PI)*-1;
    Operacion[1][0] = sin((temp1/180)*M_PI);
    Operacion[1][1] = cos((temp1/180)*M_PI);

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i] += Operacion[i][j] * Posicion[j];
        }

    }
    Posicion[0] = C[0];
    Posicion[1] = C[1];
}

void Punto2D::Escalar(float temp1, float temp2) {
    Posicion[0] = Posicion[0] * temp1;
    Posicion[1] = Posicion[1] * temp2;
}

float Punto2D::GetX() {
    return Posicion[0];
}

float Punto2D::GetY() {
    return Posicion[1];
}