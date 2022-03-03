/*EN OOP, el polimorfismo permite que diferentes objetos respondan de modo diferente al mismo
mensaje. El polimorfismo adquiere su máxima potencia cuando se utiliza en unión de herencia.

Para poder utilizar polimorfismo en C++ se deben seguir las siguientes reglas:
    1. Crear una jerarquía de clases con las operaciones importantes definidas por las 
    funciones miembro declaradas como virtuales de la clase base.

    2. Las implementaciones específicas de las funciones virtuales se deben hacer en las clases
    derivadas. Cada clase derivada puede tener su propia versión de las funciones.
*/

#include<iostream>
#include "Poligono.h"
#include "Rectangulo.h"
#include "Triangulo.h"
using namespace std;

int main(int argc,char** argv){
    Poligono* poligonos[2];

    poligonos[0] = new Rectangulo(7,4);
    poligonos[1] = new Triangulo(3,4,4);

    for(int i=0;i<2;i++){
        cout<<"Area: "<<poligonos[i]->area()<<endl;
        cout<<"Perímetro: "<<poligonos[i]->perimetro()<<endl;
    }

    return 0;
}