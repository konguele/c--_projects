/* Hacer un programa en C++, utilizando Pilas que contenga el siguiente menú:
    1. Insertar un carácter en la Pila
    2. Mostrar todos los elementos de la Pila
    3. Salir
*/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//Estructuras
struct Nodo{
    char dato;
    Nodo *puntero_siguiente;
};

//Prototipo de Función
void menu();
void agregarPila(Nodo *&,char);
void sacarPila(Nodo *&,char &);

//Variables globales


//Función principal
int main(){
    menu();


    cin.get();
    return 0;
}

//Definición de función
void menu(){
    Nodo *pila = NULL;
    int opcion;
    char dato;

    do{
        cout<<"\t.:MENÚ:.\n";
        cout<<"1. Insertar datos en la PILA"<<endl;
        cout<<"2. Mostrar todos los elementos de la PILA"<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"Opción: "; cin>>opcion;

        switch(opcion){
            case 1: cout<<"\nDigita un caracter: ";
                    cin>>dato;
                    agregarPila(pila,dato);
                    break;
            case 2: cout<<"\nMostrando todos los elementos de la PILA: ";
                    while(pila != NULL){
                        sacarPila(pila,dato);
                        if(pila != NULL){
                            cout<<dato<<" , ";
                        }
                        else{
                            cout<<dato<<".";
                        }
                    } 
                    system("pause");
                    break;
            case 3: break;
        }
        system("cls");//Limpiar pantalla
    }while(opcion != 3);
}

void agregarPila(Nodo *&pila,char n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->puntero_siguiente = pila;
    pila = nuevo_nodo;
}

void sacarPila(Nodo *&pila,char &n){
    Nodo *aux = pila;
    n = aux->dato;
    pila =aux->puntero_siguiente;
    delete aux;
}