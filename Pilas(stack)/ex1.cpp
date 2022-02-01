/* Hacer un programa para agregar números enteros a una pila, hasta que el usuario lo decida,
después mostrar todos los números introducidos en la pila. */

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//Estructuras
struct Nodo{
    int dato;
    Nodo *siguiente;
};

//Prototipo de Función
void agregarPila(Nodo *&,int);
void sacarPila(Nodo *&,int &);

//Variables globales


//Función principal
int main(){
    Nodo *pila = NULL;
    int dato;
    char rpt;

    do{
        cout<<"Digita un número: "; cin>>dato;
        agregarPila(pila,dato);

        cout<<"\n¿Deseas agregar otro elemento a PILA?(s/n): ";
        cin>>rpt;
    }while((rpt=='S')||(rpt=='s'));

    cout<<"\nSacando todos los elementos de PILA: ";
    while (pila != NULL){
        sacarPila(pila,dato);
        if(pila != NULL){
            cout<<dato<<" , ";
        }
        else{
            cout<<dato<<".";
            cout<<"\n";
        }
    }
    

    cin.get();
    return 0;
}

//Definición de función
void agregarPila(Nodo *&pila,int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;

    cout<<"\tEl elemento "<<n<<" ha sido agregado a PILA correctamente";
}

void sacarPila(Nodo *&pila,int &n){
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}