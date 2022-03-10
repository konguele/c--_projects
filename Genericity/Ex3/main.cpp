/*Define una plantilla para la clase Materia, de tal manera que el tipo de dato del atributo
calificación sea del tipo T. Esto permitirá crear objetos de tipo materia que tengan calificaciones
que sean: Números enteros, números decimales y letras. 

    a) Crea un objeto de tipo Materia usando el tipo int. Imprime los valores de los atributos del
    objeto creado.
    b) Crea un objeto de tipo Materia usando el tipo float.
    c) Crea un objeto de tipo Materia usando el tipo char.
    d) Incluye un método en la clase que permita modificar la calificación en una materia.
*/

#include<iostream>
#include "Materia.h"
using namespace std;

int main(int argc,char** argv){
    Materia <int> curso1("Algoritmos",1,15);
    Materia <float> curso2("Matemáticas",2,18.89);
    Materia <char> curso3("Lenguaje",3,'A');

    cout<<"\n\t-DATOS DEL CURSO 1-"<<endl;
    curso1.mostrarDatos();

    cout<<"\n\t-DATOS DEL CURSO 2-"<<endl;
    curso2.mostrarDatos();

    cout<<"\n\t-DATOS DEL CURSO 3-"<<endl;
    curso3.mostrarDatos();

    curso1.setCalificacion(19);
    cout<<"\nLa nueva calificación de curso 1 es: "<<curso1.getCalificacion()<<endl;

    return 0;
}