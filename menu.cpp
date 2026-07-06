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

    cout << "Bienvenido al simulador de batalla pokemon" << endl;
    cout << "Deseas cargar tu partida anterior? (s/n): ";
    cin >> opcion;

    if (opcion == 's' || opcion == 'S') {
        if (CargarPartida(pokemon)){
        cout << "Partida cargada exitosamente." << endl;
        MostrarPokemon(pokemon);
    }
    else {
        cout << "No se encontro ningun archivo de guardado. Creando nueva partida..." << endl;
        ElegirPokemon(pokemon);
    }
}

    else {
        ElegirPokemon(pokemon);
    }

    //Menu Bucle
    while (pokemon.vida > 0 || opcionmenu!= 'A' || opcionmenu != 'a' || opcionmenu != 'B' || opcionmenu != 'b' || opcionmenu != 'C' || opcionmenu != 'c' || opcionmenu != 'D' || opcionmenu != 'd' || opcionmenu != 'E' || opcionmenu != 'e') {
        cout << endl << "Que deseas hacer?" << endl;
        cout << "A. Luchar\n";
        cout << "B. Guardar partida\n";
        cout << "C. Ver estadisticas de tu pokemon\n";
        cout << "D. Ver movimientos de tu pokemon\n";   
        cout << "E. Salir\n";
        cout << "Opcion: ";
        cin >> opcionmenu;
        
        if (opcionmenu == 'A' || opcionmenu == 'a'){
            if (pokemon.vida > 0)
            {
                Combate(pokemon);
            }
            else
            {
            cout << "Tu pokemon no puede luchar mas. Elige otra opcion" << endl;
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

            cout << "Saliendo del programa. Buen dia." << endl;
            break;
        }

        else 
        cout << "Opcion no valida. Intente de nuevo:" << endl;
}
}