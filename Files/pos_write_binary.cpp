//Funciones de posicionamiento - Escritura

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
using namespace std;

//Estructuras


//Prototipo de Función
void escribir();

//Variables globales


//Función principal
int main(){
    escribir();


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

    archivo.seekp(5); //Posiciona el cursor en N para escribir a partir de ahí (Si había algo lo borra)
    archivo<<"¿Cómo estás?";

    archivo.close();
}