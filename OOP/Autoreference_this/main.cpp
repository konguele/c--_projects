//Destructor de Objetos

#include <iostream>
#include <string>
#include "Perro.h"

using namespace std;

int main(int argc, char** argv){
    Perro perro1("Lucca","Pomeranian");

    perro1.mostrarDatos();
    perro1.jugar();

    Perro* perro2 = new Perro("Stitch","French Bulldog");
    perro2->jugar();

    delete perro2;


    return 0;
}
