//Escribir un archivo de texto

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
using namespace std;

//Estructuras


//Prototipo de Función
void  escribir();

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
    string nombreArchivo,frase;

    cout<<"Digita el nombre del archivo: "; //También podemos pedir el nombre del archivo al usuario
    getline(cin,nombreArchivo);
    archivo.open(nombreArchivo.c_str(),ios::out);

    archivo.open("prueba.txt",ios::out); //Abriendo el archivo. Si existe lo reemplaza, sino lo crea
    //archivo.open("d://prueba//ejemplo.txt",ios::out); -> También podemos añadir la ruta donde queremos guardarlo

    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }

    cout<<"\nDigita el texto del archivo: ";
    getline(cin,frase);
    archivo<<frase;

    archivo<<"Hola que tal?";
    archivo.close(); //Cerramos el archivo
}
