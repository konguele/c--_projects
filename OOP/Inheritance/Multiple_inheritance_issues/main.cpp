/*La herencia múltiple planea diferentes problemas, tales como la ambigüedad por el uso de nombres
idénticos en diferentes clases base.

Los problemas que se pueden presentar cuando se diseñan clases con herencia múltiple son:
    - Colisiones con nombres de diferentes clases base (dos o más clases base tienen el mismo
    identificador para algún elemento de su interfaz. Se resuelve con el operador de ámbito ::).
    - Herencia repetida de una misma clase base (Una clase puede heredar indirectamente dos copias
    de una clase base. Se resuelve con el operador de resolución ámbito ::). */

#include<iostream>
#include "ClaseDerivada.h"
using namespace std;

int main(int argc,char** argv){
    ClaseDerivada* ob1 = new ClaseDerivada(5,10,15);

    cout<<"X: "<<ob1->getX()<<endl;

    delete ob1;
    return 0;
}