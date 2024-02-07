
#include <iostream>
using namespace std;
int main()
{

    string usuario;
    string contrasena;
    string usuario2 = "Danielito07";
    string contrasena2 = "DeibyyDaniel<3";

    cout << "Ingrese el usuario: " << endl;
    cin >> usuario;

    if (usuario == usuario2)
    {

        cout << "El usuario es correcto, por favor ingrese su contraseña." << endl;
    }
    else
    {
        cout << "El usuario ingresado no es correcto" << endl;
        return 0;
    }

    cout << "Ingrese su contraseña: " << endl;
    cin >> contrasena;

    if (contrasena == contrasena2)
    {

        cout << "La contraseña es correcta, usted ha ingresado con exito" << endl;
    }
    else
    {

        cout << "La contraseña es incorrecta." << endl;
    }

    return 0;
}
