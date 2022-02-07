/* Realiza un programa que pida al usuario el nombre de un fichero de texto y, a continuación
permita almacenar al usuario tantas frases como el usuario desee. */

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
using namespace std;

//Estructuras


//Prototipo de Función
void escribirFrase();

//Variables globales


//Función principal
int main(){
    escribirFrase();



    cin.get();
    return 0;
}

//Definición de función
void escribirFrase(){
    ofstream archivo;
    string nombreArchivo,frase;
    char rpt;

    cout<<"Digita el nombre del archivo: ";
    getline(cin,nombreArchivo);

    archivo.open(nombreArchivo.c_str(),ios::out); //Abriendo el archivo

    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }

    do{
        fflush(stdin);
        cout<<"Digita una frase: ";
        getline(cin,frase);
        archivo<<frase<<endl;

        cout<<"¿Desea agregar otra frase?(S/N): ";
        cin>>rpt;
    }while((rpt == 'S') || (rpt == 's'));

    archivo.close(); //Cerramos el archivo
}
