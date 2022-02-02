//Mostramos elementos en una lista enlazada

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
void insertarLista(Nodo *&,int);
void mostrarLista(Nodo *);
void menu();

//Variables globales
Nodo *lista = NULL;

//Función principal
int main(){
    menu();

    cin.get();
    return 0;
}

//Definición de funció
void insertarLista(Nodo *&lista,int n){ //Insertar elementos a la lista
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    Nodo *aux1 = lista;
    Nodo *aux2;

    while((aux1 != NULL) && (aux1->dato < n)){
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }

    if(lista == aux1){
        lista = nuevo_nodo;
    }
    else{
        aux2->siguiente = nuevo_nodo;
    }

    nuevo_nodo->siguiente = aux1;

    cout<<"\tElemento "<<n<<" insertado a lista correctamente\n";
}

void mostrarLista(Nodo *lista){
    Nodo *actual = new Nodo();
    actual = lista;

    while(actual != NULL){
        cout<<actual->dato<<" -> ";
        actual = actual->siguiente;
    }
}

void menu(){
    int opcion,dato;

    do{
        cout<<"\t.:MENU:.\n";
        cout<<"1. Insertar elementos a la lista\n";
        cout<<"2. Mostrar los elementos de la lista\n";
        cout<<"3. Salir\n";
        cout<<"Opción: "; cin>>opcion;

        switch (opcion){
            case 1: cout<<"\nDigita un número: "; cin>>dato;
                    insertarLista(lista,dato);
                    cout<<"\n";
                    break;
            case 2: mostrarLista(lista);
                    cout<<"\n";
                    break;
        }
        
    }while(opcion != 3);
}