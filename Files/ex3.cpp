/*Realiza un programa que pida al usuario el nombre o ubicación de un fichero
de texto y, a continuación añada texto en él hasta que el usuario lo decida. */

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
    string nombreArchivo,texto;
    char rpt;

    cout<<"Digita el nombre o la ubicación del archivo: ";
    getline(cin,nombreArchivo);

    archivo.open(nombreArchivo.c_str(),ios::app); //Abrimos el archivo en modo añadir

    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }

    do{
        fflush(stdin);
        cout<<"Digita otra frase: ";
        getline(cin,texto);

        archivo<<texto<<endl;

        cout<<"¿Deseas agregar otra frase?(S/N): ";
        cin>>rpt;
    }while((rpt == 'S') || (rpt == 's'));

    archivo.close();
}