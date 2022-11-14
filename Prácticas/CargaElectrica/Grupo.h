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
    Grupo(string, float, int);
    array<Grupo, 3> todosGrupos;

private:
    string nombreGrupo();
    float pkGrupo();
    int cargaGrupo();

};


#endif //UNTITLED_GRUPO_H
