//
// Created by romer on 2024-09-05.
//

#ifndef CARA_H
#define CARA_H
#include <list>
#include "Arista.h"

#include "Arista.h"
using namespace std;
class Cara {
private:

public:
    list<Arista>ListaDeAristas;
    void AgregarArista(Arista arista);
    void EliminarArista(Arista arista);
    void MostrarCara();
};
#endif //CARA_H
