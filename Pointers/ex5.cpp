/*Pedir al usuario N números, almacenarlos en un array dinámico, posteriormente ordenar los números
en órden ascendente y mostrarlos en pantalla.
NOTA: Utilizar cualquier método de ordenamiento. */

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//Estructuras


//Prototipo de Función
void pedirDatos();
void ordenarArray(int *,int);
void mostrarArray(int *,int);

//Variables globales
int nElementos,*elemento;

//Función principal
int main(){
    pedirDatos();
    ordenarArray(elemento,nElementos);
    mostrarArray(elemento,nElementos);

    delete[] elemento; //Liberar la memoria utilizada para el array dinámico.

    cin.get();
    return 0;
}

//Definición de función
void pedirDatos(){
    cout<<"Digita el número de elementos del array:";
    cin>>nElementos;

    elemento = new int[nElementos];

    for(int i=0;i<nElementos;i++){
        cout<<"Digita un número ["<<i<<"]: ";
        cin>>*(elemento+i); //es lo mismo que elemento[i]
    }
}

void ordenarArray(int *elemento,int nElementos){
    int aux;

    for(int i=0;i<nElementos;i++){
        for(int j=0;j<nElementos-1;j++){
            if(*(elemento+j) > *(elemento+j+1)){
                aux = *(elemento+j);
                *(elemento+j) = *(elemento+j+1);
                *(elemento+j+1) = aux;
            }
        }
    }
}

void mostrarArray(int *elemento,int nElementos){
    cout<<"\n\nMostrando array ordenado: ";
    for(int i=0;i<nElementos;i++){
        cout<<*(elemento+i)<<" ";
    }
}