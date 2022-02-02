/*Crear una lista que almacene "n" números reales y calcular su suma
y promedio de estos.*/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//Estructuras
struct Nodo{
    float dato;
    Nodo *siguiente;
};

//Prototipo de Función
void insertarLista(Nodo *&,float);
void mostrarLista(Nodo *);
void calcularSumaPromedio(Nodo *);

//Variables globales


//Función principal
int main(){
    Nodo *lista = NULL;
    float dato;
    char respuesta;

    do{
        cout<<"Digita un número: "; cin>>dato;
        insertarLista(lista,dato); //Insertamos el dato en lista

        cout<<"¿Desea agregar un nuevo elemento en la lista(s/n): "; cin>>respuesta;
    }while(respuesta == 's' || respuesta == 'S');

    cout<<"\nElementos en la lista\n";
    mostrarLista(lista);

    calcularSumaPromedio(lista);

    cin.get();
    return 0;
}

//Definición de función
void insertarLista(Nodo *&lista,float n){
    Nodo *nuevo_nodo = new Nodo();
    Nodo *aux;

    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if(lista == NULL){ //Si la lista está vacía
        lista =nuevo_nodo;
    }
    else{
        aux = lista;
        while((aux->siguiente) != NULL){ //Recorremos la lista
            aux = aux->siguiente;
        }
        aux->siguiente = nuevo_nodo; //Agregamos el nuevo Nodo
    }
    cout<<"\tEl elemento "<<n<<" se ha insertado en la lista correctamente\n"; 
}

void mostrarLista(Nodo *lista){ //Mostrar todos los elementos de la lista
    while(lista != NULL){ //Mientras no sea el final de la lista
        cout<<lista->dato<<" -> ";
        lista = lista ->siguiente; //Avanzar en la lista
    }
}

void calcularSumaPromedio(Nodo *lista){ //Calcular la suma y el promedio de los elementos de la lista
    float suma=0,promedio=0;
    int contador = 0;

    while(lista != NULL){ //Mientras no sea el final de la lista
        suma += lista->dato; //Suma iterativa
        contador++; //Contar el número de elementos en la lista
        lista = lista->siguiente; //Avanzar en la lista
    }

    promedio = suma/contador;

    cout<<"\n\nLa suma es: "<<suma<<endl;
    cout<<"El promedio es: "<<promedio<<endl;
}