//Estructura básica en C++

#include<iostream>
#include<stdio.h>

using namespace std;

struct Persona{
    char nombre[20];
    int edad;
}
persona1 = {"Juanjo",33},
persona2 = {"Mishelle",27};

int main(){
    cout<<"Nombre1: "<<persona1.nombre<<endl;
    cout<<"Edad1: "<<persona1.edad<<endl;

    cout<<"\nNombre2: "<<persona2.nombre<<endl;
    cout<<"Edad2: "<<persona2.edad<<endl;



    cin.get();
    return 0;
}