#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 

    int resultado = rand() % 2; 

    if (resultado == 0) {

        cout << "Tu resultado es Cara!!!"<<endl;
        
        
    } else {
        cout << "Tu resultado es Sello!!!"<<endl;
    }

    return 0;
}