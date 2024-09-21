//
// Created by romer on 2024-09-05.
//

#ifndef ARISTA_H
#define ARISTA_H
#include "Vertice.h"
class Arista {
private:
    Vertice vertice1;
    Vertice vertice2;
public:
    void crearArista(Vertice vertice1,Vertice vertice2);
    void mostrarArista();
    Vertice getVertice1();
    Vertice getVertice2();


};
#endif //ARISTA_H
