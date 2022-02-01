//Eliminar elementos en una cola


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
void suprimirCola(Nodo *&,Nodo *&,int &);

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

    cout<<"\nQuitando los NODOS de la COLA"<<endl;
    while(frente != NULL){ //Eliminar los elementos de la cola
        suprimirCola(frente,fin,dato);

        if(frente != NULL){
            cout<<dato<<" , ";
        }
        else{
            cout<<dato<<"."<<endl;
        }
    }

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
void suprimirCola(Nodo *&frente,Nodo *&fin,int &n){ //Función para eliminar elementos de la cola
    n = frente->dato;
    Nodo *aux = frente;

    if(frente == fin){
        frente = NULL;
        fin = NULL;
    }
    else{
        frente = frente->siguiente;

    }

    delete aux;
}