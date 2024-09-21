//
// Created by romer on 2024-09-05.
//

#ifndef SISTEMA_H
#define SISTEMA_H
#include <cstring>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <list>
#include "Malla.h"
using namespace std;
class Sistema {
private:


public:
    list<Malla> ListaMalla;
    void cargarArchivo(string Archivo);
    void ayuda();
    void ayudaComando(string comando);
    void guardarmalla(string nombre_malla ,string nombre_archivo);
    void envolvente_nombre(string nombre_objeto);
};
#endif //SISTEMA_H
