//Miembros static de una clase

#include<iostream>
#include "Static.h"

using namespace std;

int main(int argc,char** argv){
    Estatico* ob1 = new Estatico();
    Estatico* ob2 = new Estatico();
    Estatico* ob3 = new Estatico();

    cout<<ob1->getContador()<<endl;

    cout<<"La suma es: "<<Estatico::sumar(4,5)<<endl; //Es un método estático no hace falta inicializarlo

    return 0;
}