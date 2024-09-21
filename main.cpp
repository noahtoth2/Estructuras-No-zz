#include "Arista.h"
#include "Vertice.h"
#include "Sistema.h"
#include <cstring>
#include <iostream>
#include <stdlib.h>
#include <string>
#include "Cara.h"
#include "Malla.h"
#include <list>
using namespace std;

int main() {




  Sistema sis ;
  Malla malla;




  string opcion;
  string entrada;
  int numtokes = 0;
  int index = 0;
  bool comandoValido = true;
  bool salir = false;
  string tokenss;
  do {
    comandoValido = true;
    cout << "$ ";
    getline(cin, entrada);
    //-------------------------------distribucion de
    // tokens----------------------------------
    char *c_entrada = new char[entrada.size() + 1];
    strcpy(c_entrada, entrada.c_str());

    // Contar los tokens
    char *token = strtok(c_entrada, " ");
    while (token != nullptr) {
      numtokes++;
      token = strtok(nullptr, " ");
    }

    // Crear un array para almacenar los tokens
    string *tokens = new string[numtokes];
    strcpy(c_entrada, entrada.c_str());

    token = strtok(c_entrada, " ");
    index = 0; // Resetear el índice para la segunda pasada
    while (token != nullptr) {
      tokens[index] = token;
      index++;
      token = strtok(nullptr, " ");
    }
    //--------------------------------final de distribucion de
    // tokens------------------------

    //--------------------------------inicio
    // menu--------------------------------------------
    if (strcmp(tokens[0].c_str(), "ayuda") == 0) {
      if (index == 1) {
        sis.ayuda();
      } else if (index == 2) {
        sis.ayudaComando(tokens[1]);
      }

    } else if (strcmp(tokens[0].c_str(), "cargar") == 0) {
      if (index == 2) {
       sis.cargarArchivo(tokens[1]);
        malla = sis.ListaMalla.back();
        string nombre = malla.obtenernombre();


      } else {
        comandoValido = false;
      }

    } else if (strcmp(tokens[0].c_str(), "listado") == 0) {
      if (index == 1) {
        if (sis.ListaMalla.empty()) {
          cout<<"Ningun objeto ha sido cargado en memoria."<<endl;
        }
        for(Malla malla : sis.ListaMalla) {
           malla.mostrar();
        }
      } else {
        comandoValido = false;
      }

    } else if (strcmp(tokens[0].c_str(), "envolvente") == 0) {
      if (index == 1) {

      } else if (index == 2) {
       sis.envolvente_nombre(tokens[1]);
      } else {
        comandoValido = false;
      }

    } else if (strcmp(tokens[0].c_str(), "descargar") == 0) {
      bool borrado = false;
      if (index == 2) {
        for (auto it = sis.ListaMalla.begin(); it != sis.ListaMalla.end(); ) {
          if (it->obtenernombre() == tokens[1].c_str()) {
            it = sis.ListaMalla.erase(it);
            borrado = true;

          } else {
            ++it;
          }
        }
      } else {
        comandoValido = false;
      }
      if(borrado) {
        cout<<"El objeto Ha sido Descargado de memoria"<<endl;
      }else {
        cout<<"no se encontro el nombre"<<endl;
      }
    } else if (strcmp(tokens[0].c_str(), "guardar") == 0) {
      if (index == 3) {

      } else {
        comandoValido = false;
      }

    } else if (strcmp(tokens[0].c_str(), "v_cercano") == 0) {
      if (index == 5) {

      } else if (index == 4) {

      } else {
        comandoValido = false;
      }

    } else if (strcmp(tokens[0].c_str(), "v_cercanos_caja") == 0) {
      if (index == 2) {

      } else {
        comandoValido = false;
      }

    } else if (strcmp(tokens[0].c_str(), "ruta_corta") == 0) {
      if (index == 4) {

      } else {
        comandoValido = false;
      }

    } else if (strcmp(tokens[0].c_str(), "ruta_corta_centro") == 0) {
      if (index == 3) {

      } else {
        comandoValido = false;
      }

    } else if (strcmp(tokens[0].c_str(), "salir") == 0) {
      salir = true;

    } else {
      cout << "Comando no reconocido\n";
    }

    if (!comandoValido) {
      cout << "\nError en el comando\n";
    }
    //--------------------------------fin
    // menu-----------------------------------------------

    tokenss = tokens[0];

    delete[] c_entrada;
    delete[] tokens;
    numtokes = 0;

  } while (!salir);

  return 0;
}