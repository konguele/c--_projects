/*  Comprobar si un número es par o impar, y señalar la posición de memoria donde se está guardando
el número. Con punteros. */

#include<iostream>
#include<stdio.h>
using namespace std;

//Estructuras


//Prototipo de Función


//Variables globales


//Función principal
int main(){
    int numero,*dir_numero;

    cout<<"Digita un número: "; cin>>numero;

    dir_numero = &numero; //Guardando la posición de memoria

    if(*dir_numero%2==0){
        cout<<"El número "<<*dir_numero<<" es par"<<endl;
        cout<<"Posición: "<<dir_numero<<endl;
    }
    else{
        cout<<"El número "<<*dir_numero<<" es impar"<<endl;
        cout<<"Posición: "<<dir_numero<<endl;
    }




    cin.get();
    return 0;
}

//Definición de función