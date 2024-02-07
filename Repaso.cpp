#include <iostream>
using namespace std;
#define FRIEND 1; // Variable Global
#define PI 3.1416;

int main(void)
{
    /*Repaso
    Tipos de variables:
    <vector>*/

    /*char name[20]; // Hacer cuando la variable sea tipo CHAR
    int num1 = 5;
    int num2 = 15;
    num1 = 5;
    double pi;
    float num;
    num = 3.8;
    bool estado;
    estado = false;

    float res;
    res = num1 + num2;
    res = res + num;
    res = res * 2;
    cout << res << endl;
    cout << "El valor de PI es: " << PI;

    const float IVA = 19.02;
    cout << "El valor del IVA es: " << IVA;*/

    /*Condicional Simple
    if (condicion a evaluar)  por ejemplo x <=10 Operador de comparacion
   {
        ------------------------
        Bloque de instrucciones
        ------------------------

   }*/
    /*int resultado = 0;
    cout << "Cuanto es 39+50? : ";
    cin >> resultado;
    if (resultado == 89)
    {
        cout << "Respuesta correcta!! \n";
    }else{
         cout << "Respuesta incorrecta \n";
    }
    system ("PAUSE");
    cout << "Por favor escoge la opcion a ejecurtar: (1: Suma, 2: Resta, 3: Multiplicacion, 4: Division)";

    */

    int oper = 0;
    cin >> oper;

    int num1;
    int num2;
    cin >> num1;
    cin >> num2;
    int Suma;
    int Resta;
    int Multiplicacion;
    int Division;
    
    switch (oper)
    {
    case 1:
        int suma = num1 + num2;
        break;
    case 2:
        int resta = num1 - num2;
        break;
    case 3:
        int multiplicacion = num1 * num2;
        break;
    case 4:
        int division = num1 / num2;
        break;
    default:
        cout << "prueba" << endl;
        break;
    }

    return 0;
}
