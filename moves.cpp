#include <iostream>
#include <string>
#include "moves.h"

using namespace std;

void MostrarPokemon(Pokemon& pokemon){
    cout << endl;
    cout << "========================================" << endl;
    cout << "|        ESTADISTICAS DEL POKEMON      |" << endl;
    cout << "========================================" << endl;
    cout << " Pokemon elegido: " << pokemon.nombre << endl;
    cout << " Vida:            " << pokemon.vida << endl;
    cout << " Experiencia:     " << pokemon.experiencia << endl;
    cout << " Fuerza:          " << pokemon.fuerza << endl;
    cout << " Nivel:           " << pokemon.nivel << endl;
    cout << "========================================" << endl; 
<<<<<<< HEAD

    if (pokemon.nombre == "Squirtle")
    {
        cout << R"(             _,........__
            ,-'            "`-.
          ,'                   `-.
        ,'                        \
      ,'                           .
      .'\               ,"".       `
     ._.'|             / |  `       \
     |   |            `-.'  ||       `.
     |   |            '-._,'||       | \
     .`.,'             `..,'.'       , |`-.
     l                       .'`.  _/  |   `.
     `-.._'-   ,          _ _'   -" \  .     `
`."""""'-.`-...,---------','         `. `....__.
.'        `"-..___      __,'\          \  \     \
\_ .          |   `""""'    `.           . \     \
  `.          |              `.          |  .     L
    `.        |`--...________.'.        j   |     |
      `._    .'      |          `.     .|   ,     |
         `--,\       .            `7""' |  ,      |
            ` `      `            /     |  |      |    _,-'"""`-.
             \ `.     .          /      |  '      |  ,'          `.
              \  v.__  .        '       .   \    /| /              \
               \/    `""\"""""""`.       \   \  /.''                |
                `        .        `._ ___,j.  `/ .-       ,---.     |
                ,`-.      \         ."     `.  |/        j     `    |
               /    `.     \       /         \ /         |     /    j
              |       `-.   7-.._ .          |"          '         /
              |          `./_    `|          |            .     _,'
              `.           / `----|          |-............`---'
                \          \      |          |
               ,'           )     `.         |
                7____,,..--'      /          |
                                  `---.__,--.'mh
)";
    }
    else if (pokemon.nombre == "Charmander")
    {
        cout << R"(                     _.--""`-..
                    ,'          `.
                  ,'          __  `.
                 /|          " __   \
                , |           / |.   .
                |,'          !_.'|   |
              ,'             '   |   |
             /              |`--'|   |
            |                `---'   |
            .   ,                   |                       ,".
              ._     '           _'  |                    , ' \ `
          `.. `.`-...___,...---""    |       __,.        ,`"   L,|
          |, `- .`._        _,-,.'   .  __.-'-. /        .   ,    \
        -:..     `. `-..--_.,.<       `"      / `.        `-/ |   .
          `,         """"'     `.              ,'         |   |  ',,
            `.      '            '            /          '    |'. |/
              `.   |              \       _,-'           |       ''
               `._'               \   '"\                .      |
                  |                '     \                `._  ,'
                   |                 '     \                 .'|
                   |                 .      \                | |
                   |                 |       L              ,' |
                    `                 |       |             /   '
                    \                |       |           ,'   /
                  ,' \               |  _.._ ,-..___,..-'    ,'
                 /     .             .      `!             ,j'
                /       `.          /        .           .'/
               .          `.       /         |        _.' .'
                `.          7`'---'          |------"'_.'
               _,.`,_     _'                ,''-----"'
           _,-_    '       `.     .'      ,\
           -" /`.         _,'     | _  _  _.|
            ""--'---"""""'        `' '! |! /
                                    `" " -' mh
)";
    }
    else if (pokemon.nombre == "Bulbasaur")
    {
        cout << R"(                                           /
                        _,.------....___,.' ',.-.
                     ,-'          _,.--"        |
                   ,'         _.-'              .
                  /   ,     ,'                   `
                 .   /     /                     ``.
                 |  |     .                       \.\
       ____      |___._.  |       __               \ `.
     .'    `---""       ``"-.--"'`  \               .  \
    .  ,            __               `              |   .
    `,'         ,-"'  .               \             |    L
   ,'          '    _.'                -._          /    |
  ,`-.    ,".   `--'                      >.      ,'     |
 . .'\'   `-'       __    ,  ,-.         /  `.__.-      ,'
 ||:, .           ,'  ;  /  / \ `        `.    .      .'/
 j|:D  \          `--'  ' ,'_  . .         `.__, \   , /
/ L:_  |                 .  "' :_;                `.'.'
.    ""'                  """""'                    V
 `.                                 .    `.   _,..  `
   `,_   .    .                _,-'/    .. `,'   __  `
    ) \`._        ___....----"'  ,'   .'  \ |   '  \  .
   /   `. "`-.--"'         _,' ,'     `---' |    `./  |
  .   _  `""'--.._____..--"   ,             '         |
  | ." `. `-.                /-.           /          ,
  | `._.'    `,_            ;  /         ,'          .
 .'          /| `-.        . ,'         ,           ,
 '-.__ __ _,','    '`-..___;-...__   ,.'\ ____.___.'
 `"^--'..'   '-`-^-'"--    `-^-'`.''"""""`.,^.`.--' mh
)";
    }

=======
>>>>>>> 338b1c284155d757a7237a17bc16ac9f1fe64580
    
}

void MovimientosPokemon(const Pokemon& pokemon)
{
    string ataque;
    cout << endl;
    cout << "========================================" << endl;
    cout << "|           LISTA DE ATAQUES           |" << endl;
    cout << "========================================" << endl;
    cout << " Ataques de: " << pokemon.nombre << endl;
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
