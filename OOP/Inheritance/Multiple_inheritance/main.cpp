/*Herencia Múltiple: Es un tipo de herencia en la que una clase hereda los miembros de más de una
clase base. Es decir, existen múltiples clases base (padres) para la clase derivada (hija). */

#include <iostream>
#include "HidroAvion.h"
using namespace std;

int main(int argc,char** argv){
    HidroAvion* ob1 = new HidroAvion("Veloz12","HA99","123OP");

    ob1->mostrarDatos();

    cout<<endl;

    ob1->indicarAvion();
    ob1->indicarBarco();

    delete ob1;
    return 0;
}