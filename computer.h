#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include <string>

class Computer
{
    private:

        std::string name;
        std::string system;
        std::string cpu;
        int ram;


    public:
        Computer();
        Computer(const std::string &name,
                 const std::string &system,
                 const std::string &cpu,
                 const int &ram
                 );

        void setName (const std::string &n);
        void setSystem (const std::string &s);
        void setCpu (const std::string &c);
        void setRam (const int &r);

        std::string getName ();
        std::string getSystem();
        std::string getCpu();
        int getRam();

};

#endif // COMPUTER_H
