#include <iostream>
#include <fstream>
#include "cargar.h"

using namespace std;

bool CargarPartida(Pokemon& pokemon) {
    ifstream archivo("datos_partida.txt");
    if (archivo.is_open()) {
        getline(archivo, pokemon.nombre);
        archivo >> pokemon.vida;
        archivo >> pokemon.experiencia;
        archivo >> pokemon.nivel;
        archivo >> pokemon.fuerza;
        archivo.close();
        return true;

    }
    return false;
}