//Funciones amigas (Friend)

#include<iostream>
#include "Personaje.h"

using namespace std;

//Función para modificar el ataque y defensa de un objeto personaje
void modificar(Personaje &p,int at,int def){ //Se lo pasamos por referencia para modificar el objeto en sí mismo
    p.ataque = at;
    p.defensa = def;
}

int main(int argc,char** argv){
    Personaje* principal = new Personaje(100,90);

    principal->mostrarDatos();

    modificar(*principal,60,50);

    principal->mostrarDatos();

    return 0;
}