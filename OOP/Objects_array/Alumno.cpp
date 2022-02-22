#include <iostream>
#include "Alumno.h"

using namespace std;

void Alumno::pedirDatos(){
    cout<<"Digita la calificación de matemáticas: ";
    cin>>calMate;

    cout<<"Digita la calificación de Programación: ";
    cin>>calProgra;
}

void Alumno::mostrarNotas(){
    cout<<"Nota de Matemáticas: "<<calMate<<endl;
    cout<<"Nota de Programación: "<<calProgra<<endl;
    cout<<"El promedio es: "<<(calMate+calProgra)/2<<endl;
}