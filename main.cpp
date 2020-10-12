#include <iostream>
#include "laboratory.h"


using namespace std;

int main()
{
    Computer c01 = Computer ("Tu computadora","Windows 10","CORE i5",64);


    Computer c02;

    c02.setName("Mi Computadora");
    c02.setSystem("Lynux");
    c02.setCpu("CORE i5");
    c02.setRam(32);

    Laboratory lb;
    lb.addComputer(c01);
    lb.addComputer(c02);
    lb.mostrar();

}
