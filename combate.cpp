#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "combate.h"
#include "moves.h"

using namespace std;

void Combate(Pokemon& pokemon){
srand(time(0));
    int vidaPokemonEnemigo = 30 + rand() % 20;
    int atkPokemonEnemigo = 10 + rand () % 5;
    char opcion;
    string ataque;
// agregar valores booleanos
    
    cout << endl << "Un Pokemon salvaje con: " << vidaPokemonEnemigo << " puntos de vida y " << atkPokemonEnemigo << " puntos de ataque " << "se acerca!" << endl;

    while (pokemon.vida > 0 && vidaPokemonEnemigo > 0)
    {

        // El prota ataca primero
        cout << "Selecciona un ataque: " << endl << endl;
        MovimientosPokemon (pokemon);
        cin >> opcion;
        
        switch (opcion){

            case 'A':
        {
                if (pokemon.nombre == "Squirtle")
                {
                    pokemon.fuerza = 15;
                    ataque = "Pistola agua";
                    vidaPokemonEnemigo -= pokemon.fuerza;
                    cout << pokemon.nombre << " utiliza " << ataque << endl << endl;
                    cout << "La vida del enemigo se reduce a " << vidaPokemonEnemigo << endl;
                } 
                    else if (pokemon.nombre == "Charmander")
                    {
                        ataque = "Ascuas";
                        vidaPokemonEnemigo -= 15;
                        cout << pokemon.nombre << " utiliza " << ataque << endl << endl;
                        cout << "La vida del enemigo se reduce a " << vidaPokemonEnemigo << endl;
                    }
                                else if (pokemon.nombre == "Bulbasaur")
                                {
                                    ataque = "Latigo Cepa";
                                    vidaPokemonEnemigo -= 15;
                                    cout << pokemon.nombre << " utiliza " << ataque << endl << endl;
                                    cout << "La vida del enemigo se reduce a " << vidaPokemonEnemigo << endl;
                                }
                            
                break;
        }

            case 'a':
        {
                if (pokemon.nombre == "Squirtle")
                {
                    ataque = "Pistola agua";
                    vidaPokemonEnemigo -= 15;
                    cout << pokemon.nombre << " utiliza " << ataque << endl << endl;
                    cout << "La vida del enemigo se reduce a " << vidaPokemonEnemigo << endl;
                } 
                    else if (pokemon.nombre == "Charmander")
                    {
                        ataque = "Ascuas";
                        vidaPokemonEnemigo -= 15;
                        cout << pokemon.nombre << " utiliza " << ataque << endl << endl;
                        cout << "La vida del enemigo se reduce a " << vidaPokemonEnemigo << endl;
                    }
                        else if (pokemon.nombre == "Bulbasaur")
                        {
                            ataque = "Latigo Cepa";
                            vidaPokemonEnemigo -= 15;
                            cout << pokemon.nombre << " utiliza " << ataque << endl << endl;
                            cout << "La vida del enemigo se reduce a " << vidaPokemonEnemigo << endl;
                        }
                break;
        }

        case 'B':
        {
                if (pokemon.nombre == "Squirtle")
                {
                    ataque = "Burbuja";
                    vidaPokemonEnemigo -= 10;
                    cout << pokemon.nombre << " utiliza " << ataque << endl << endl;
                    cout << "La vida del enemigo se reduce a " << vidaPokemonEnemigo << endl;
                }
                    else if (pokemon.nombre == "Charmander")   
                    {
                        ataque = "Lanzallamas";
                        vidaPokemonEnemigo -= 30;
                        cout << pokemon.nombre << " utiliza " << ataque << endl << endl;
                        cout << "La vida del enemigo se reduce a " << vidaPokemonEnemigo << endl;
                    }
                        else if (pokemon.nombre == "Bulbasaur")
                        {
                            ataque = "Hoja Afilada";
                            vidaPokemonEnemigo -= 20;
                            cout << pokemon.nombre << " utiliza " << ataque << endl << endl;
                            cout << "La vida del enemigo se reduce a " << vidaPokemonEnemigo << endl;
                        }
                break;
        }

        case 'b':
        {
            if (pokemon.nombre == "Squirtle")
            {
                ataque = "Burbuja";
                vidaPokemonEnemigo -= 10;
                cout << pokemon.nombre << " utiliza " << ataque << endl << endl;
                cout << "La vida del enemigo se reduce a " << vidaPokemonEnemigo << endl;
            }
                    else if (pokemon.nombre == "Charmander")   
                    {
                        ataque = "Lanzallamas";
                        vidaPokemonEnemigo -= 30;
                        cout << pokemon.nombre << " utiliza " << ataque << endl << endl;
                        cout << "La vida del enemigo se reduce a " << vidaPokemonEnemigo << endl;
                    }
                        else if (pokemon.nombre == "Bulbasaur")
                        {
                            ataque = "Hoja Afilada";
                            vidaPokemonEnemigo -= 20;
                            cout << pokemon.nombre << " utiliza " << ataque << endl << endl;
                            cout << "La vida del enemigo se reduce a " << vidaPokemonEnemigo << endl;
                        }
                break;
        }

        case 'C':
        {
            if (pokemon.nombre == "Squirtle")
            {
                ataque = "Placaje";
                vidaPokemonEnemigo -= 12;
                cout << pokemon.nombre << " utiliza " << ataque << endl << endl;
                cout << "La vida del enemigo se reduce a " << vidaPokemonEnemigo << endl;
            }
                else if (pokemon.nombre == "Charmander")
                {
                    ataque = "Araniazo";
                    vidaPokemonEnemigo -= 10;
                    cout << pokemon.nombre << " utiliza " << ataque << endl << endl;
                    cout << "La vida del enemigo se reduce a " << vidaPokemonEnemigo << endl;
                }
                    else if (pokemon.nombre == "Bulbasaur")
                    {
                        ataque = "Drenadoras";
                        vidaPokemonEnemigo -= 30;
                        cout << pokemon.nombre << " utiliza " << ataque << endl << endl;
                        cout << "La vida del enemigo se reduce a " << vidaPokemonEnemigo << endl;
                    }
                break;
        }

        case 'c':
        {
            if (pokemon.nombre == "Squirtle")
            {
                ataque = "Placaje";
                vidaPokemonEnemigo -= 12;
                cout << pokemon.nombre << " utiliza " << ataque << endl << endl;
                cout << "La vida del enemigo se reduce a " << vidaPokemonEnemigo << endl;
            }
                else if (pokemon.nombre == "Charmander")
                {
                    ataque = "Araniazo";
                    vidaPokemonEnemigo -= 10;
                    cout << pokemon.nombre << " utiliza " << ataque << endl << endl;
                    cout << "La vida del enemigo se reduce a " << vidaPokemonEnemigo << endl;
                }
                    else if (pokemon.nombre == "Bulbasaur")
                    {
                        ataque = "Drenadoras";
                        vidaPokemonEnemigo -= 30;
                        pokemon.vida += 30 * 0.5;
                        cout << pokemon.nombre << " utiliza " << ataque << endl << endl;
                        cout << "La vida del enemigo se reduce a " << vidaPokemonEnemigo << endl;
                    }
            break;
        }

        case 'D':
        {
            if (pokemon.nombre == "Squirtle")
            {
                ataque = "Hidrobomba";
                vidaPokemonEnemigo -= 30;
                cout << pokemon.nombre << " utiliza " << ataque << endl << endl;
                cout << "La vida del enemigo se reduce a " << vidaPokemonEnemigo << endl;
            }
                else if (pokemon.nombre == "Charmander")
                {
                    ataque = "Giro Fuego";
                    vidaPokemonEnemigo -= 20;
                    cout << pokemon.nombre << " utiliza " << ataque << endl << endl;
                    cout << "La vida del enemigo se reduce a " << vidaPokemonEnemigo << endl;
                }
                    else if (pokemon.nombre == "Bulbasaur") 
                    {
                        ataque = "Placaje";
                        vidaPokemonEnemigo -= 12;
                        cout << pokemon.nombre << " utiliza " << ataque << endl << endl;
                        cout << "La vida del enemigo se reduce a " << vidaPokemonEnemigo << endl;
                    }
            break;
        }

        case 'd':
        {
            if (pokemon.nombre == "Squirtle")
            {
                ataque = "Hidrobomba";
                vidaPokemonEnemigo -= 30;
                cout << pokemon.nombre << " utiliza " << ataque << endl << endl;
                cout << "La vida del enemigo se reduce a " << vidaPokemonEnemigo << endl;
            }
                else if (pokemon.nombre == "Charmander")
                {
                    ataque = "Giro Fuego";
                    vidaPokemonEnemigo -= 20;
                
                }
                    else if (pokemon.nombre == "Bulbasaur") 
                    {
                        ataque = "Placaje";
                        vidaPokemonEnemigo -= 12;
                        cout << pokemon.nombre << " utiliza " << ataque << endl << endl;
                        cout << "La vida del enemigo se reduce a " << vidaPokemonEnemigo << endl;
                    }
                 break;
        }

        default:
        {
            cout << "Opcion invalida. Turno perdido" << endl << endl;
        }

        }
        // El enemigo contraataca 
        if (vidaPokemonEnemigo > 0)
        {
        pokemon.vida -= atkPokemonEnemigo;
     cout << "El enemigo ha contraatacado!" << " La vida de " << pokemon.nombre << " se reduce a " << pokemon.vida << "!" << endl;
        }
        if (vidaPokemonEnemigo <=0){

            cout << "Haz vencido al enemigo!" << endl << endl;
            cout << pokemon.nombre << " se ha regenerado!" << endl;
            pokemon.vida += 5;
            pokemon.experiencia += 10;
            if (pokemon.experiencia >= 30){
                pokemon.nivel++;
                pokemon.vida += 10;
                pokemon.fuerza += 5;
            cout << "Haz subido de nivel! " << "Vida y fuerza aumentados!" << endl;
            }
            else
            {
            MostrarPokemon(pokemon);
            }
            return;
        }

        if (pokemon.vida <=0) {

            cout << "Has sido derrotado. Fin del juego" << endl;
        return; 
            }
    }
}