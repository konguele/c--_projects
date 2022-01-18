/* Hacer un array de estructuras llamada atleta para N atletas que contenga los siguientes campos:
- Nombre
- País
- Número de medallas
y devuelva los datos (Nombre, País) del atleta que ha ganado el mayor número de medallas. */

#include<iostream>
#include<stdio.h>

using namespace std;

struct Atleta{
    char nombre[20];
    char pais[20];
    int numero_medallas;
}atletas[100];

int main(){
    int nAtletas,mayor=0,pos;

    cout<<"Dime cuántos atletas participan: "; cin>>nAtletas;

    for(int i=0;i<nAtletas;i++){
        fflush(stdin);
        cout<<i+1<<". Digita el nombre: ";
        cin.getline(atletas[i].nombre,20,'\n');
        cout<<i+1<<". Digita el país: ";
        cin.getline(atletas[i].pais,20,'\n');
        cout<<i+1<<". Digita el número de medallas: ";
        cin>>atletas[i].numero_medallas;
        cout<<"\n";

        if(atletas[i].numero_medallas > mayor){
            mayor = atletas[i].numero_medallas;
            pos = i;
        }
    }

    //Imprimiendo los datos del mejor atleta
    cout<<".:El mejor atleta:."<<endl;
    cout<<"Nombre del atleta: "<<atletas[pos].nombre<<endl;
    cout<<"País del atleta: "<<atletas[pos].pais<<endl;

    cin.get();
    return 0;
}