//Sobrecarga de Funciones miembro

#include <iostream>
#include "Persona.h"

using namespace std;

int main(int argc, char** argv){
    Persona* persona1 = new Persona("Juanjo",33);
    persona1->correr();

    Persona* persona2 = new Persona("1122334455");
    persona2->correr(4);

    return 0;
}