/*Hacer una función para almacenar N números en un array dinámico, posteriormente en otra
función buscar un número en particular.
NOTA: Puedes utilizara cualquier método de búsqueda(Secuencial o Binaria). */

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//Estructuras


//Prototipo de Función
void pedirDatos();
void buscarElemento(int *,int);

//Variables globales
int nElementos,*elemento;

//Función principal
int main(){
    pedirDatos();
    buscarElemento(elemento,nElementos); //Llamada a la función para buscar un elemento del array

    delete[] elemento; //Liberamos la memoria utilizada para el array.

    cin.get();
    return 0;
}

//Definición de función
void pedirDatos(){
    cout<<"Digita el número de elementos del array: "; cin>>nElementos;

    elemento = new int[nElementos];

    for(int i=0;i<nElementos;i++){
        cout<<"Digita un número ["<<i<<"]: "; cin>>*(elemento+i);
    }
}

void buscarElemento(int *elemento,int nelementos){
    int dato,i;
    bool band = false;

    cout<<"\n\nDigita un número a buscar: "; cin>>dato;

    i = 0;

    //Búsqueda secuencial
    while((i<nElementos)&&(band == false)){
        if(*(elemento+i) == dato){
            band = true;
        }
        i++;

    }

    if(band == false){
        cout<<"El número "<<dato<<" NO existe en el array"<<endl;
    }
    else{
        cout<<"El numero "<<dato<<" SI existe en el array, Posición: "<<i-1<<endl;
    }
}