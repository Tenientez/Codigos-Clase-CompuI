//
// Created by chiva on 25/10/2022.
//

#include "Triangulo.h"

void Triangulo::setAltura(float h){
    altura = h;
}

void Triangulo::setBase(float b) {
    base = b;
}

float Triangulo::getAltura() {
    return altura;
}

float Triangulo::getBase() {
    return base;
}

float Triangulo::calcularArea() {
    return (base * altura)/2;
}