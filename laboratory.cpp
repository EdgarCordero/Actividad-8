#include "laboratory.h"

using namespace std;

Laboratory::Laboratory()
{
    cont = 0;
}

void Laboratory::addComputer(const Computer &c){

    if (cont < 5){

        arreglo [cont] = c;
        cont++;
    }
    else {
        cout<<"Arreglo lleno"<<endl;
    }

}

void Laboratory::mostrar(){
    cout << left;
    cout << setw(17) << "NOMBRE EQUIPO";
    cout << setw(13) << "SISTEMA";
    cout << setw(10) << "CPU";
    cout << setw(5) << "RAM";
    cout << endl;

    for(int i = 0; i<cont; i++){
        Computer &p = arreglo[i];
        cout << p;
    }

}
