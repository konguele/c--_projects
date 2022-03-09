/*Definir dos plantillas de funciones dentro de un archivo de cabecera llamado "ordenar.h"
que puedan ordenar tanto ascendentemente como descendentemente un arreglo de N elementos, recuerda
que puede utilizar la plantilla intercambiar del ejercicio anterior.*/

#include<iostream>
#include "Ordenar.h"
using namespace std;

template <typename T>
void pedirDatos(T *array, int n){
    for(int i=0;i<n;i++){
        cout<<"Digita el elemento["<<i<<"]: "; cin>>array[i];
    }
}

template <typename T>
void mostrarArray(T *array,int n){
    for(int i=0;i<n;i++){
        cout<<"Elemento["<<i<<"]: "<<array[i]<<endl;
    }
}

int main(int argc,char** argv){
    int nElementos;

    cout<<"Digita la cantidad de elementos del array: "; cin>>nElementos;

    int *elementos = new int[nElementos];
    
    cout<<"\n\t-Elementos del array-"<<endl;
    pedirDatos(elementos,nElementos);

    //Orden Ascendente
    ordenarAscendente(elementos,nElementos);

    cout<<"\n\t-ARRAY ASCENDENTE-"<<endl;
    mostrarArray(elementos,nElementos);

    //Orden Descendente
    ordenarDescendente(elementos,nElementos);

    cout<<"\n\t-ARRAY DESCENDENTE-"<<endl;
    mostrarArray(elementos,nElementos);

    delete[] elementos;
    return 0;
}