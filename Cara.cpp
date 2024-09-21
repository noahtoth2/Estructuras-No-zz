#include<iostream>
#include "Arista.h"
#include "Cara.h"
#include <list>
using namespace std;

void Cara::AgregarArista(Arista arista) {
    ListaDeAristas.push_back(arista);
    cout << "Arista agregada a la cara." << endl;
}
void Cara::MostrarCara() {
    if (ListaDeAristas.empty()) {
        cout << "La cara no tiene aristas." << endl;
    } else {
        cout << "Aristas en la cara:" << endl;
        for (Arista &arista : ListaDeAristas) {
            arista.mostrarArista();
        }
    }
}

