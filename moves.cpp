#include <iostream>
#include <string>
#include "moves.h"

using namespace std;

void MostrarPokemon(Pokemon& pokemon){
    cout << endl << "==== Estadisticas del pokemon seleccionado ====" << endl;
    cout << "Pokemon elegido: " << pokemon.nombre << endl;
    cout << "Vida: " << pokemon.vida << endl;
    cout << "Experiencia: " << pokemon.experiencia << endl;
    cout << "Fuerza: " << pokemon.fuerza << endl;
    cout << "Nivel: " << pokemon.nivel << endl;
    cout << "=====================" << endl; 
}

void MovimientosPokemon(const Pokemon& pokemon)
{
    string ataque;
    cout << "Ataques de: " << pokemon.nombre << endl;
    string Moves_s[4] = {"A. Pistola Agua: Ataque a distancia. 15 puntos de ataque base",
                        "B. Burbuja: 10 puntos de ataque base",
                        "C. Placaje: Ataque fisico. 12 puntos de ataque base",
                        "D. Hidrobomba: Ataque especial. 30 puntos de ataque base"};
    string Moves_c[4] = {"A. Ascuas: Ataque de fuego. 15 puntos de ataque base",
                        "B. Lanzallamas: Ataque intenso. 30 puntos de ataque base",
                        "C. Araniazo: Ataque rapido. 10 puntos de ataque base",
                        "D. Giro Fuego: 20 puntos de ataque base"};
    string Moves_b[4] = {"A. Latigo Cepa: Ataque con lianas. 15 puntos de ataque base",
                        "B. Hoja Afilada: Ataque rapido. 20 puntos de ataque base",
                        "C. Drenadoras: Hace 30 puntos de ataque base",
                        "D. Placaje: Ataque fisico. 12 puntos de ataque base"};
    for (int i = 0; i <= 3; i++)
    {
        if (pokemon.nombre == "Squirtle"){
            cout << Moves_s[i] << endl;
        }
        else if (pokemon.nombre == "Charmander")
        {
            cout << Moves_c[i] << endl;
        }
        else if (pokemon.nombre == "Bulbasaur")
        {
            cout << Moves_b[i] << endl;
        }
    }
}