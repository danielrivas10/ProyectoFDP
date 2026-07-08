#include <iostream>
#include "menu.h"
#include "pokemon.h"
#include "cargar.h"
#include "guardar.h"
#include "moves.h"
#include "combate.h"
#include "elegirP.h"

using namespace std;

void Menu(){
    Pokemon pokemon;
    char opcion;
    char opcionmenu;
cout << R"(

===========================================================
   __   __  _  ___ _  _  __  _   _
  |  _ \ / _ \| |/ /  _|  \/  |/ _ \| \ | |
  | |_) | |  | | ' /| |_  | \  / | |  | |  \| |
  |  _/| |  | |  < |  __| | |\/| | |  | | . ` |
  | |    | |_| | . \| |_| |  | | |__| | |\  |
  ||     \_/||\\__||  ||\_/|| \_|

                HEROES DE KANTO
===========================================================

)" << endl;
    cout << endl;
    cout << "========================================" << endl;
    cout << "|       SIMULADOR BATALLA POKEMON      |" << endl;
    cout << "========================================" << endl;
    cout << "| Bienvenido, entrenador.              |" << endl;
    cout << "| Tu aventura esta por comenzar.       |" << endl;
    cout << "========================================" << endl;
    cout << "| Deseas cargar tu partida anterior?   |" << endl;
    cout << "| [S] Si                               |" << endl;
    cout << "| [N] No                               |" << endl;
    cout << "========================================" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    if (opcion == 's' || opcion == 'S') {
        if (CargarPartida(pokemon)){
        cout << endl;
        cout << "========================================" << endl;
        cout << "|          PARTIDA CARGADA             |" << endl;
        cout << "========================================" << endl;
        cout << "| Tus datos fueron recuperados.        |" << endl;
        cout << "| Continua tu aventura Pokemon.        |" << endl;
        cout << "========================================" << endl;
        MostrarPokemon(pokemon);
    }
    else {
        cout << endl;
        cout << "========================================" << endl;
        cout << "|         NUEVA PARTIDA                |" << endl;
        cout << "========================================" << endl;
        cout << "| No se encontro archivo guardado.     |" << endl;
        cout << "| Creando una nueva aventura...        |" << endl;
        cout << "========================================" << endl;
        ElegirPokemon(pokemon);
    }
}

    else {
        ElegirPokemon(pokemon);
    }

    while (pokemon.vida > 0 || opcionmenu!= 'A' || opcionmenu != 'a' || opcionmenu != 'B' || opcionmenu != 'b' || opcionmenu != 'C' || opcionmenu != 'c' || opcionmenu != 'D' || opcionmenu != 'd' || opcionmenu != 'E' || opcionmenu != 'e') {
        cout << endl;
        cout << "========================================" << endl;
        cout << "|              MENU PRINCIPAL          |" << endl;
        cout << "========================================" << endl;
        cout << "| Que deseas hacer?                    |" << endl;
        cout << "|                                      |" << endl;
        cout << "| [A] Luchar                           |" << endl;
        cout << "| [B] Guardar partida                  |" << endl;
        cout << "| [C] Ver estadisticas del Pokemon     |" << endl;
        cout << "| [D] Ver movimientos del Pokemon      |" << endl;
        cout << "| [E] Salir                            |" << endl;
        cout << "========================================" << endl;
        cout << "Opcion: ";
        cin >> opcionmenu;
        
        if (opcionmenu == 'A' || opcionmenu == 'a'){
            if (pokemon.vida > 0)
            {
                Combate(pokemon);
            }
            else
            {
            cout << endl;
            cout << "========================================" << endl;
            cout << "|          NO PUEDE LUCHAR             |" << endl;
            cout << "========================================" << endl;
            cout << "| Tu Pokemon no tiene fuerzas.         |" << endl;
            cout << "| Elige otra opcion del menu.          |" << endl;
            cout << "========================================" << endl;
                }
        }

        else if (opcionmenu == 'B' || opcionmenu == 'b'){

            GuardarPartida(pokemon);
        }

        else if (opcionmenu == 'C' || opcionmenu == 'c'){

            MostrarPokemon(pokemon);
        }

        else if (opcionmenu == 'D' || opcionmenu == 'd'){

            MovimientosPokemon(pokemon);
        }
        
        else if (opcionmenu == 'E' || opcionmenu == 'e'){

            cout << endl;
            cout << "========================================" << endl;
            cout << "|              HASTA LUEGO             |" << endl;
            cout << "========================================" << endl;
            cout << "| Saliendo del programa...             |" << endl;
            cout << "| Buen dia, entrenador.                |" << endl;
            cout << "========================================" << endl;
            break;
        }

        else 
        cout << endl;
        cout << "========================================" << endl;
        cout << "|            OPCION INVALIDA           |" << endl;
        cout << "========================================" << endl;
        cout << "| Esa opcion no existe.                |" << endl;
        cout << "| Intenta de nuevo.                    |" << endl;
        cout << "========================================" << endl;
}
}
