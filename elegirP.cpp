#include <iostream>
#include "elegirP.h"
#include "moves.h"

using namespace std;

void ElegirPokemon(Pokemon& pokemon){
    char opcion;
    while (opcion != 'A' && opcion != 'a' && opcion != 'B' && opcion != 'b' && opcion != 'C' && opcion != 'c'){
        cout << "Elige un Pokemon" << endl
        << "A para seleccionar a Squirtle " << endl
        << "B para seleccionar a Charmander " << endl
        << "C para seleccionar a Bulbasaur" << endl;
    cin >> opcion;
    }
if (opcion == 'A' || opcion == 'a')
    {
        pokemon.nombre = "Squirtle";
        pokemon.vida = 25;
        pokemon.fuerza = 18;
        pokemon.nivel = 4;
        pokemon.experiencia = 0;
            MostrarPokemon(pokemon);


    }

    else if (opcion == 'B' || opcion == 'b')
    {
        pokemon.nombre = "Charmander";
        pokemon.vida = 30;
        pokemon.fuerza = 22;
        pokemon.nivel = 5;
        pokemon.experiencia = 0;
        MostrarPokemon(pokemon);

    }

    else if (opcion == 'C' || opcion == 'c')
    {
        pokemon.nombre = "Bulbasaur";
        pokemon.vida = 21;
        pokemon.fuerza = 16;
        pokemon.nivel = 3;
        pokemon.experiencia = 0;
        MostrarPokemon(pokemon);

    }

}