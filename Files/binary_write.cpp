//Archivo binario - escribir()

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
using namespace std;

//Estructuras
struct Registro{
    char nombre[20];
    char apellido[20];
};

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
    ofstream archivob;

    archivob.open("prueba.dat",ios::out | ios::binary);

    if(archivob.fail()){
        cout<<"No se puede crear el archivo";
        exit(1);
    }

    Registro persona;

    cout<<"Pidiendo datos"<<endl;
    cout<<"Digita un nombre: "; cin.getline(persona.nombre,20,'\n');
    cout<<"Digita un apellido: "; cin.getline(persona.apellido,20,'\n');

    archivob.write((char *)&persona,sizeof(Registro)); //Escribimos los datos en mi archivo binario
    archivob.close();

}