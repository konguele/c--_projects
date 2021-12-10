/* Realice un programa que lea de la entrada standard los siguientes
datos de una persona:
    Edad: Dato de tipo entero.
    Sexo: Dato de tipo caracter.
    Altura en metros: Dato de tipo real.
Tras leer los datos, el programa debe mostrarlos en la salida standard */

#include<iostream>

using namespace std;

int main(){
    int edad;
    char sexo[10];
    float altura;

    cout<<"Escribe tu edad: "; cin>>edad;
    cout<<"Escribe tu sexo: "; cin>>sexo;
    cout<<"Escribe tu altura en metros: "; cin>>altura;

    cout<<"\nEdad: "<<edad<<endl;
    cout<<"Sexo: "<<sexo<<endl;
    cout<<"Altura: "<<altura<<"m"<<endl;

    return 0;
}