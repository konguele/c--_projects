/*La clave de las clases derivadas está en preguntar si la clase hija "Es un" o "Es una" para 
saber si es correcto. Por ejemplo: La clase padre es "Figura", tenemos asociando un "triángulo",
si hacemos la pregunta "¿Triángulo es una figura?", la respuesta es "Si" por lo tanto tenemos la
relación de herencia correcta :) En un videojuego el ejemplo sería: ¿Zombie es un enemigo?*/

#include<iostream>
#include "Triangulo.h"
using namespace std;

int main(int argc, char** argv){
    Triangulo* t1 = new Triangulo(3,5,6,7);

    cout<<"Número de lados: "<<t1->getNLados()<<endl;
    cout<<"Área del triángulo: "<<t1->areaTriangulo()<<endl;

    return 0;
}