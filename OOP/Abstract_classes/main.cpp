/*Clases Abstractas:
    - Se utilizan sólo como clase base.
    - No se pueden instanciar objetos.
    - Sirven para proporcionar una clase base apropiada a partir de la cual heredan otras clases.

La función virtual:
    - Es el que necesitamos definir, pero no podemos implementar en la clase base porque es 
    demasiado genérico
*/

#include<iostream>
#include "Planta.h"
#include "AnimalCarnivoro.h"
#include "AnimalHerbivoro.h"
using namespace std;

int main(int argc,char** argv){
    Planta* planta1 = new Planta();

    planta1->alimentarse();
    AnimalCarnivoro* animal1 = new AnimalCarnivoro();

    animal1->alimentarse();

    AnimalHerbivoro* animal2 = new AnimalHerbivoro();

    animal2->alimentarse();


    return 0;
}