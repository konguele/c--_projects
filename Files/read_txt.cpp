//Lectura de un archivo de texto

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
    string texto;

    archivo.open("frases.txt",ios::in); //Abriendo el archivo en modo lectura

    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }

    while(!archivo.eof()){ //Mientras no sea el final del archivo
        getline(archivo,texto);
        cout<<texto<<endl;
    }

    archivo.close(); //Cerramos el archivo

}