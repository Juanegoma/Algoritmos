#include <iostream>
using namespace std;

int main(){
    float pesoNiño;
    int edadNiño;
    int dosisVacuna;

    cout<<"Ingrese el peso de su hijo: ";
    cin>>pesoNiño;
    cout<<"Ingrese la edad de su hijo en meses: ";
    cin>>edadNiño;

    dosisVacuna=((pesoNiño+10)/(edadNiño*10))*8;

    if(edadNiño<12){
        cout<<"A su hijo le corresponden "<<dosisVacuna<<" dosis";
    }
    else
    {
        cout<<"Su hijo no es apto para recibir la Dosis";
    }




    return 0;
}