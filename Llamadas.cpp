#include <iostream>

using namespace std;

int main() {
  int tipoLlamada;
  int duracionLlamada;
  float precioLlamada;

  cout << "Escoja su tipo de llamada por favor (1=Fijo, 2=Celular, 3=Internacional): ";
  cin >> tipoLlamada;

  cout <<"¿Cuantos minutos ha durado su llamada?: ";
  cin >> duracionLlamada;

  if (tipoLlamada == 1) {
    precioLlamada = duracionLlamada * 200;
  } else if (tipoLlamada == 2) {
    precioLlamada = duracionLlamada * 300;
  } else if (tipoLlamada == 3) {
    precioLlamada = duracionLlamada * 500;
  } else {
    cout << "Tipo de llamada no válida." << endl;
    return 1;
  }

  cout << "A continuación le mostramos el precio de su llamada:" << endl;
  cout << "Precio: $" << precioLlamada << " (" << (tipoLlamada == 1 ? "fijo" : tipoLlamada == 2 ? "celular" : "internacional") << ")" << endl;

  return 0;
}
