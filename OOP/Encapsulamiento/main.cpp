//Visibilidad de los miembros de la clase (Encapsulamiento)

#include <iostream>
#include "punto.h"
using namespace std;

int main(int argc, char** argv){
    punto p1(2,1); //Creación de un objeto estático

    p1.x = 10; //Cambiamos el valor de x cuando queramos porque está público
    
    cout<<"El valor de X es: "<<p1.getX()<<endl;
    cout<<"El valor de Y es: "<<p1.getY()<<endl;

    punto* p2 = new punto(); //Creación de un objeto dinámico

    p2->setX(5); //Para objetos dinámicos se utiliza la flechita
    p2->setY(8);

    cout<<"El valor de X es: "<<p2->getX()<<endl;
    cout<<"El valor de Y es: "<<p2->getY()<<endl;
    

    return 0;
}