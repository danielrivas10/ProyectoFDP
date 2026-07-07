#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "combate.h"
#include "moves.h"

void Combate(Pokemon& pokemon){
srand(time(0));
    int vidaPokemonEnemigo = 30 + rand() % 20;
    int atkPokemonEnemigo = 10 + rand () % 5;
    char opcion;
    string ataque;
// agregar valores booleanos
    
    cout << endl;
    cout << "========================================" << endl;
    cout << "|          BATALLA INICIADA            |" << endl;
    cout << "========================================" << endl;
    cout << "| Un Pokemon salvaje ha aparecido!     |" << endl;
    cout << "|                                      |" << endl;
    cout << "| Vida enemiga:   " << vidaPokemonEnemigo << " HP              |" << endl;
    cout << "| Ataque enemigo: " << atkPokemonEnemigo << " ATK             |" << endl;
    cout << "========================================" << endl << endl;

    while (pokemon.vida > 0 && vidaPokemonEnemigo > 0)
    {

        // El prota ataca primero
        cout << "========================================" << endl;
        cout << "|           TURNO DE ATAQUE            |" << endl;
        cout << "========================================" << endl;
        cout << "| Selecciona un ataque para luchar.    |" << endl;
        cout << "========================================" << endl << endl;

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
                    cout << endl;
                    cout << "========================================" << endl;
                    cout << "|              ATAQUE                  |" << endl;
                    cout << "========================================" << endl;
                    cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                    cout << "| El enemigo recibe dano.              |" << endl;
                    cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                    cout << "========================================" << endl << endl;
                } 
                    else if (pokemon.nombre == "Charmander")
                    {
                        ataque = "Ascuas";
                        vidaPokemonEnemigo -= 15;
                        cout << endl;
                        cout << "========================================" << endl;
                        cout << "|              ATAQUE                  |" << endl;
                        cout << "========================================" << endl;
                        cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                        cout << "| El enemigo recibe dano.              |" << endl;
                        cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                        cout << "========================================" << endl << endl;
                    }
                                else if (pokemon.nombre == "Bulbasaur")
                                {
                                    ataque = "Latigo Cepa";
                                    vidaPokemonEnemigo -= 15;
                                    cout << endl;
                                    cout << "========================================" << endl;
                                    cout << "|              ATAQUE                  |" << endl;
                                    cout << "========================================" << endl;
                                    cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                                    cout << "| El enemigo recibe dano.              |" << endl;
                                    cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                                    cout << "========================================" << endl << endl;
                                }
                            
                break;
        }

            case 'a':
        {
                if (pokemon.nombre == "Squirtle")
                {
                    ataque = "Pistola agua";
                    vidaPokemonEnemigo -= 15;
                    cout << endl;
                    cout << "========================================" << endl;
                    cout << "|              ATAQUE                  |" << endl;
                    cout << "========================================" << endl;
                    cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                    cout << "| El enemigo recibe dano.              |" << endl;
                    cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                    cout << "========================================" << endl << endl;
                } 
                    else if (pokemon.nombre == "Charmander")
                    {
                        ataque = "Ascuas";
                        vidaPokemonEnemigo -= 15;
                        cout << endl;
                        cout << "========================================" << endl;
                        cout << "|              ATAQUE                  |" << endl;
                        cout << "========================================" << endl;
                        cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                        cout << "| El enemigo recibe dano.              |" << endl;
                        cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                        cout << "========================================" << endl << endl;
                    }
                        else if (pokemon.nombre == "Bulbasaur")
                        {
                            ataque = "Latigo Cepa";
                            vidaPokemonEnemigo -= 15;
                            cout << endl;
                            cout << "========================================" << endl;
                            cout << "|              ATAQUE                  |" << endl;
                            cout << "========================================" << endl;
                            cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                            cout << "| El enemigo recibe dano.              |" << endl;
                            cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                            cout << "========================================" << endl << endl;
                        }
                break;
        }

        case 'B':
        {
                if (pokemon.nombre == "Squirtle")
                {
                    ataque = "Burbuja";
                    vidaPokemonEnemigo -= 10;
                    cout << endl;
                    cout << "========================================" << endl;
                    cout << "|              ATAQUE                  |" << endl;
                    cout << "========================================" << endl;
                    cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                    cout << "| El enemigo recibe dano.              |" << endl;
                    cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                    cout << "========================================" << endl << endl;
                }
                    else if (pokemon.nombre == "Charmander")   
                    {
                        ataque = "Lanzallamas";
                        vidaPokemonEnemigo -= 30;
                        cout << endl;
                        cout << "========================================" << endl;
                        cout << "|              ATAQUE                  |" << endl;
                        cout << "========================================" << endl;
                        cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                        cout << "| El enemigo recibe dano.              |" << endl;
                        cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                        cout << "========================================" << endl << endl;
                    }
                        else if (pokemon.nombre == "Bulbasaur")
                        {
                            ataque = "Hoja Afilada";
                            vidaPokemonEnemigo -= 20;
                            cout << endl;
                            cout << "========================================" << endl;
                            cout << "|              ATAQUE                  |" << endl;
                            cout << "========================================" << endl;
                            cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                            cout << "| El enemigo recibe dano.              |" << endl;
                            cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                            cout << "========================================" << endl << endl;
                        }
                break;
        }

        case 'b':
        {
            if (pokemon.nombre == "Squirtle")
            {
                ataque = "Burbuja";
                vidaPokemonEnemigo -= 10;
                cout << endl;
                cout << "========================================" << endl;
                cout << "|              ATAQUE                  |" << endl;
                cout << "========================================" << endl;
                cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                cout << "| El enemigo recibe dano.              |" << endl;
                cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                cout << "========================================" << endl << endl;
            }
                    else if (pokemon.nombre == "Charmander")   
                    {
                        ataque = "Lanzallamas";
                        vidaPokemonEnemigo -= 30;
                        cout << endl;
                        cout << "========================================" << endl;
                        cout << "|              ATAQUE                  |" << endl;
                        cout << "========================================" << endl;
                        cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                        cout << "| El enemigo recibe dano.              |" << endl;
                        cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                        cout << "========================================" << endl << endl;
                    }
                        else if (pokemon.nombre == "Bulbasaur")
                        {
                            ataque = "Hoja Afilada";
                            vidaPokemonEnemigo -= 20;
                            cout << endl;
                            cout << "========================================" << endl;
                            cout << "|              ATAQUE                  |" << endl;
                            cout << "========================================" << endl;
                            cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                            cout << "| El enemigo recibe dano.              |" << endl;
                            cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                            cout << "========================================" << endl << endl;
                        }
                break;
        }

        case 'C':
        {
            if (pokemon.nombre == "Squirtle")
            {
                ataque = "Placaje";
                vidaPokemonEnemigo -= 12;
                cout << endl;
                cout << "========================================" << endl;
                cout << "|              ATAQUE                  |" << endl;
                cout << "========================================" << endl;
                cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                cout << "| El enemigo recibe dano.              |" << endl;
                cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                cout << "========================================" << endl << endl;
            }
                else if (pokemon.nombre == "Charmander")
                {
                    ataque = "Araniazo";
                    vidaPokemonEnemigo -= 10;
                    cout << endl;
                    cout << "========================================" << endl;
                    cout << "|              ATAQUE                  |" << endl;
                    cout << "========================================" << endl;
                    cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                    cout << "| El enemigo recibe dano.              |" << endl;
                    cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                    cout << "========================================" << endl << endl;
                }
                    else if (pokemon.nombre == "Bulbasaur")
                    {
                        ataque = "Drenadoras";
                        vidaPokemonEnemigo -= 30;
                        cout << endl;
                        cout << "========================================" << endl;
                        cout << "|              ATAQUE                  |" << endl;
                        cout << "========================================" << endl;
                        cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                        cout << "| El enemigo recibe dano.              |" << endl;
                        cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                        cout << "========================================" << endl << endl;
                    }
                break;
        }

        case 'c':
        {
            if (pokemon.nombre == "Squirtle")
            {
                ataque = "Placaje";
                vidaPokemonEnemigo -= 12;
                cout << endl;
                cout << "========================================" << endl;
                cout << "|              ATAQUE                  |" << endl;
                cout << "========================================" << endl;
                cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                cout << "| El enemigo recibe dano.              |" << endl;
                cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                cout << "========================================" << endl << endl;
            }
                else if (pokemon.nombre == "Charmander")
                {
                    ataque = "Araniazo";
                    vidaPokemonEnemigo -= 10;
                    cout << endl;
                    cout << "========================================" << endl;
                    cout << "|              ATAQUE                  |" << endl;
                    cout << "========================================" << endl;
                    cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                    cout << "| El enemigo recibe dano.              |" << endl;
                    cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                    cout << "========================================" << endl << endl;
                }
                    else if (pokemon.nombre == "Bulbasaur")
                    {
                        ataque = "Drenadoras";
                        vidaPokemonEnemigo -= 30;
                        pokemon.vida += 30 * 0.5;
                        cout << endl;
                        cout << "========================================" << endl;
                        cout << "|              ATAQUE                  |" << endl;
                        cout << "========================================" << endl;
                        cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                        cout << "| El enemigo recibe dano.              |" << endl;
                        cout << "| Bulbasaur recupera energia!          |" << endl;
                        cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                        cout << "========================================" << endl << endl;
                    }
            break;
        }

        case 'D':
        {
            if (pokemon.nombre == "Squirtle")
            {
                ataque = "Hidrobomba";
                vidaPokemonEnemigo -= 30;
                cout << endl;
                cout << "========================================" << endl;
                cout << "|              ATAQUE                  |" << endl;
                cout << "========================================" << endl;
                cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                cout << "| Es un golpe muy poderoso!            |" << endl;
                cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                cout << "========================================" << endl << endl;
            }
                else if (pokemon.nombre == "Charmander")
                {
                    ataque = "Giro Fuego";
                    vidaPokemonEnemigo -= 20;
                    cout << endl;
                    cout << "========================================" << endl;
                    cout << "|              ATAQUE                  |" << endl;
                    cout << "========================================" << endl;
                    cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                    cout << "| Las llamas rodean al enemigo!        |" << endl;
                    cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                    cout << "========================================" << endl << endl;
                }
                    else if (pokemon.nombre == "Bulbasaur") 
                    {
                        ataque = "Placaje";
                        vidaPokemonEnemigo -= 12;
                        cout << endl;
                        cout << "========================================" << endl;
                        cout << "|              ATAQUE                  |" << endl;
                        cout << "========================================" << endl;
                        cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                        cout << "| El enemigo recibe dano.              |" << endl;
                        cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                        cout << "========================================" << endl << endl;
                    }
            break;
        }

        case 'd':
        {
            if (pokemon.nombre == "Squirtle")
            {
                ataque = "Hidrobomba";
                vidaPokemonEnemigo -= 30;
                cout << endl;
                cout << "========================================" << endl;
                cout << "|              ATAQUE                  |" << endl;
                cout << "========================================" << endl;
                cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                cout << "| Es un golpe muy poderoso!            |" << endl;
                cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                cout << "========================================" << endl << endl;
            }
                else if (pokemon.nombre == "Charmander")
                {
                    ataque = "Giro Fuego";
                    vidaPokemonEnemigo -= 20;
                    cout << endl;
                    cout << "========================================" << endl;
                    cout << "|              ATAQUE                  |" << endl;
                    cout << "========================================" << endl;
                    cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                    cout << "| Las llamas rodean al enemigo!        |" << endl;
                    cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                    cout << "========================================" << endl << endl;
                }
                    else if (pokemon.nombre == "Bulbasaur") 
                    {
                        ataque = "Placaje";
                        vidaPokemonEnemigo -= 12;
                        cout << endl;
                        cout << "========================================" << endl;
                        cout << "|              ATAQUE                  |" << endl;
                        cout << "========================================" << endl;
                        cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                        cout << "| El enemigo recibe dano.              |" << endl;
                        cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                        cout << "========================================" << endl << endl;
                    }
                 break;
        }

        default:
        {
            cout << endl;
            cout << "========================================" << endl;
            cout << "|            OPCION INVALIDA           |" << endl;
            cout << "========================================" << endl;
            cout << "| No elegiste un ataque valido.        |" << endl;
            cout << "| Has perdido tu turno.                |" << endl;
            cout << "========================================" << endl << endl;
        }

        }
        // El enemigo contraataca 
        if (vidaPokemonEnemigo > 0)
        {
        pokemon.vida -= atkPokemonEnemigo;
        cout << endl;
        cout << "========================================" << endl;
        cout << "|         CONTRAATAQUE ENEMIGO         |" << endl;
        cout << "========================================" << endl;
        cout << "| El enemigo ha contraatacado!         |" << endl;
        cout << "| " << pokemon.nombre << " recibe " << atkPokemonEnemigo << " de dano." << endl;
        cout << "| Vida actual de " << pokemon.nombre << ": " << pokemon.vida << " HP" << endl;
        cout << "========================================" << endl << endl;
        }
        if (vidaPokemonEnemigo <=0){

            cout << endl;
            cout << "========================================" << endl;
            cout << "|              VICTORIA                |" << endl;
            cout << "========================================" << endl;
            cout << "| Has vencido al enemigo!              |" << endl;
            cout << "| " << pokemon.nombre << " se ha regenerado!       |" << endl;
            cout << "| +5 HP                                |" << endl;
            cout << "| +10 EXP                              |" << endl;
            cout << "========================================" << endl << endl;

            pokemon.vida += 5;
            pokemon.experiencia += 10;
            if (pokemon.experiencia >= 30){
                pokemon.nivel++;
                pokemon.vida += 10;
                pokemon.fuerza += 5;
            cout << endl;
            cout << "========================================" << endl;
            cout << "|             NIVEL AUMENTADO          |" << endl;
            cout << "========================================" << endl;
            cout << "| " << pokemon.nombre << " ha subido de nivel!     |" << endl;
            cout << "| Vida aumentada en +10                |" << endl;
            cout << "| Fuerza aumentada en +5               |" << endl;
            cout << "========================================" << endl << endl;
            }
            else
            {
            MostrarPokemon(pokemon);
            }
            return;
        }

        if (pokemon.vida <=0) {

            cout << endl;
            cout << "========================================" << endl;
            cout << "|              DERROTA                 |" << endl;
            cout << "========================================" << endl;
            cout << "| Tu Pokemon ya no puede continuar.    |" << endl;
            cout << "| Has sido derrotado.                  |" << endl;
            cout << "| Fin del juego.                       |" << endl;
            cout << "========================================" << endl << endl;
        return; 
            }
    }
}
