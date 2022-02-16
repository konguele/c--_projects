//Clases y objetos de programación orientada a objetos. Tengo que compilar todos los ficheros
//y después en el terminal usar el comando g++ fichero1.cpp fichero2.cpp... y se crea el archivo a.out

#include <iostream>
#include "punto.h"
using namespace std;

int main(int argc, char** argv){
    punto p1(2,1); //Creación de un objeto estático
    
    cout<<"El valor de X es: "<<p1.getX()<<endl;
    cout<<"El valor de Y es: "<<p1.getY()<<endl;

    punto* p2 = new punto(); //Creación de un objeto dinámico

    p2->setX(5); //Para objetos dinámicos se utiliza la flechita
    p2->setY(8);

    cout<<"El valor de X es: "<<p2->getX()<<endl;
    cout<<"El valor de Y es: "<<p2->getY()<<endl;
    

    return 0;
}