/* Hacer un programa en C++, utilizando Colas que contenga el siguiente menú:
1. Insertar un carácter en la cola
2. Mostrar todos los elementos de la cola
3. Salir
*/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//Estructuras
struct Nodo{
    char dato;
    Nodo *siguiente;
};

//Prototipo de Función
void menu();
void insertarCola(Nodo *&,Nodo *&,char);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&,Nodo *&,char &);

//Variables globales


//Función principal
int main(){
    menu();



    cin.get();
    return 0;
}

//Definición de función
void menu(){
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    int opc;
    char dato;

    do{
        cout<<"\t.:MENU:.\n";
        cout<<"1. Insertar un caracter en la cola."<<endl;
        cout<<"2. Mostrar todos los elementos de la cola."<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"Opción: "; cin>>opc;

        switch(opc){
            case 1: cout<<"\nIngresa un carácter para agregar a la cola: ";
                    cin>>dato;
                    insertarCola(frente,fin,dato);
                    break;
            case 2: cout<<"\nMostrando los elementos de la cola"<<endl;
                    while(frente != NULL){
                        suprimirCola(frente,fin,dato);
                        if(frente != NULL){
                            cout<<dato<<" , ";
                        }
                        else{
                            cout<<dato<<"."<<endl;
                        }
                    }
                    
                    break;
            case 3: break;
        }
        
    }while(opc != 3);
}

void insertarCola(Nodo *&frente,Nodo *&fin,char n){
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if(cola_vacia(frente)){
        frente = nuevo_nodo;
    }
    else{
        fin->siguiente =nuevo_nodo;
    }

    fin = nuevo_nodo;

}

bool cola_vacia(Nodo *frente){
    return (frente == NULL)? true : false;
}

void suprimirCola(Nodo *&frente,Nodo *&fin,char &n){
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