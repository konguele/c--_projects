//Eliminar elementos en una lista enlazada

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
void buscarLista(Nodo *,int);
void eliminarNodo(Nodo *&,int); //Eliminamos UN elemento de la lista
void eliminarLista(Nodo *&,int &); //Eliminamos TODA la lista

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
        cout<<"3. Buscar un elemento en la lista\n";
        cout<<"4. Eliminar un Nodo de la lista\n";
        cout<<"5. Vaciar la lista completa\n";
        cout<<"6. Salir\n";
        cout<<"Opción: "; cin>>opcion;

        switch (opcion){
            case 1: cout<<"\nDigita un número: "; cin>>dato;
                    insertarLista(lista,dato);
                    cout<<"\n";
                    break;
            case 2: mostrarLista(lista);
                    cout<<"\n";
                    break;
            case 3: cout<<"\nDigita el número a buscar: "; cin>>dato;
                    buscarLista(lista,dato);
                    cout<<"\n";
                    break;
            case 4: cout<<"Digita el elemento que desea eliminar: "; cin>>dato;
                    eliminarNodo(lista,dato);
                    cout<<"\n";
                    break;
            case 5: cout<<"Eliminando los datos de la lista: ";
                    while(lista != NULL){ //Mientras no sea el final de la lista
                        eliminarLista(lista,dato);
                        cout<<dato<<" -> ";
                    }
                    cout<<"\n";
                    break;
        }
        
    }while(opcion != 6);
}

void buscarLista(Nodo *lista,int n){
    bool band = false;

    Nodo *actual = new Nodo();
    actual = lista;
    while((actual !=NULL) && (actual->dato <= n)){
        if(actual->dato == n){
            band = true;

        }
        actual = actual->siguiente;
    }
    if(band == true){
        cout<<"El elemento "<<n<<" SI ha sido encontrado en la lista\n";
    }
    else{
        cout<<"El elemento "<<n<<" NO ha sido encontrado en la lista\n";
    }
}

void eliminarNodo(Nodo *&lista,int n){
    //Preguntamos si la lista está vacía
    if(lista != NULL){
        Nodo *aux_borrar;
        Nodo *anterior = NULL;

        aux_borrar = lista;

        //Recorremos la lista
        while((aux_borrar != NULL) && (aux_borrar->dato != n)){
            anterior = aux_borrar;
            aux_borrar = aux_borrar->siguiente;
        }

        //El elemento no ha sido encontrado
        if(aux_borrar == NULL){
            cout<<"El elemento "<<n<<" NO ha sido encontrado"<<endl;
        }
        else if(anterior == NULL){ //El primer elemento es el que vamos a eliminar
            lista = lista->siguiente;
            delete aux_borrar;
        }
        else{ //El elemento está en la lista, pero no es el primer elemento nodo
            anterior->siguiente = aux_borrar->siguiente;
            delete aux_borrar;
        }
    }
}

void eliminarLista(Nodo *&lista,int &n){
    Nodo *aux = lista;
    n = aux->dato;
    lista = aux->siguiente;
    delete aux;
}