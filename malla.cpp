//
// Created by romer on 2024-09-06.
//
#include <iostream>
#include "Cara.h"
#include "Malla.h"
using namespace std;

void Malla::insertarCara(Cara cara) {
 ListaDeCaras.push_back(cara);
}
void Malla::insertarnombre(string nombre) {
 this->nombre = nombre;
}


void Malla::mostrar() {
        cout << "Nombre de la Malla: " << nombre << endl;
        for (Cara &cara: ListaDeCaras) {
            cout << "Cara: " << endl;
            cara.MostrarCara();
        }
    }

string Malla::obtenernombre() {
    return nombre;
}

