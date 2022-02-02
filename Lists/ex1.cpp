/* Crear una lista que almacene "n" números enteros y calcular el menor y mayor
de ellos.*/

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
void calcularMayorMenor(Nodo *);

//Variables globales


//Función principal
int main(){
    Nodo *lista = NULL;
    int dato;
    char respuesta;

    do{
        cout<<"Digita un número: "; cin>>dato;
        insertarLista(lista,dato); //Agregamos un nuevo elemento a la lista

        cout<<"¿Desea agregar otro Nodo?(s/n): ";
        cin>>respuesta;
    }while(respuesta == 's' || respuesta == 'S');

    cout<<"\nLos elementos de la lista son los siguientes:\n";
    mostrarLista(lista);

    calcularMayorMenor(lista);

    cin.get();
    return 0;
}

//Definición de función
void insertarLista(Nodo *&lista,int n){ //Agregar elementos al final de la lista
    Nodo *nuevo_nodo = new Nodo();
    Nodo *aux;

    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if(lista == NULL){ //Si la lista está vacía
        lista = nuevo_nodo; //Agregamos el primer elemento a la lista
    }
    else{
        aux = lista; //aux apunta al inicio de la lista
        while(aux->siguiente != NULL){ //Recorremos la lista
            aux = aux->siguiente; //Avanzamos posiciones en la lista
        }
        aux->siguiente = nuevo_nodo; //Agrego el nuevo Nodo a la lista
    }
    cout<<"\tEl elemento "<<n<<" ha sido agregado a la lista\n";
}

void mostrarLista(Nodo *lista){
    while(lista != NULL){ //Mientras no sea el final de la lista
        cout<<lista->dato<<" -> ";
        lista = lista->siguiente; //Avanzamos una posición en la lista
    }
}

void calcularMayorMenor(Nodo *lista){ //Calcula el mayor y el menor elemento de la lista
    int mayor=0,menor=99999;

    while(lista != NULL){ //Recorremos la lista
        if((lista->dato) > mayor){ //Calculamos el mayor elemento
            mayor = lista->dato;
        }
        if((lista->dato) < menor){ //Calculamos el menor elemento
            menor = lista->dato;
        }
        lista = lista->siguiente; //Avanzamos una posición en la lista

    }

    cout<<"\nEl mayor elemento es: "<<mayor<<endl;
    cout<<"El menor elemento es: "<<menor<<endl;
}