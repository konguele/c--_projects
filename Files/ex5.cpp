/*Crear un archivo binario donde almacenar un Registro que contenga las pulsaciones
de un atleta en una determinada hora, el programa debe tener un menú con las siguientes
opciones:

    1. Comenzar a digitar las pulsaciones
    2. Añadir más pulsaciones
    3. Mostrar las pulsaciones del registro
    4. Salir
*/


#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
using namespace std;

//Estructuras
struct Registro{
    float hora;
    int pulsaciones;
};

//Prototipo de Función
void menu();
void escribirPulsacion();
void addPulsacion();
void mostrarPulsaciones();

//Variables globales


//Función principal
int main(){
    menu();


    cin.get();
    return 0;
}

//Definición de función
void menu(){
    int opcion;

    do{
        cout<<"\t.:MENU:."<<endl;
        cout<<"1. Comenzar a digitar las pulsaciones"<<endl;
        cout<<"2. Añadir más pulsaciones"<<endl;
        cout<<"3. Mostrar las pulsaciones registradas"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Digita una opción: "; cin>>opcion;

        switch(opcion){
            case 1: escribirPulsacion();
                    break;
            case 2: addPulsacion();
                    break;
            case 3: mostrarPulsaciones();
                    break;
            case 4: break;
            default: cout<<"Se ha equivocado de opción de menú"<<endl;
        }

    }while(opcion != 4);
}

void escribirPulsacion(){
    ofstream archivob;
    archivob.open("pulsaciones.dat",ios::out | ios::binary);

    if(archivob.fail()){
        cout<<"No se pudo crear el archivo"<<endl;
        exit(1);
    }

    Registro pulso;

    cout<<"\nDigita la hora: "; cin>>pulso.hora;
    cout<<"Digita la cantidad de pulsaciones: "; cin>>pulso.pulsaciones;

    archivob.write((char *)&pulso,sizeof(Registro));

    archivob.close();
}

void addPulsacion(){
    ofstream archivob;
    archivob.open("pulsaciones.dat",ios::app | ios::binary);

    if(archivob.fail()){
        cout<<"No se pudo crear el archivo"<<endl;
        exit(1);
    }

    Registro pulso;

    cout<<"\nDigita la hora: "; cin>>pulso.hora;
    cout<<"Digita la cantidad de pulsaciones: "; cin>>pulso.pulsaciones;

    archivob.write((char *)&pulso,sizeof(Registro));

    archivob.close();
}

void mostrarPulsaciones(){
    ifstream archivob;
    archivob.open("pulsaciones.dat",ios::in | ios::binary);

    if(archivob.fail()){
        cout<<"No se pudo crear el archivo"<<endl;
        exit(1);
    }

    Registro pulso;

    cout<<"\nMostrando Pulsaciones registradas: "<<endl;
    while(!archivob.eof()){ //Mientras no haya finalizado en recorrer mi archivo
        archivob.read((char *)&pulso,sizeof(Registro));

        if(!archivob.eof()){
            cout<<"Hora: "<<pulso.hora<<endl;
            cout<<"Pulsaciones: "<<pulso.pulsaciones<<endl<<endl;
        }
    }

    archivob.close();
}