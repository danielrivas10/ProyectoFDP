#include <iostream>
using namespace std;

string name, bo, Name_pokemon;
string x, op;
string Moves_s[4] = {"1. Pistola Agua: Ataque a distancia. Resta 15 HP al enemigo",
                     "2. Burbuja: Reduce la velocidad y resta 10 HP al enemigo",
                     "3. Placaje: Ataque fisico. Resta 12 HP al enemigo",
                     "4. Hidrobomba: Ataque especial. Resta 30 HP al enemigo"};
string Moves_c[4] = {"1. Ascuas: Ataque de fuego. Resta 15 HP al enemigo",
                     "2. Lanzallamas: Ataque intenso. Resta 30 HP al enemigo ",
                     "3. Arañazo: Ataque rapido. Resta 10 HP al enemigo",
                     "4. Giro Fuego: Atrapa al enemigo y resta 20 HP"};
string Moves_b[4] = {"1. Latigo Cepa: Ataque con lianas. Resta 15 HP al enemigo",
                     "2. Hoja Afilada: Ataque rapido. Resta 20 HP al enemigo",
                     "3. Drenadoras: Absorbe energia y resta 10 HP al enemigo",
                     "4. Placaje: Ataque fisico. Resta 12 HP al enemigo"};

void menu();
void show_moves();
void show_description();
void bienvenida();
int main()
{
    cout << "Bienvenido a pokemon xyz " << endl;
    cout << "Presione cualquier boton para continuar" << endl;

    cin >> bo;
    cout << "En la tierra perdida de Kanto, habia un joven que buscaba ser el mejor de todos. " << endl
         << "Y su nombre era: ";
    cin >> name;
    cout << endl;

    cout << "El doctor Osaka le dijo: Hola joven " << name << ". He oido que quieres comenzar con tu aventura pokemon. Pero antes de necesitas tu primer pokemon." << endl
         << "Presione: " << endl
         << "1 para seleccionar a Squirtle " << endl
         << "2 para seleccionar a Charmander " << endl
         << "3 para seleccionar a Bulbasaur" << endl;
    cin >> x;

    while (x != "1" && x != "2" && x != "3")
    {
        cout << "Selecciona una opcion posible" << endl;
        cout << "Presione: " << endl
             << "1 para seleccionar a Squirtle " << endl
             << "2 para seleccionar a Charmander " << endl
             << "3 para seleccionar a Bulbasaur " << endl;
        cin >> x;
    }

    if (x == "1")
    {
        Name_pokemon = "Squirtle";
        bienvenida();
        do
        {
            menu();
        } while (op != "x");
    }

    else if (x == "2")
    {
        Name_pokemon = "Charmander";
        bienvenida();
        do
        {
            menu();
        } while (op != "x");
    }

    else if (x == "3")
    {
        Name_pokemon = "Bulbasaur";
        bienvenida();
        do
        {
            menu();
        } while (op != "x");
    }
    cout << "Dr Osaka: Muy bien joven " << name << ". Ahora que ya conoces a tu pokemon y sus movimientos, es hora de comenzar tu aventura. ¡Buena suerte!" << endl;
    return 0;
}

void menu()
{
    cout << "\n"
         << endl;
    cout << "=================================================" << endl;
    cout << Name_pokemon << " seleccionado." << endl;
    cout << "Presiona A para ver tus movimientos." << endl;
    cout << "Presiona B para ver la descripcion de tu pokemon" << endl;
    cout << "Si estás listo para luchar, presiona x" << endl;
    cout << "=================================================" << endl;
    cin >> op;

    while (op != "A" && op != "B" && op != "x")
    {
        cout << "Ingrese una accion valida" << endl;
        cin >> op;
    }

    if (op == "A")
    {
        show_moves();
    }
    else if (op == "B")
    {
        show_description();
    }
}

void show_moves()
{
    for (int i = 0; i <= 3; i++)
    {
        if (Name_pokemon == "Squirtle")
            cout << Moves_s[i] << endl;
        else if (Name_pokemon == "Charmander")
        {
            cout << Moves_c[i] << endl;
        }
        else if (Name_pokemon == "Bulbasaur")
        {
            cout << Moves_b[i] << endl;
        }
    }
    cout << "Si deseas regresar al menu, presiona z" << endl;
    cin >> op;
    while (op != "z")
    {
        cout << "Ingrese una accion valida" << endl;
        cin >> op;
    }
}

void show_description()
{
    if (Name_pokemon == "Squirtle")
    {
        cout << Name_pokemon << " es un pokemon tipo agua muy alegre, sin Sin embargo no dejes que su encanto te engane, ya que es capaz de utilizar multiples ataques tipo agua." << endl;
    }
    else if (Name_pokemon == "Charmander")
    {
        cout << Name_pokemon << " es un pokemon tipo fuego, es un pokemon muy valiente y leal a su entrenador. Es capaz de utilizar multiples ataques tipo fuego." << endl;
    }
    else if (Name_pokemon == "Bulbasaur")
    {
        cout << Name_pokemon << " es un pokemon tipo planta, es un pokemon muy tranquilo y pacifico. Es capaz de utilizar multiples ataques tipo planta." << endl;
    }
    cout << "Si deseas regresar al menu, presiona z" << endl;
    cin >> op;
    while (op != "z")
    {
        cout << "Ingrese una accion valida" << endl;
        cin >> op;
    }
    if (op == "z")
    {
        menu();
    }
}

void bienvenida()
{
    cout << "Usted ha elegido a " << Name_pokemon << endl;
    cout << "Dr Osaka: Haz elegido muy bien joven " << name << ". Ahora comencemos con lo basico de un combate." << endl;
}
