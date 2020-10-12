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

    for(int i = 0; i<cont; i++){
        Computer &p = arreglo[i];
        cout<<"Nombre: "<< p.getName()<<endl;
        cout<<"Sistema Operativo: "<< p.getSystem()<<endl;
        cout<<"Cpu: "<< p.getCpu()<<endl;
        cout<<"Ram: "<< p.getRam()<<endl;
        cout<<endl;
    }

}
