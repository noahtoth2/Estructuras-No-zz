//
// Created by romer on 2024-09-05.
//

#ifndef VERTICE_H
#define VERTICE_H
using namespace std;

class Vertice {
private:


public:
    struct {
        int x;
        int y;
        int z;
    };

    void insertar_vertice(int x, int y, int z);
    void eliminar_vertice(int x, int y, int z);
    void mostrar_vertice();
    void buscar_vertice(int x, int y, int z);
    int getx();
    int gety();
    int getz();
};

#endif //VERTICE_H
