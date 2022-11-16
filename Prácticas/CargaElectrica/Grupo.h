//
// Created by V303_11 on 14/11/2022.
//

#ifndef UNTITLED_GRUPO_H
#define UNTITLED_GRUPO_H

#include <string>
#include <array>

using namespace std;

class Grupo {

public:
    Grupo () {
        nombreGrupo() = 1;
        pkGrupo() = 1;
        cargaGrupo() = 1;
    }
    Grupo (std::string Nombre, float pk, int Carga) {
        nombreGrupo = Nombre;
        pKGrupo = pk;
        cargaGrupo = Carga;
    }
    std::string getNombre();
    float getpk();
    int getCarga();

private:
    std::string nombreGrupo();
    float pkGrupo();
    int cargaGrupo();

};


#endif //UNTITLED_GRUPO_H

//
// Created by  on 15/11/2022.
//

#ifndef CARGAELECTRICA_GRUPO_H
#define CARGAELECTRICA_GRUPO_H

#include <string>
#include <array>
class Grupo {

public:
    Grupo () {
        NombreGrupo = 1;
        pKGrupo = 1;
        CargaGrupo = 1;
    }
    Grupo (std::string Nombre, float pkGrupo, int cargaGrupo) {
        NombreGrupo = Nombre;
        pKGrupo = pkGrupo;
        CargaGrupo = cargaGrupo;
    }
    std::string getNombre();
    float getPk();
    int getCargagrupo();


private:
    std::string NombreGrupo;
    float pKGrupo;
    int CargaGrupo;
};


#endif //CARGAELECTRICA_GRUPO_H