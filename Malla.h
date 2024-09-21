//
// Created by romer on 2024-09-06.
//

#ifndef MALLA_H
#define MALLA_H
#include "Cara.h"
#include <list>
using namespace std;
class Malla {
private:
public:
    string nombre;
    list<Cara> ListaDeCaras;
    void insertarnombre(string nombre);
    void insertarCara(Cara cara);
    void eliminarCara(Cara cara);
    void mostrar();
    string obtenernombre();

};
#endif //MALLA_H
