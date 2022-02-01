//Insertar datos en la pila

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

//Variables globales


//Función principal
int main(){
    Nodo *pila = NULL;
    int n1,n2;

    cout<<"Digita un número: "; cin>>n1;
    agregarPila(pila,n1);
    cout<<"Digita otro número: "; cin>>n2;
    agregarPila(pila,n2);


    cin.get();
    return 0;
}

//Definición de función
void agregarPila(Nodo *&pila,int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;

    cout<<"\nElemento "<<n<<" agregado a PILA correctamente"<<endl;

}