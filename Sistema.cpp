//
// Created by romer on 2024-09-05.
//
#include "Sistema.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <list>
#include "Malla.h"
using namespace std;
void Sistema::ayuda() {



  cout << "lista de comandos: " << endl;
  cout << "------------------------------------------------" << endl;
  cout << "cargar nombre_archivo" << endl << endl;

  cout << "------------------------------------------------" << endl;
  cout << "listado" << endl << endl;

  cout << "------------------------------------------------" << endl;
  cout << "envolvente nombre_objeto" << endl << endl;

  cout << "------------------------------------------------" << endl;
  cout << "envolvente" << endl << endl;

  cout << "------------------------------------------------" << endl;
  cout << "descargar nombre_objeto" << endl << endl;

  cout << "------------------------------------------------" << endl;
  cout << "guardar nombre_objeto nombre_archivo" << endl << endl;

  cout << "------------------------------------------------" << endl;
  cout << "v_cercano px py pz nombre_objeto" << endl << endl;

  cout << "------------------------------------------------" << endl;
  cout << "v_cercano px py pz" << endl << endl;

  cout << "------------------------------------------------" << endl;
  cout << "v_cercanos_caja nombre_objeto" << endl << endl;

  cout << "------------------------------------------------" << endl;
  cout << "ruta_corta i1 i2 nombre_objeto" << endl << endl;

  cout << "------------------------------------------------" << endl;
  cout << "ruta_corta_centro i1 nombre_objeto" << endl << endl;

  cout << "------------------------------------------------" << endl;
  cout << "salir" << endl << endl;
}

void Sistema:: ayudaComando(string comando) {
  if (strcmp(comando.c_str(), "cargar") == 0) {
    cout << "------------------------------------------------" << endl;
    cout << "cargar nombre_archivo" << endl;
    cout << "------------------------------------------------" << endl;
    cout << "Carga en memoria la información del objeto nombre_objeto "
            "contenida en el archivo identificado por nombre_archivo."
         << endl;
    cout << "------------------------------------------------" << endl;

  } else if (strcmp(comando.c_str(), "listado") == 0) {
    cout << "------------------------------------------------" << endl;
    cout << "listado" << endl;
    cout << "------------------------------------------------" << endl;
    cout << "Lista los objetos cargados actualmente en memoria, junto con la "
            "información básica de cada uno: cantidad de puntos, de aristas "
            "y de caras."
         << endl;
    cout << "------------------------------------------------" << endl;

  } else if (strcmp(comando.c_str(), "envolvente") == 0) {
    cout << "------------------------------------------------" << endl;
    cout << "envolvente nombre_objeto" << endl;
    cout << "------------------------------------------------" << endl;
    cout << " Calcula la caja envolvente del objeto identificado por "
            "nombre_objeto. La caja envolvente se agrega como un nuevo "
            "objeto en memoria, asignándole automáticamente el nombre "
            "env_nombre_objeto, para distinguirla de los demás objetos en "
            "memoria"
         << endl;
    cout << "------------------------------------------------" << endl << endl;

    cout << "------------------------------------------------" << endl;
    cout << "envolvente" << endl;
    cout << "------------------------------------------------" << endl;
    cout << " La caja envolvente se agrega como un nuevo objeto en memoria, "
            "asignándole automáticamente el nombre env_nombre_objeto, para "
            "distinguirla de los demás objetos en memoria. La caja "
            "envolvente se agrega como un nuevo objeto en memoria, "
            "asignándole automáticamente el nombre env_global, para "
            "distinguirla de los demás objetos en memoria"
         << endl;
    cout << "------------------------------------------------" << endl;

  } else if (strcmp(comando.c_str(), "descargar") == 0) {
    cout << "------------------------------------------------" << endl;
    cout << "descargar nombre_objeto" << endl;
    cout << "------------------------------------------------" << endl;
    cout << " Descarga de la memoria toda la información básica (vértices, "
            "aristas, caras) del objeto identificado por nombre_objeto"
         << endl;
    cout << "------------------------------------------------" << endl;

  } else if (strcmp(comando.c_str(), "guardar") == 0) {
    cout << "------------------------------------------------" << endl;
    cout << "guardar nombre_objeto nombre_archivo" << endl;
    cout << "------------------------------------------------" << endl;
    cout << "Escribe en un archivo de texto, identificado por "
            "nombre_archivo, la información básica (vértices y caras) del "
            "objeto identificado por nombre_objeto"
         << endl;
    cout << "------------------------------------------------" << endl;

  } else if (strcmp(comando.c_str(), "v_cercano") == 0) {
    cout << "------------------------------------------------" << endl;
    cout << "v_cercano px py pz nombre_objeto" << endl;
    cout << "------------------------------------------------" << endl;
    cout << "  Identifica el vértice del objeto nombre_objeto más cercano "
            "(en términos de la distancia euclidiana) al punto indicado por "
            "las coordenadas px, py y pz. Informa en pantalla el índice del "
            "vértice, los valores actuales de sus coordenadas, y la "
            "distancia a la cual se encuentra del punto dado"
         << endl;
    cout << "------------------------------------------------" << endl << endl;

    cout << "------------------------------------------------" << endl;
    cout << "v_cercano px py pz" << endl;
    cout << "------------------------------------------------" << endl;
    cout << "  Identifica, entre todos los objetos cargados en memoria, el "
            "vértice más cercano (en términos de la distancia euclidiana) al "
            "punto indicado por las coordenadas px, py y pz. Informa en "
            "pantalla el objeto al que pertenece, el índice del vértice, los "
            "valores actuales de sus coordenadas, y la distancia a la cual "
            "se encuentra del punto dado"
         << endl;
    cout << "------------------------------------------------" << endl;

  } else if (strcmp(comando.c_str(), "v_cercanos_caja") == 0) {
    cout << "------------------------------------------------" << endl;
    cout << "v_cercanos_caja nombre_objeto" << endl;
    cout << "------------------------------------------------" << endl;
    cout << "Identifica los vértices del objeto nombre_objeto más cercanos "
            "(en términos de la distancia euclidiana) a los puntos "
            "(vértices) que definen la respectiva caja envolvente del "
            "objeto. Informa en pantalla, en una tabla, las coordenadas de "
            "cada una de las esquinas de la caja envolvente, y para cada una "
            "de ellas, el índice del vértice más cercano, los valores "
            "actuales de sus coordenadas, y la distancia a la cual se "
            "encuentra de la respectiva esquina"
         << endl;
    cout << "------------------------------------------------" << endl;

  } else if (strcmp(comando.c_str(), "ruta_corta") == 0) {
    cout << "------------------------------------------------" << endl;
    cout << "ruta_corta i1 i2 nombre_objeto" << endl;
    cout << "------------------------------------------------" << endl;
    cout << "Identifica los índices de los vértices que conforman la ruta "
            "más corta entre los vértices dados para el objeto "
            "nombre_objeto. La distancia entre los vértices está medida en "
            "términos de la distancia euclidiana. Informa, además, la "
            "distancia total de la ruta calculada"
         << endl;
    cout << "------------------------------------------------" << endl;

  } else if (strcmp((comando).c_str(), "ruta_corta_centro") == 0) {
    cout << "------------------------------------------------" << endl;
    cout << "ruta_corta_centro i1 nombre_objeto" << endl << endl;
    cout << "------------------------------------------------" << endl;
    cout << " Identifica los índices de los vértices que conforman la ruta "
            "más corta entre el vértice dado y el centro del objeto "
            "nombre_objeto. La distancia entre los vértices está medida en "
            "términos de la distancia euclidiana. Informa, además, la "
            "distancia total de la ruta calculada."
         << endl;
    cout << "------------------------------------------------" << endl;

  } else if (strcmp((comando).c_str(), "salir") == 0) {
    cout << "------------------------------------------------" << endl;
    cout << "salir" << endl;
    cout << "------------------------------------------------" << endl;
    cout << "Termina la ejecución de la aplicación." << endl;
    cout << "------------------------------------------------" << endl;

  } else {
    cout << "Comando no reconocido\n";
  }
}

void Sistema::cargarArchivo(string Archivo) {
  std::string line;
  int x = 0, y = 0, z = 0;
  ifstream archivo(Archivo);
  int num_vertices;

  if (!archivo.is_open()) {
    cout << "El archivo  " << Archivo <<" no existe o es ilegible"<<endl;
    return;
  }

  Arista arista;
  Malla malla;


  getline(archivo, line);
  malla.insertarnombre(line);

  for(Malla &mallitas: ListaMalla) {
    if(mallitas.nombre == line) {
      cout<<"El "<<line<<" ya ha sido cargado en memoria"<<endl;
      return;
    }
  }

  getline(archivo, line);
  num_vertices = std::atoi(line.c_str());


  Vertice* vertice = new Vertice[num_vertices];


  for (int i = 0; i < num_vertices; i++) {
    std::getline(archivo, line);
    sscanf(line.c_str(), "%d %d %d", &x, &y, &z);
    vertice[i].insertar_vertice(x, y, z);
  }

  // Leer las caras
  while (std::getline(archivo, line)) {
    if (line == "-1") {
      break;  // Fin del archivo
    }
    Cara cara;

    istringstream iss(line);
    int num_cara_vertices;
    iss >> num_cara_vertices;

    cout << "El numero de vertices es: " << num_cara_vertices << endl;


    int* vertex_index = new int[num_cara_vertices];
    for (int i = 0; i < num_cara_vertices; i++) {

      iss >> vertex_index[i];  // Leer los índices de los vértices
    }
    for(int i = 0; i < (num_cara_vertices-1); i++) {
      arista.crearArista(vertice[vertex_index[i]], vertice[vertex_index[i + 1]]);
      cara.AgregarArista(arista);
    }
    arista.crearArista(vertice[vertex_index[0]],vertice[vertex_index[num_cara_vertices - 1]]);
    cara.AgregarArista(arista);
    malla.insertarCara(cara);


    for (int i = 0; i < num_cara_vertices; i++) {
      cout << "Vertice indice: " << vertex_index[i] << " ";
    }
    cout << endl;

    delete[] vertex_index;
  }

  ListaMalla.push_back(malla);
  delete[] vertice;
  archivo.close();

  cout << " El objeto  "<<malla.obtenernombre()<<" ha sido cargado exitosamente desde el archivo " << Archivo<< endl;
}

void Sistema:: envolvente_nombre(string nombre_objeto) {
  Malla* objeto = nullptr;
  for(Malla& malla: ListaMalla) {
      if(malla.obtenernombre() == nombre_objeto) {
        objeto = &malla;
      }
  }

  if(objeto == nullptr) {
    cout << "el objeto" << nombre_objeto << " no ha sido cargado" << endl;
    return;
  }

  float xmin, ymin, zmin;
  float xmax, ymax, zmax;

for(Cara cara : objeto ->ListaDeCaras) {
    for(Arista &arista : cara.ListaDeAristas ) {
        Vertice vertice1 = arista.getVertice1();
        Vertice vertice2 = arista.getVertice2();

        if (vertice1.x < xmin) {
          xmin = vertice1.x;
        }
        if(vertice2.x < xmin) {
          xmin = vertice2.x;
        }
        if(vertice1.y < ymin) {
          ymin = vertice1.y;
        }
       if(vertice2.y < ymin) {
         ymin =vertice2.y;
       }
      if(vertice1.z < zmin) {
        zmin = vertice1.z;
      }
      if(vertice2.z < zmin) {
        zmin =vertice2.y;
      }
      if (vertice1.x > xmax) {
        xmax = vertice1.x;
      }
      if (vertice2.x > xmax) {
        xmax = vertice2.x;
      }

      if (vertice1.y > ymax) {
        ymax = vertice1.y;
      }
      if (vertice2.y > ymax) {
        ymax = vertice2.y;
      }

      if (vertice1.z > zmax) {
        zmax = vertice1.z;
      }
      if (vertice2.z > zmax) {
        zmax = vertice2.z;
      }

    }
}

Malla envolvente;
  string nombre_envolvente = "env_" + nombre_objeto;
  envolvente.insertarnombre(nombre_envolvente);
  ListaMalla.push_back(envolvente);

}

void Sistema::guardarmalla(string nombre_malla, string nombre_archivo) {
  fstream archivo;
  list<Vertice> vertices;
  int cantidad_vertices;Arista arista;
  Vertice vertice;

  nombre_archivo += ".txt";

  archivo.open(nombre_archivo.c_str(), ios::out);
  for(Malla &malla: ListaMalla) {
    if(malla.obtenernombre() == nombre_malla) {
      for(Cara &cara: malla.ListaDeCaras) {

        for(Arista &arista: cara.ListaDeAristas) {
          Vertice vertice1 =arista.getVertice1();
          Vertice vertice2 =arista.getVertice2();
          for(Vertice &vertice: vertices) {

          }

        }
      }
    }
  }
}













