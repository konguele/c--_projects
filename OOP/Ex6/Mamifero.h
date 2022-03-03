#ifndef MAMIFERO_H
#define MAMIFERO_H

#include<iostream>
using namespace std;

class Mamifero{
    private:
        int nacimiento;
        string lugarNacimiento,raza;

    public:
        Mamifero(int nacimiento,string lugarNacimiento,string raza){
            this->nacimiento = nacimiento;
            this->lugarNacimiento = lugarNacimiento;
            this->raza = raza;
        }

        ~Mamifero(){
            
        }

        virtual string imprimirDieta()=0;

        int getNacimiento(){
            return nacimiento;
        }

        string getLugarNacimiento(){
            return lugarNacimiento;
        }

        string getRaza(){
            return raza;
        }

};

#endif