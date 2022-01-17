//Estructura básica en C++

#include<iostream>
#include<stdio.h>

using namespace std;

struct Persona{
    char nombre[20];
    int edad;
}persona1;

int main(){
    cout<<"Nombre: ";
    cin.getline(persona1.nombre,20,'\n');
    cout<<"Edad: ";
    cin>>persona1.edad;

    cout<<"\nImprimiendo datos\n";
    cout<<"Nombre: "<<persona1.nombre<<endl;
    cout<<"Edad: "<<persona1.edad<<endl;

    cin.get();
    return 0;
}