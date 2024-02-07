#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed para números aleatorios

    int opcionUsuario, opcionMaquina;

    cout << "Bienvenido al juego de Piedra, Papel o Tijeras contra la máquina!" << endl;
    cout << "Elige tu opción 1). Piedra 2). Papel 3). Tijeras" << endl;
    cin >> opcionUsuario;

    opcionMaquina = rand() % 3 + 1; 

    cout << "La máquina eligió: " << opcionMaquina << endl;

    cout << "Tú elegiste: " << opcionUsuario << endl;

    
    if (opcionUsuario == opcionMaquina) {
        cout << "¡Es un empate!" << endl;
    } else if ((opcionUsuario == 1 && opcionMaquina == 3) ||
               (opcionUsuario == 2 && opcionMaquina == 1) ||
               (opcionUsuario == 3 && opcionMaquina == 2)) {
        cout << "¡Ganaste!" << endl;
    } else {
        cout << "¡Perdiste! Intenta de nuevo." << endl;
    }

    return 0;
}