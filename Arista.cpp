#include "Arista.h"
#include<iostream>
using namespace std;

void Arista::crearArista(Vertice vertice1, Vertice vertice2) {
    this->vertice1 = vertice1;
    this->vertice2 = vertice2;
}
void Arista::mostrarArista() {
    cout << "Arista formada por:" << endl;
    cout << "Vertice 1 -> (" << vertice1.x << ", " << vertice1.y << ", " << vertice1.z << ")" << endl;
    cout << "Vertice 2 -> (" << vertice2.x << ", " << vertice2.y << ", " << vertice2.z << ")" << endl;
}

Vertice Arista::getVertice1() {
    return vertice1;
}

Vertice Arista::getVertice2() {
    return vertice2;
}





