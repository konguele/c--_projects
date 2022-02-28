/*Guardián de inclusión múltiple --> Cuando tengamos muchas clases apuntando a una nos aparecerá un
error, en ese caso necesitaremos poner un guardían de inclusión múltiple que es con los comandos
ifndef y define al principio, al final de todo se añade un final con el comando endif*/

#ifndef VEHICULO_H 
#define VEHICULO_H  

#include<iostream>
using namespace std;

class Vehiculo{
    private:
        string marca;
        string color;

    protected:
        string modelo;

        string getModelo(){
            return modelo;
        }

    public:
        Vehiculo(string marca, string color, string modelo){
            this->marca = marca;
            this->color = color;
            this->modelo = modelo;
        }

        void setColor(string color){
            this->color = color;
        }

        string getMarca(){
            return marca;
        }

        string getColor(){
            return color;
        }
};

#endif