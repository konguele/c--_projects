/*Pedir su nombre al usuario y devolver el número de vocales que hay.

NOTA: Recuerda que debes utilizar punteros. */

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

//Estructuras


//Prototipo de Función
void pedirDatos();
int contandoVocales(char *);

//Variables globales
char nombreUsuario[30];

//Función principal
int main(){
    pedirDatos();

    cout<<"El número del vocales del nombre es: "<<contandoVocales(nombreUsuario)<<endl;

    cin.get();
    return 0;
}

//Definición de función
void pedirDatos(){
    cout<<"Digita tu nombre: "; cin.getline(nombreUsuario,30,'\n');

    //strupr(nombreUsuario); //Transformando a mayúsculas el nombre.
    

}

int contandoVocales(char *nombre){
    int cont=0;

    while(*nombre){ //Mientras nombre no sea nulo '\0'
        switch(*nombre){
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U': cont++;
        }
        nombre++;
    }

    return cont;
}