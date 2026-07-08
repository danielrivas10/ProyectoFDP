#include <iostream>
#include <string>
#include "moves.h"

using namespace std;

void MostrarPokemon(Pokemon& pokemon){
    cout << endl;
    cout << "========================================" << endl;
    cout << "|        ESTADISTICAS DEL POKEMON      |" << endl;
    cout << "========================================" << endl;
    cout << "| Pokemon elegido: " << pokemon.nombre << endl;
    cout << "| Vida:            " << pokemon.vida << endl;
    cout << "| Experiencia:     " << pokemon.experiencia << endl;
    cout << "| Fuerza:          " << pokemon.fuerza << endl;
    cout << "| Nivel:           " << pokemon.nivel << endl;
    cout << "========================================" << endl; 
    
}

void MovimientosPokemon(const Pokemon& pokemon)
{
    string ataque;
    cout << endl;
    cout << "========================================" << endl;
    cout << "|           LISTA DE ATAQUES           |" << endl;
    cout << "========================================" << endl;
    cout << "| Ataques de: " << pokemon.nombre << endl;
    cout << "========================================" << endl;

    string Moves_s[4] = {"A. Pistola Agua: Ataque a distancia. ",
                        "B. Burbuja ",
                        "C. Placaje: Ataque fisico. ",
                        "D. Hidrobomba: Ataque especial. "};
    string Moves_c[4] = {"A. Ascuas: Ataque de fuego. ",
                        "B. Lanzallamas: Ataque especial. ",
                        "C. Araniazo: Ataque rapido. ",
                        "D. Giro Fuego "};
    string Moves_b[4] = {"A. Latigo Cepa: Ataque con lianas. ",
                        "B. Hoja Afilada: Ataque rapido. ",
                        "C. Drenadoras: Ataque especial. ",
                        "D. Placaje: Ataque fisico. "};
    for (int i = 0; i <= 3; i++)
    {
        if (pokemon.nombre == "Squirtle"){
            cout << "| " << Moves_s[i] << endl;
        }
        else if (pokemon.nombre == "Charmander")
        {
            cout << "| " << Moves_c[i] << endl;
        }
        else if (pokemon.nombre == "Bulbasaur")
        {
            cout << "| " << Moves_b[i] << endl;
        }
    }

    cout << "========================================" << endl;
}
