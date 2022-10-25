//
// Created by Teniente on 25/10/2022.
//

#ifndef CLASESYOBJETOS_TRIANGULO_H
#define CLASESYOBJETOS_TRIANGULO_H

class Triangulo {
public:
    // Métodos de set
    void setAltura(float h);
    void setBase (float b);

    // Métodos get
    float getAltura();
    float getBase();

    float calcularArea();

private:
    float base, altura;
};

#endif //CLASESYOBJETOS_TRIANGULO_H
