/*Definir una plantilla dentro de un archivo de cabecera llamado "Intercambio.h" que pueda
intercambiar el valor de dos elementos del mismo tipo.*/

#include<iostream>
#include "Intercambio.h"

using namespace std;

int main(int argc,char** argv){
    int dato1,dato2;
    float dato3,dato4;
    char dato5,dato6;
    string dato7,dato8;

    cout<<"\n\t-Datos INT-"<<endl;
    cout<<"Digita el valor del primer dato: "; cin>>dato1;
    cout<<"Digita el valor del segundo dato: "; cin>>dato2;

    //Intercambio de variables
    intercambiar(dato1,dato2);

    cout<<"\n\t-Los nuevos valores son-"<<endl;
    cout<<"Primero dato: "<<dato1<<endl;
    cout<<"Segundo dato: "<<dato2<<endl;

    cout<<"\n\t-Datos FLOAT-"<<endl;
    cout<<"Digita el valor del primer dato: "; cin>>dato3;
    cout<<"Digita el valor del segundo dato: "; cin>>dato4;

    //Intercambio de variables
    intercambiar(dato3,dato4);

    cout<<"\n\t-Los nuevos valores son-"<<endl;
    cout<<"Primero dato: "<<dato3<<endl;
    cout<<"Segundo dato: "<<dato4<<endl;

    cout<<"\n\t-Datos CHAR-"<<endl;
    cout<<"Digita el valor del primer dato: "; cin>>dato5;
    cout<<"Digita el valor del segundo dato: "; cin>>dato6;

    //Intercambio de variables
    intercambiar(dato5,dato6);

    cout<<"\n\t-Los nuevos valores son-"<<endl;
    cout<<"Primero dato: "<<dato5<<endl;
    cout<<"Segundo dato: "<<dato6<<endl;

    cout<<"\n\t-Datos STRING-"<<endl;
    cout<<"Digita el valor del primer dato: "; cin>>dato7;
    cout<<"Digita el valor del segundo dato: "; cin>>dato8;

    //Intercambio de variables
    intercambiar(dato7,dato8);

    cout<<"\n\t-Los nuevos valores son-"<<endl;
    cout<<"Primero dato: "<<dato7<<endl;
    cout<<"Segundo dato: "<<dato8<<endl;

    return 0;
}