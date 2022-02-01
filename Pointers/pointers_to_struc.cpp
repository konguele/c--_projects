//Punteros a estructuras

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//Estructuras
struct Persona{
    char nombre[30];
    int edad;
}persona,*puntero_persona = &persona;

//Prototipo de Función
void pedirDatos();
void mostrarDatos(Persona *);

//Variables globales


//Función principal
int main(){
    pedirDatos();
    mostrarDatos(puntero_persona);



    cin.get();
    return 0;
}

//Definición de función
void pedirDatos(){
    cout<<"Digita tu nombre: ";
    cin.getline(puntero_persona->nombre,30,'\n');
    cout<<"Digita tu edad: ";
    cin>>puntero_persona->edad;
}

void mostrarDatos(Persona *puntero_persona){
    cout<<"\nSu nombre es: "<<puntero_persona->nombre<<endl;
    cout<<"Su edad es: "<<puntero_persona->edad<<endl;
}