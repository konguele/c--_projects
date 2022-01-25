//Paso de parámetros de tipo estructura

#include<iostream>
#include<stdio.h>
using namespace std;

//Estructura
struct Persona{
    char nombre[30];
    int edad;
}p1;

//Prototipo de Función
void pedirDatos();
void mostrarDatos(Persona);

//Variables globales


//Función principal
int main(){
    pedirDatos();
    mostrarDatos(p1);

    cin.get();
    return 0;
}

//Definición de función
void pedirDatos(){
    cout<<"Digita tu nombre: ";
    cin.getline(p1.nombre,30,'\n');
    cout<<"Digita tu edad: ";
    cin>>p1.edad;
}

void mostrarDatos(Persona p){
    cout<<"\n\nNombre: "<<p.nombre<<endl;
    cout<<"Edad: "<<p.edad<<endl;
}