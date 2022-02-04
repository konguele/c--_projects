//Insertar un árbol

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//Estructuras
struct Nodo{
    int dato;
    Nodo *der;
    Nodo *izq;
};


//Prototipo de Función
Nodo *crearNodo(int);
void insertarNodo(Nodo *&,int);
void menu();

//Variables globales
Nodo *arbol = NULL;

//Función principal
int main(){
    menu();



    cin.get();
    return 0;
}

//Definición de función

Nodo *crearNodo(int n){ //Función para crear un nuevo Nodo
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = n;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;

    return nuevo_nodo;
}

void insertarNodo(Nodo *&arbol,int n){ //Función para insertar elementos en el árbol
    if(arbol == NULL){ //Si el árbol está vacío crea un nuevo nodo
        Nodo *nuevo_nodo = crearNodo(n);
        arbol = nuevo_nodo;
    }
    else{ //Si el árbol tiene uno o más de un Nodo
        int valorRaiz = arbol->dato; //Obtenemos el valor de la raíz
        if(n < valorRaiz){ //Si el elemento es menor a la raíz insertamos en el lado izquierdo
            insertarNodo(arbol->izq,n);
        }
        else{ //Si el elemento es mayor a la raíz lo insertamos en el lado derecho
            insertarNodo(arbol->der,n);
        }
    }
}
void menu(){ //Función de menú
    int dato,opcion;

    do{
        cout<<"\t.:MENU:."<<endl;
        cout<<"1. Insertar un nuevo nodo"<<endl;
        cout<<"2. Salir"<<endl;
        cout<<"Opción: "; cin>>opcion;

        switch(opcion){
            case 1: cout<<"\nDigita un número: ";
                    cin>>dato;
                    insertarNodo(arbol,dato); //Insertamos nuevo nodo
                    cout<<"\n";
                    break;
        }
    }while(opcion != 2);
}