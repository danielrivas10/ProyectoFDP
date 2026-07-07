#include <iostream>
#include <fstream>
#include "guardar.h"

using namespace std;

void GuardarPartida(const Pokemon& pokemon)
{
    if (pokemon.vida <= 0)
    {
        cout << endl;
        cout << "========================================" << endl;
        cout << "|          GUARDADO FALLIDO            |" << endl;
        cout << "========================================" << endl;
        cout << "| No se pudo guardar la partida.       |" << endl;
        cout << "| Tu Pokemon ya no tiene vida.         |" << endl;
        cout << "========================================" << endl;
        return;
    }

    ofstream archivo("datos_partida.txt");
    if (!archivo.is_open())
    {
        cout << endl;
        cout << "========================================" << endl;
        cout << "|          ERROR DE ARCHIVO            |" << endl;
        cout << "========================================" << endl;
        cout << "| No se pudo abrir el archivo.         |" << endl;
        cout << "| Intenta guardar nuevamente.          |" << endl;
        cout << "========================================" << endl;
        return;
    }

    archivo << pokemon.nombre << endl;
    archivo << pokemon.vida << endl;
    archivo << pokemon.experiencia << endl;
    archivo << pokemon.nivel << endl;
    archivo << pokemon.fuerza << endl;

    cout << endl;
    cout << "========================================" << endl;
    cout << "|           PARTIDA GUARDADA           |" << endl;
    cout << "========================================" << endl;
    cout << "| Tus datos han sido guardados.        |" << endl;
    cout << "| Puedes continuar tu aventura luego.  |" << endl;
    cout << "========================================" << endl;
}
