/*Hacer un programa en C++ oara guardar números telefónicos que muestre un menú
con las siguientes opciones:

    1. Crear(Nombre,Apellidos,Telf)
    2. Agregar más contactos(Nombre,apellidos,telf)
    3. Visualizar contactos existentes
*/


#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
using namespace std;

//Estructuras
struct Datos{
    string nombre,apellido,telf;
}datos;

//Prototipo de Función
void menu();
void crearContacto();
void agregarContacto();
void verContactos();

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
        cout<<"\tMENU"<<endl;
        cout<<"1. Crear(Nombre, Apellidos, Telf)"<<endl;
        cout<<"2. Agregar más contactos(Nombre, Apellidos, Telf)"<<endl;
        cout<<"3. Visualizar contactos existentes"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Opción: "; cin>>opcion;

        switch(opcion){
            case 1: crearContacto();
                    cout<<"\n";
                    break;
            case 2: agregarContacto();
                    cout<<"\n";
                    break;
            case 3: verContactos();
                    cout<<"\n";
                    break;
        }
    }while(opcion != 4);
}

void crearContacto(){
    ofstream archivo;
    char rpt;

    archivo.open("AgendaTelf.txt",ios::out); //Abrimos el archivo en modo escritura

    if(archivo.fail()){
        cout<<"No se pudo crear el archivo";
        exit(1);
    }

    archivo<<"\tAgenda Telefónica"<<endl;

    do{
        fflush(stdin);
        cout<<"Digita el nombre del contacto: ";
        getline(cin,datos.nombre);
        cout<<"Digita el apellido del contacto: ";
        getline(cin,datos.apellido);
        cout<<"Digita el teléfono del contacto: ";
        getline(cin,datos.telf);
        cout<<"\n";

        archivo<<"Nombre: "<<datos.nombre<<endl;
        archivo<<"Apellidos: "<<datos.apellido<<endl;
        archivo<<"Teléfono: "<<datos.telf<<endl<<endl;

        cout<<"¿Desea agregar otro contacto?(S/N): ";
        cin>>rpt;
    }while(rpt == 'S' || rpt == 's');

    archivo.close(); //Cerramos el archivo
}

void agregarContacto(){
    ofstream archivo;
    char rpt;

    archivo.open("AgendaTelf.txt",ios::app); //Abrimos el archivo en modo añadir

    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }

    do{
        fflush(stdin);
        cout<<"Digita el nombre del contacto: ";
        getline(cin,datos.nombre);
        cout<<"Digita el apellido del contacto: ";
        getline(cin,datos.apellido);
        cout<<"Digita el teléfono del contacto: ";
        getline(cin,datos.telf);
        cout<<"\n";

        archivo<<"Nombre: "<<datos.nombre<<endl;
        archivo<<"Apellidos: "<<datos.apellido<<endl;
        archivo<<"Teléfono: "<<datos.telf<<endl<<endl;

        cout<<"¿Desea agregar otro contacto?(S/N): ";
        cin>>rpt;
    }while(rpt == 'S' || rpt == 's');

    archivo.close(); //Cerramos el archivo
}

void verContactos(){
    ifstream archivo;
    string texto;

    archivo.open("AgendaTelf.txt",ios::in); //Abrimos el archivo en modo lectura

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