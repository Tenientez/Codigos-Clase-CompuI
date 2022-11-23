//
// Created by Teniente on 14/11/2022.
//

#ifndef CARGAELECTRICA_GRUPO_H
#define CARGAELECTRICA_GRUPO_H

#include <string>
#include <array>
class Grupo {

public:
    Grupo () {
        nombreGrupo = 1;
        pKGrupo = 1;
        cargaGrupo = 1;
    }
    Grupo (std::string Nombre, float pk, int carga) {
        nombreGrupo = Nombre;
        pKGrupo = pk;
        cargaGrupo = carga;
    }
    std::string getNombre();
    float getpK();
    int getCarga();


private:
    std::string nombreGrupo;
    float pKGrupo;
    int cargaGrupo;
};


#endif //CARGAELECTRICA_GRUPO_H
