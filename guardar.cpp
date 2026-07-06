#include <iostream>
#include <fstream>
#include "guardar.h"

using namespace std;

void GuardarPartida(const Pokemon& pokemon)
{
    if (pokemon.vida <= 0)
    {
        cout << "No se pudo guardar la partida." << endl;
        return;
    }
// Parte apoyada con IA, mas especificamente la parte de sobreescribir datos.
    ofstream archivo("datos_partida.txt");
    if (!archivo.is_open())
    {
        cout << "No se pudo abrir el archivo." << endl;
        return;
    }

    archivo << pokemon.nombre << endl;
    archivo << pokemon.vida << endl;
    archivo << pokemon.experiencia << endl;
    archivo << pokemon.nivel << endl;
    archivo << pokemon.fuerza << endl;

    cout << "Partida guardada." << endl;
}