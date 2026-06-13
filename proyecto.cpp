#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Pokemon {

    string nombre, movimientos;
    int vida, experiencia, nivel, fuerza;
};

void GuardarPartida(const Pokemon& pokemon){
    ofstream archivo("datos_partida.txt");
    if (archivo.is_open()) {
        archivo << pokemon.nombre << endl;
        archivo << pokemon.vida << endl;
        archivo << pokemon.experiencia << endl;
        archivo << pokemon.nivel << endl;
        archivo << pokemon.fuerza << endl;
        archivo.close();
        cout << "Partida guardada." << endl;
    }
    else {
        cout << "No se pudo guardar la partida." << endl;
    }
}

bool CargarPartida(Pokemon& pokemon) {
    ifstream archivo("datos_partida.txt");
    if (archivo.is_open()) {
        getline(archivo, pokemon.nombre);
        archivo >> pokemon.vida;
        archivo >> pokemon.experiencia;
        archivo >> pokemon.nivel;
        archivo >> pokemon.movimientos;
        archivo.close();
        return true;

    }
    return false;
}
void MostrarPokemon(Pokemon& pokemon){
    cout << endl << "==== Estadisticas del pokemon seleccionado ====" << endl;
    cout << "Pokemon elegido: " << pokemon.nombre << endl;
    cout << "Vida: " << pokemon.vida << endl;
    cout << "Fuerza: " << pokemon.fuerza << endl;
    cout << "Experiencia: " << pokemon.experiencia << endl;
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
                        "C. Drenadoras: Roba un poco de vida y hace 30 puntos de ataque base",
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

void Combate(Pokemon& pokemon){
srand(time(0));
    int vidaPokemonEnemigo = 30 + rand() % 10;
    int atkPokemonEnemigo = 10 + rand () % 5;
    char opcion;
    string ataque;

    cout << endl << "Un Pokemon salvaje con: " << vidaPokemonEnemigo << " puntos de vida y " << atkPokemonEnemigo << " puntos de ataque " << "se acerca!" << endl;
    while (pokemon.vida > 0 && vidaPokemonEnemigo > 0) {

        // El prota ataca primero
        cout << "Selecciona un ataque: " << endl << endl;
        MovimientosPokemon (pokemon);
        cin >> opcion;

        if (opcion == 'A' || opcion == 'a'){
            if (pokemon.nombre == "Squirtle") {
                ataque = "Pistola agua";
                vidaPokemonEnemigo -= 15;
            }
                else if (pokemon.nombre == "Charmander") {
                    ataque = "Ascuas";
                    vidaPokemonEnemigo -= 15;
                }
                    else if (pokemon.nombre == "Bulbasaur") {
                        ataque = "Latigo Cepa";
                        vidaPokemonEnemigo -= 15;
                    }
        } 
        else if (opcion == 'B' || opcion == 'b'){
            if (pokemon.nombre == "Squirtle") {
                ataque = "Burbuja";
                vidaPokemonEnemigo -= 10;
            }
                else if (pokemon.nombre == "Charmander") {
                    ataque = "Lanzallamas";
                    vidaPokemonEnemigo -= 30;
                }
                    else if (pokemon.nombre == "Bulbasaur") {
                        ataque = "Hoja Afilada";
                        vidaPokemonEnemigo -= 20;
                    }
        } 
        else if (opcion == 'C' || opcion == 'c') {
            if (pokemon.nombre == "Squirtle") {
                ataque = "Placaje";
                vidaPokemonEnemigo -= 12;
            }
                else if (pokemon.nombre == "Charmander") {
                    ataque = "Araniazo";
                    vidaPokemonEnemigo -= 10;
                }
                    else if (pokemon.nombre == "Bulbasaur") {
                        ataque = "Drenadoras";
                        vidaPokemonEnemigo -= 30;
                        pokemon.vida += pokemon.fuerza % 10;
                    }
        } 
        else if (opcion == 'D' || opcion == 'd') {
            if (pokemon.nombre == "Squirtle") {
                ataque = "Hidrobomba";
                vidaPokemonEnemigo -= 30;
            }
                else if (pokemon.nombre == "Charmander") {
                    ataque = "Giro Fuego";
                    vidaPokemonEnemigo -= 20;
                }
                    else if (pokemon.nombre == "Bulbasaur") {
                        ataque = "Placaje";
                        vidaPokemonEnemigo -= 12;
                    }
        }
        cout << pokemon.nombre << " utiliza " << ataque << endl << endl;
        cout << "La vida del enemigo ha bajado a " << vidaPokemonEnemigo << "!" << endl << endl;
        if (vidaPokemonEnemigo <=0){

            cout << "Haz vencido al enemigo!" << endl << endl;
            pokemon.experiencia += 10;
            if (pokemon.experiencia >= 30){
                pokemon.nivel++;
                pokemon.vida += 10;
                pokemon.fuerza += 5;
            cout << "Haz subido de nivel! " << "Vida y fuerza aumentados!" << endl;
            }
            MostrarPokemon(pokemon);
            return;
        }

        // El enemigo ataca de vuelta (pendiente)
        pokemon.vida -= atkPokemonEnemigo;
        cout << "El enemigo ha contraatacado! " << "La vida de " << pokemon.nombre << " se reduce a " << pokemon.vida << "!" << endl << endl;

        if (pokemon.vida <=0) {

            cout << "Has sido derrotado. Fin del juego" << endl;
        return;       
        }

    }
}

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
        pokemon.vida = 30;
        pokemon.fuerza = 18;
        pokemon.nivel = 4;
        pokemon.experiencia = 0;
            MostrarPokemon(pokemon);
    }

    else if (opcion == 'B' || opcion == 'b')
    {
        pokemon.nombre = "Charmander";
        pokemon.vida = 35;
        pokemon.fuerza = 22;
        pokemon.nivel = 5;
        pokemon.experiencia = 0;
        MostrarPokemon(pokemon);
    }

    else if (opcion == 'C' || opcion == 'c')
    {
        pokemon.nombre = "Bulbasaur";
        pokemon.vida = 25;
        pokemon.fuerza = 16;
        pokemon.nivel = 3;
        pokemon.experiencia = 0;
        MostrarPokemon(pokemon);
    }

}

int main (){

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
    while (pokemon.vida > 0 || opcionmenu != 'A' || opcionmenu != 'a' || opcionmenu != 'B' || opcionmenu != 'b' || opcionmenu != 'C' || opcionmenu != 'c' || opcionmenu != 'D' || opcionmenu != 'd' || opcionmenu != 'E' || opcionmenu != 'e') {
        cout << endl << "Que deseas hacer?" << endl;
        cout << "A. Luchar\n";
        cout << "B. Guardar partida\n";
        cout << "C. Ver estadisticas de tu pokemon\n";
        cout << "D. Ver movimientos de tu pokemon\n";   
        cout << "E. Salir\n";
        cout << "Opcion: ";
        cin >> opcionmenu;
        
        if (opcionmenu == 'A' || opcionmenu == 'a'){

            Combate(pokemon);
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

return 0;
}