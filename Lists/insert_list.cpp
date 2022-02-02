//Insertamos elementos en una lista enlazada

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

//Variables globales


//Función principal
int main(){
    Nodo *lista = NULL;
    int dato;

    cout<<"Digita un número: "; cin>>dato;
    insertarLista(lista,dato);
    cout<<"Digita otro número: "; cin>>dato;
    insertarLista(lista,dato);
    cout<<"Digita un último número: "; cin>>dato;
    insertarLista(lista,dato);



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