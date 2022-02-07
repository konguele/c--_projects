//Añadir texto al final de un fichero

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
using namespace std;

//Estructuras


//Prototipo de Función
void add();

//Variables globales


//Función principal
int main(){
    add();



    cin.get();
    return 0;
}

//Definición de función
void add(){
    ofstream archivo;
    string texto;

    archivo.open("frases.txt",ios::app); //Abrimos el archivo en modo añadir texto.

    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }

    cout<<"Digita el texto que quieres añadir: ";
    getline(cin,texto);

    archivo<<"\n";
    archivo<<texto<<endl; //Se añade lo que digita el usuario
    archivo<<"\nHola que tal?"; //Se añade desde el programa

    archivo.close();
}