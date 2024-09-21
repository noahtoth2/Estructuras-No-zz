#include <iostream>
#include <ostream>

#include "Vertice.h"

using namespace std;

void Vertice::insertar_vertice(int x, int y, int z) {
    this->x = x;
    this->y = y;
    this->z = z;
}
void Vertice::eliminar_vertice(int x, int y, int z) {

    if (this->x == x && this->y == y && this->z == z) {

        this->x = 0;
        this->y = 0;
        this->z = 0;
    }

}

void Vertice::mostrar_vertice() {
    cout<<"ventice en"<<endl;
    cout << this->x << " " << this->y << " " << this->z << endl;
}

void Vertice::buscar_vertice(int x, int y, int z) {

}

int Vertice::getx() {
    return this->x;
}

int Vertice::gety() {
    return this->y;
}

int Vertice::getz() {
    return this->z;
}



