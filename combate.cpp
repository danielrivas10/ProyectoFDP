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
// Ataques especiales tienen 10 de daño más que el daño base
            case 'A':
        {
                if (pokemon.nombre == "Squirtle")
                {
                    pokemon.fuerza = pokemon.fuerza;
                    ataque = "Pistola agua";
                    vidaPokemonEnemigo -= pokemon.fuerza;
                        if (vidaPokemonEnemigo <= 0)
                        {
                            vidaPokemonEnemigo = 0;
                        }
                        
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
                        pokemon.fuerza = pokemon.fuerza;
                        ataque = "Ascuas";
                        vidaPokemonEnemigo -= pokemon.fuerza;
                        if (vidaPokemonEnemigo <= 0)
                        {
                            vidaPokemonEnemigo = 0;
                        }
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
                                    pokemon.fuerza = pokemon.fuerza;
                                    ataque = "Latigo Cepa";
                                    vidaPokemonEnemigo -= pokemon.fuerza;
                                    if (vidaPokemonEnemigo <= 0)
                        {
                            vidaPokemonEnemigo = 0;
                        }
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
                    pokemon.fuerza = pokemon.fuerza;
                    ataque = "Pistola agua";
                    vidaPokemonEnemigo -= pokemon.fuerza;
                    if (vidaPokemonEnemigo <= 0)
                        {
                            vidaPokemonEnemigo = 0;
                        }
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
                        pokemon.fuerza = pokemon.fuerza;
                        ataque = "Ascuas";
                        vidaPokemonEnemigo -= pokemon.fuerza;
                        if (vidaPokemonEnemigo <= 0)
                        {
                            vidaPokemonEnemigo = 0;
                        }
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
                            pokemon.fuerza = pokemon.fuerza;
                            ataque = "Latigo Cepa";
                            vidaPokemonEnemigo -= pokemon.fuerza;
                            if (vidaPokemonEnemigo <= 0)
                        {
                            vidaPokemonEnemigo = 0;
                        }
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
                    pokemon.fuerza = pokemon.fuerza - 5;
                    ataque = "Burbuja";
                    vidaPokemonEnemigo -= pokemon.fuerza;
                    if (vidaPokemonEnemigo <= 0)
                        {
                            vidaPokemonEnemigo = 0;
                        }
                    cout << endl;
                    cout << "========================================" << endl;
                    cout << "|              ATAQUE                  |" << endl;
                    cout << "========================================" << endl;
                    cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                    cout << "| El enemigo recibe dano.              |" << endl;
                    cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                    cout << "========================================" << endl << endl;
                    pokemon.fuerza = pokemon.fuerza + 5;
                }
                    else if (pokemon.nombre == "Charmander")   
                    {
                        pokemon.fuerza = pokemon.fuerza + 10;
                        ataque = "Lanzallamas";
                        vidaPokemonEnemigo -= pokemon.fuerza;
                        if (vidaPokemonEnemigo <= 0)
                        {
                            vidaPokemonEnemigo = 0;
                        }
                        cout << endl;
                        cout << "========================================" << endl;
                        cout << "|              ATAQUE                  |" << endl;
                        cout << "========================================" << endl;
                        cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                        cout << "| El enemigo recibe dano.              |" << endl;
                        cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                        cout << "========================================" << endl << endl;
                        pokemon.fuerza = pokemon.fuerza - 10;
                    }
                        else if (pokemon.nombre == "Bulbasaur")
                        {
                            ataque = "Hoja Afilada";
                            pokemon.fuerza = pokemon.fuerza;
                            vidaPokemonEnemigo -= pokemon.fuerza + 4;
                            if (vidaPokemonEnemigo <= 0)
                        {
                            vidaPokemonEnemigo = 0;
                        }
                            cout << endl;
                            cout << "========================================" << endl;
                            cout << "|              ATAQUE                  |" << endl;
                            cout << "========================================" << endl;
                            cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                            cout << "| El enemigo recibe dano.              |" << endl;
                            cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                            cout << "========================================" << endl << endl;
                            pokemon.fuerza = pokemon.fuerza - 4;
                        }
                break;
        }

        case 'b':
        {
            if (pokemon.nombre == "Squirtle")
            {
                pokemon.fuerza = pokemon.fuerza - 5;
                ataque = "Burbuja";
                vidaPokemonEnemigo -= pokemon.fuerza;
                if (vidaPokemonEnemigo <= 0)
                        {
                            vidaPokemonEnemigo = 0;
                        }
                cout << endl;
                cout << "========================================" << endl;
                cout << "|              ATAQUE                  |" << endl;
                cout << "========================================" << endl;
                cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                cout << "| El enemigo recibe dano.              |" << endl;
                cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                cout << "========================================" << endl << endl;
                pokemon.fuerza = pokemon.fuerza + 5;;
            }
                    else if (pokemon.nombre == "Charmander")   
                    {
                        pokemon.fuerza = pokemon.fuerza + 10;
                        ataque = "Lanzallamas";
                        vidaPokemonEnemigo -= pokemon.fuerza;
                        if (vidaPokemonEnemigo <= 0)
                        {
                            vidaPokemonEnemigo = 0;
                        }
                        cout << endl;
                        cout << "========================================" << endl;
                        cout << "|              ATAQUE                  |" << endl;
                        cout << "========================================" << endl;
                        cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                        cout << "| El enemigo recibe dano.              |" << endl;
                        cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                        cout << "========================================" << endl << endl;
                        pokemon.fuerza = pokemon.fuerza - 10;
                    }
                        else if (pokemon.nombre == "Bulbasaur")
                        {
                            pokemon.fuerza = pokemon.fuerza + 4;
                            ataque = "Hoja Afilada";
                            vidaPokemonEnemigo -= pokemon.fuerza;
                            if (vidaPokemonEnemigo <= 0)
                        {
                            vidaPokemonEnemigo = 0;
                        }
                            cout << endl;
                            cout << "========================================" << endl;
                            cout << "|              ATAQUE                  |" << endl;
                            cout << "========================================" << endl;
                            cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                            cout << "| El enemigo recibe dano.              |" << endl;
                            cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                            cout << "========================================" << endl << endl;
                            pokemon.fuerza = pokemon.fuerza - 4;
                        }
                break;
        }

        case 'C':
        {
            if (pokemon.nombre == "Squirtle")
            {
                pokemon.fuerza = pokemon.fuerza + 2;
                ataque = "Placaje";
                vidaPokemonEnemigo -= pokemon.fuerza;
                if (vidaPokemonEnemigo <= 0)
                        {
                            vidaPokemonEnemigo = 0;
                        }
                cout << endl;
                cout << "========================================" << endl;
                cout << "|              ATAQUE                  |" << endl;
                cout << "========================================" << endl;
                cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                cout << "| El enemigo recibe dano.              |" << endl;
                cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                cout << "========================================" << endl << endl;
                pokemon.fuerza = pokemon.fuerza - 2;
            }
                else if (pokemon.nombre == "Charmander")
                {
                    pokemon.fuerza = pokemon.fuerza;
                    ataque = "Araniazo";
                    vidaPokemonEnemigo -= pokemon.fuerza;
                    if (vidaPokemonEnemigo <= 0)
                        {
                            vidaPokemonEnemigo = 0;
                        }
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
                         pokemon.fuerza = pokemon.fuerza + 10;
                        ataque = "Drenadoras";
                        vidaPokemonEnemigo -= pokemon.fuerza;
                        pokemon.vida += vidaPokemonEnemigo * 0.5;
                        if (vidaPokemonEnemigo <= 0)
                        {
                            vidaPokemonEnemigo = 0;
                        }
                        cout << endl;
                        cout << "========================================" << endl;
                        cout << "|              ATAQUE                  |" << endl;
                        cout << "========================================" << endl;
                        cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                        cout << "| El enemigo recibe dano.              |" << endl;
                        cout << "| Bulbasaur recupera vida!             |" << endl;
                        cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                        cout << "========================================" << endl << endl;
                        pokemon.fuerza = pokemon.fuerza - 10;
                    }
                break;
        }

        case 'c':
        {
            if (pokemon.nombre == "Squirtle")
            {
                pokemon.fuerza = pokemon.fuerza + 2;
                ataque = "Placaje";
                vidaPokemonEnemigo -= pokemon.fuerza;
                if (vidaPokemonEnemigo <= 0)
                        {
                            vidaPokemonEnemigo = 0;
                        }
                cout << endl;
                cout << "========================================" << endl;
                cout << "|              ATAQUE                  |" << endl;
                cout << "========================================" << endl;
                cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                cout << "| El enemigo recibe dano.              |" << endl;
                cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                cout << "========================================" << endl << endl;
                pokemon.fuerza = pokemon.fuerza - 2;
            }
                else if (pokemon.nombre == "Charmander")
                {
                    pokemon.fuerza = pokemon.fuerza;
                    ataque = "Araniazo";
                    vidaPokemonEnemigo -= pokemon.fuerza;
                    if (vidaPokemonEnemigo <= 0)
                        {
                            vidaPokemonEnemigo = 0;
                        }
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
                        pokemon.fuerza = pokemon.fuerza + 10;
                        ataque = "Drenadoras";
                        vidaPokemonEnemigo -= pokemon.fuerza;
                        pokemon.vida += vidaPokemonEnemigo * 0.5;
                        if (vidaPokemonEnemigo <= 0)
                        {
                            vidaPokemonEnemigo = 0;
                        }
                        cout << endl;
                        cout << "========================================" << endl;
                        cout << "|              ATAQUE                  |" << endl;
                        cout << "========================================" << endl;
                        cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                        cout << "| El enemigo recibe dano.              |" << endl;
                        cout << "| Bulbasaur recupera vida!             |" << endl;
                        cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                        cout << "========================================" << endl << endl;
                        pokemon.fuerza = pokemon.fuerza - 10;
                    }
            break;
        }

        case 'D':
        {
            if (pokemon.nombre == "Squirtle")
            {
                pokemon.fuerza = pokemon.fuerza + 10;
                ataque = "Hidrobomba";
                vidaPokemonEnemigo -= pokemon.fuerza;
                if (vidaPokemonEnemigo <= 0)
                        {
                            vidaPokemonEnemigo = 0;
                        }
                cout << endl;
                cout << "========================================" << endl;
                cout << "|              ATAQUE                  |" << endl;
                cout << "========================================" << endl;
                cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                cout << "| Es un golpe muy poderoso!            |" << endl;
                cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                cout << "========================================" << endl << endl;
                pokemon.fuerza = pokemon.fuerza - 10;
            }
                else if (pokemon.nombre == "Charmander")
                {
                    pokemon.fuerza = pokemon.fuerza + 2;
                    ataque = "Giro Fuego";
                    vidaPokemonEnemigo -= pokemon.fuerza;
                    if (vidaPokemonEnemigo <= 0)
                        {
                            vidaPokemonEnemigo = 0;
                        }
                    cout << endl;
                    cout << "========================================" << endl;
                    cout << "|              ATAQUE                  |" << endl;
                    cout << "========================================" << endl;
                    cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                    cout << "| Las llamas rodean al enemigo!        |" << endl;
                    cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                    cout << "========================================" << endl << endl;
                    pokemon.fuerza = pokemon.fuerza - 2;
                }
                    else if (pokemon.nombre == "Bulbasaur") 
                    {
                        pokemon.fuerza = pokemon.fuerza;
                        ataque = "Placaje";
                        vidaPokemonEnemigo -= pokemon.fuerza;
                        if (vidaPokemonEnemigo <= 0)
                        {
                            vidaPokemonEnemigo = 0;
                        }
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
                pokemon.fuerza = pokemon.fuerza + 10;
                ataque = "Hidrobomba";
                vidaPokemonEnemigo -= pokemon.fuerza;
                if (vidaPokemonEnemigo <= 0)
                        {
                            vidaPokemonEnemigo = 0;
                        }
                cout << endl;
                cout << "========================================" << endl;
                cout << "|              ATAQUE                  |" << endl;
                cout << "========================================" << endl;
                cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                cout << "| Es un golpe muy poderoso!            |" << endl;
                cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                cout << "========================================" << endl << endl;
                pokemon.fuerza = pokemon.fuerza - 10;
            }
                else if (pokemon.nombre == "Charmander")
                {
                    pokemon.fuerza = pokemon.fuerza + 2;
                    ataque = "Giro Fuego";
                    vidaPokemonEnemigo -= 20;
                    if (vidaPokemonEnemigo <= 0)
                        {
                            vidaPokemonEnemigo = 0;
                        }
                    cout << endl;
                    cout << "========================================" << endl;
                    cout << "|              ATAQUE                  |" << endl;
                    cout << "========================================" << endl;
                    cout << "| " << pokemon.nombre << " utiliza " << ataque << "!" << endl;
                    cout << "| Las llamas rodean al enemigo!        |" << endl;
                    cout << "| Vida enemiga actual: " << vidaPokemonEnemigo << " HP" << endl;
                    cout << "========================================" << endl << endl;
                    pokemon.fuerza = pokemon.fuerza - 2;
                }
                    else if (pokemon.nombre == "Bulbasaur") 
                    {
                        pokemon.fuerza = pokemon.fuerza;
                        ataque = "Placaje";
                        vidaPokemonEnemigo -= pokemon.fuerza;
                        if (vidaPokemonEnemigo <= 0)
                        {
                            vidaPokemonEnemigo = 0;
                        }
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
            if (pokemon.vida <= 0)
            {
                pokemon.vida = 0;
            } 
        cout << endl;
        cout << "========================================" << endl;
        cout << "|         CONTRAATAQUE ENEMIGO         |" << endl;
        cout << "========================================" << endl;
        cout << "| El enemigo ha contraatacado!         |" << endl;
        cout << "| " << pokemon.nombre << " recibe " << atkPokemonEnemigo << " de dano." << endl;
        cout << "| Vida actual de " << pokemon.nombre << ": " << pokemon.vida << " HP" << endl;
        cout << "========================================" << endl << endl;
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
            pokemon.vida = 0;
        return; 
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
                pokemon.experiencia = 0;
            cout << endl;
            cout << "========================================" << endl;
            cout << "|             NIVEL AUMENTADO          |" << endl;
            cout << "========================================" << endl;
            cout << "| " << pokemon.nombre << " ha subido de nivel!     |" << endl;
            cout << "| Vida aumentada en +10                |" << endl;
            cout << "| Fuerza aumentada en +5               |" << endl;
            cout << "========================================" << endl << endl;

            MostrarPokemon(pokemon);
            }
            else
            {
            MostrarPokemon(pokemon);
            }
            return;
        }

    }
}
