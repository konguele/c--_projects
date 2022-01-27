/* Rellenar un array de 10 números, posteriormente utilizando punteros indicar cuáles son
números pares y su posición de memoria. */

#include<iostream>
#include<stdio.h>
using namespace std;

//Estructuras


//Prototipo de Función


//Variables globales


//Función principal
int main(){
    int numeros[10],*dir_numeros;

    for(int i=0;i<10;i++){
        cout<<"Digita un número ["<<i<<"]: "; cin>>numeros[i];
    }

    dir_numeros = numeros;

    for(int i=0;i<10;i++){
        if(*dir_numeros%2==0){
            cout<<"El número: "<<*dir_numeros<<" es par"<<endl;
            cout<<"Posición: "<<dir_numeros<<endl;
        }
        dir_numeros++;
    }

    cin.get();
    return 0;
}

//Definición de función