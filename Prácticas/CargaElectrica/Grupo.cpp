//
// Created by V303_11 on 14/11/2022.
//
#include "Grupo.h"
#include <string>
#include <array>

using namespace std;

string Grupo::getNombre()
{
    return nombreGrupo;
}
float Grupo::getpk() {
    return pkGrupo;
}
int Grupo::getCarga() {
    return cargaGrupo;
}

#include "Grupo.h"
#include <string>
#include <array>

using namespace std;

std::string Grupo::getNombre() {
    return NombreGrupo;

}
float Grupo::getPk() {
    return pKGrupo;
}

int Grupo::getCargagrupo() {
    return CargaGrupo;
}