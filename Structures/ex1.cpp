/* Hacer una estructura llamada corredor, por la cual se tendrán los siguientes campos:
- Nombre
- Edad
- Sexo
- Club

Pedir los datos al usuario para un corredor, así como la categoría de la competición:
- Juvenil <= 18 años
- Senior <= 40 años
- Veterano > 40 años
*/

#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

struct Corredor{
    char nombre[20];
    int edad;
    char sexo[10];
    char club [20];
}c1;

int main(){
    char categoria[20];

    cout<<"Nombre: ";
    cin.getline(c1.nombre,20,'\n');
    cout<<"Edad: ";
    cin>>c1.edad;
    fflush(stdin);
    cout<<"Sexo: ";
    cin.getline(c1.sexo,10,'\n');
    cout<<"Club: ";
    cin.getline(c1.club,20,'\n');

    if(c1.edad <= 18){
        strcpy(categoria,"Juvenil");
    }
    else if(c1.edad <= 40){
        strcpy(categoria,"Senior");
    }
    else{
        strcpy(categoria,"Veterano");
    }

    cout<<"\n\nDatos del corredor: "<<endl;
    cout<<"Nombre: "<<c1.nombre<<endl;
    cout<<"Edad: "<<c1.edad<<endl;
    cout<<"Sexo: "<<c1.sexo<<endl;
    cout<<"Club: "<<c1.club<<endl;
    cout<<"Categoria: "<<categoria<<endl;

    cin.get();
    return 0;
}