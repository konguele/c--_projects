//Insertar elementos en una cola


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
void insertarCola(Nodo *&,Nodo *&,int);
bool cola_vacia(Nodo *);

//Variables globales


//Función principal
int main(){
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    int dato;

    cout<<"Digita un número: "; cin>>dato;
    insertarCola(frente,fin,dato);

    cout<<"Digita otro número: "; cin>>dato;
    insertarCola(frente,fin,dato);

    cout<<"Digita un último número: "; cin>>dato;
    insertarCola(frente,fin,dato);


    cin.get();
    return 0;
}

//Definición de función
void insertarCola(Nodo *&frente,Nodo *&fin,int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if(cola_vacia(frente)){
        frente = nuevo_nodo;
    }
    else{
        fin->siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;

    cout<<"\tEl elemento "<<n<<" se ha insertado en la cola correctamente\n";
}

bool cola_vacia(Nodo *frente){//Función para determinar si la cola está vacía o no
    return (frente == NULL)? true : false;

}