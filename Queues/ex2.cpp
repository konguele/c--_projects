/* Hacer un programa que guarde datos de clientes de un banco, los almacene en cola
y por último, muestre los clientes en el órden correcto. */

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//Estructuras
struct Cliente{
    char nombre[30];
    char clave[10];
    int edad;
};

struct Nodo{
    Cliente c;
    Nodo *siguiente;
};

//Prototipo de Función
void cargar_clientes(Cliente &);
void insertarCola(Nodo *&,Nodo *&,Cliente);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&,Nodo *&,Cliente &);

//Variables globales


//Función principal
int main(){ 
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    Cliente c;
    char rpt;

    do{
        cargar_clientes(c); //Cargar los datos para el cliente
        insertarCola(frente,fin,c); //Agregar un nuevo cliente a la cola

        cout<<"\n¿Desea agregar un nuevo cliente?(s/n): ";
        cin>>rpt;

    }while(rpt == 'S' || rpt == 's');

    cout<<"\n====Carga de clientes exitosa====\n\n\n";
    cout<<"\tClientes agregados a cola:\n\n";
    while(frente != NULL){
        suprimirCola(frente,fin,c);

        cout<<"Nombre: "<<c.nombre<<endl;
        cout<<"Clave: "<<c.clave<<endl;
        cout<<"Edad: "<<c.edad<<endl;
        cout<<"\n";
    }


    cin.get();
    return 0;
}

//Definición de función
void cargar_clientes(Cliente &c){
    fflush(stdin);
    cout<<"\tAgregar nuevo cliente\n";
    cout<<"Nombre: "; cin.getline(c.nombre,30,'\n');
    cout<<"Clave: "; cin.getline(c.clave,10,'\n');
    cout<<"Edad: "; cin>>c.edad;
    cout<<"\n";
}

void insertarCola(Nodo *&frente,Nodo *&fin,Cliente c){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->c = c;
    nuevo_nodo->siguiente = NULL;
    if(cola_vacia(frente)){
        frente = nuevo_nodo;
    }
    else{
        fin->siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;
}

bool cola_vacia(Nodo *frente){
    return (frente == NULL)? true : false;
}

void suprimirCola(Nodo *&frente,Nodo *&fin,Cliente &c){
    c = frente->c;
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