
#include <iostream>
#include "elegirP.h"
#include "moves.h"
using namespace std;

void ElegirPokemon(Pokemon& pokemon){
    char opcion;
    while (opcion != 'A' && opcion != 'a' && opcion != 'B' && opcion != 'b' && opcion != 'C' && opcion != 'c'){
    do{ 

        cout << "Elige un Pokemon" << endl
        << "A para seleccionar a Squirtle " << endl
        << "B para seleccionar a Charmander " << endl
        << "C para seleccionar a Bulbasaur" << endl;
    cin >> opcion;
    
    }  while (opcion != 'A' && opcion != 'a' && opcion != 'B' && opcion != 'b' && opcion != 'C' && opcion != 'c');
if (opcion == 'A' || opcion == 'a')
    {
        pokemon.nombre = "Squirtle";
if (opcion == 'A' || opcion == 'a')
        pokemon.experiencia = 0;
        MostrarPokemon(pokemon);
    }

}
 }  
