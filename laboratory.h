#ifndef LABORATORY_H
#define LABORATORY_H

#include "computer.h"


class Laboratory
{
    private:
        Computer arreglo[5];
        int cont;

    public:
        Laboratory();

        void addComputer (const Computer &c);
        void mostrar();

};

#endif // LABORATORY_H
