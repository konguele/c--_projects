//Funciones de posicionamiento - Lectura

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
using namespace std;

//Estructuras


//Prototipo de Función
void escribir();
void lectura();

//Variables globales


//Función principal
int main(){
    escribir();
    lectura();


    cin.get();
    return 0;
}

//Definición de función
void escribir(){
    ofstream archivo;

    archivo.open("posicion.txt",ios::out);

    if(archivo.fail()){
        cout<<"No se pudo crear el archivo";
        exit(1);
    }

    cout<<"Posición actual: "<<archivo.tellp()<<endl; //Te muestra la posición actual donde esté el cursor en el archivo
    archivo<<"Hola, ¿Qué tal?";
    cout<<"Posición actual: "<<archivo.tellp()<<endl;

    archivo.close();
}

void lectura(){
    ifstream archivo;

    archivo.open("posicion.txt",ios::in);

    if(archivo.fail()){
        cout<<"No se pudo crear el archivo";
        exit(1);
    }

    string linea;

    archivo.seekg(5); //Lee desde la posición que yo le indico
    cout<<"\nPosición actual: "<<archivo.tellg()<<endl;
    getline(archivo,linea);

    cout<<linea<<endl;

    archivo.close();
}