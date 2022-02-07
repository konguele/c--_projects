/*Realiza un programa que pida al usuario el nombre o ubicación de un fichero de texto y,
a continuación dé lectura a todo el fichero. */

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
using namespace std;

//Estructuras


//Prototipo de Función
void lectura();

//Variables globales


//Función principal
int main(){
    lectura();



    cin.get();
    return 0;
}

//Definición de función
void lectura(){
    ifstream archivo;
    string nombreArchivo,texto;

    cout<<"Digita el nombre del archivo o la ubicación del archivo: ";
    getline(cin,nombreArchivo);

    archivo.open(nombreArchivo.c_str(),ios::in); //Abrimos el archivo en modo lectura

    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }

    while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;
    }
    
    archivo.close(); //Cerramos el archivo

}