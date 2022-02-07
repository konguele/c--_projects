//Recorrido en PostOrden en un árbol

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//Estructuras
struct Nodo{
    int dato;
    Nodo *der;
    Nodo *izq;
    Nodo *padre;
};


//Prototipo de Función
Nodo *crearNodo(int,Nodo *);
void insertarNodo(Nodo *&,int,Nodo *);
void menu();
void mostrarArbol(Nodo *,int);
bool busqueda(Nodo *,int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);
void eliminar(Nodo *,int);
void eliminarNodo(Nodo *);
Nodo *minimo(Nodo *);
void reemplazar(Nodo *,Nodo *);
void destruirNodo(Nodo *);


//Variables globales
Nodo *arbol = NULL;

//Función principal
int main(){
    menu();



    cin.get();
    return 0;
}

//Definición de función

Nodo *crearNodo(int n,Nodo *padre){ //Función para crear un nuevo Nodo
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = n;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;
    nuevo_nodo->padre = padre;

    return nuevo_nodo;
}

void insertarNodo(Nodo *&arbol,int n,Nodo *padre){ //Función para insertar elementos en el árbol
    if(arbol == NULL){ //Si el árbol está vacío crea un nuevo nodo
        Nodo *nuevo_nodo = crearNodo(n,padre);
        arbol = nuevo_nodo;
    }
    else{ //Si el árbol tiene uno o más de un Nodo
        int valorRaiz = arbol->dato; //Obtenemos el valor de la raíz
        if(n < valorRaiz){ //Si el elemento es menor a la raíz insertamos en el lado izquierdo
            insertarNodo(arbol->izq,n,arbol); //Padre referenciado por árbol
        }
        else{ //Si el elemento es mayor a la raíz lo insertamos en el lado derecho
            insertarNodo(arbol->der,n,arbol); //Padre referenciado por árbol
        }
    }
}
void menu(){ //Función de menú
    int dato,opcion,contador=0;

    do{
        cout<<"\t.:MENU:."<<endl;
        cout<<"1. Insertar un nuevo nodo"<<endl;
        cout<<"2. Mostrar el árbol completo"<<endl;
        cout<<"3. Buscar un elemento en el árbol"<<endl;
        cout<<"4. Recorrer el árbol en PreOrden"<<endl;
        cout<<"5. Recorrer el árbol en InOrden"<<endl;
        cout<<"6. Recorrer el árbol en PostOrden"<<endl;
        cout<<"7. Eliminar un nodo del árbol"<<endl;
        cout<<"8. Salir"<<endl;
        cout<<"Opción: "; cin>>opcion;

        switch(opcion){
            case 1: cout<<"\nDigita un número: ";
                    cin>>dato;
                    insertarNodo(arbol,dato,NULL); //Insertamos nuevo nodo
                    cout<<"\n";
                    break;
            case 2: cout<<"\nMostrando el árbol completo:\n\n";
                    mostrarArbol(arbol,contador);
                    cout<<"\n";
                    break;
            case 3: cout<<"\nDigita el elemento a buscar: "; cin>>dato;
                    if(busqueda(arbol,dato) == true){
                        cout<<"\nEl elemento "<<dato<<" ha sido encontrado en el árbol\n";
                    }
                    else{
                        cout<<"\nElemento NO encontrado\n";
                    }
                    cout<<"\n";
                    break;
            case 4: cout<<"\nRecorrido en PreOrden: ";
                    preOrden(arbol);
                    cout<<"\n\n";
                    break;
            case 5: cout<<"\nRecorrido en InOrden: ";
                    inOrden(arbol);
                    cout<<"\n\n";
                    break;
            case 6: cout<<"\nRecorrido en PostOrden: ";
                    postOrden(arbol);
                    cout<<"\n\n";
                    break;
            case 7: cout<<"\nDigita el número a eliminar: ";
                    cin>>dato;
                    eliminar(arbol,dato);
                    cout<<"\n";
                    break;
        }
    }while(opcion != 8);
}

void mostrarArbol(Nodo *arbol,int cont){ //Función para mostrar el árbol completo
    if(arbol == NULL){ //Si el árbol está vacío
        return;
    }
    else{
        mostrarArbol(arbol->der,cont+1);
        for(int i=0;i<cont;i++){
            cout<<"   ";
        }
        cout<<arbol->dato<<endl;
        mostrarArbol(arbol->izq,cont+1);
    }
}

bool busqueda(Nodo *arbol,int n){ //Función para buscar un elemento en un árbol
    if(arbol == NULL){ //Si el árbol está vacío
        return false;
    }
    else if(arbol->dato == n){ //Si el nodo es igual al elemento
        return true;
    }
    else if(n < arbol->dato){
        return busqueda(arbol->izq,n);
    }
    else{
        return busqueda(arbol->der,n);
    }
}

void preOrden(Nodo *arbol){ //Función recorrido en profundidad preOrden
    if(arbol == NULL){ //Si el árbol está vacío
        return;
    }
    else{
        cout<<arbol->dato<<" - ";
        preOrden(arbol->izq);
        preOrden(arbol->der);
    }
}

void inOrden(Nodo *arbol){ //Función para recorrido en profundidad - In Orden
    if(arbol == NULL){
        return;
    }
    else{
        inOrden(arbol->izq);
        cout<<arbol->dato<<" - ";
        inOrden(arbol->der);
    }
}

void postOrden(Nodo *arbol){ //Función para recorrido en profundidad - Post Orden
    if(arbol == NULL){
        return;
    }
    else{
        postOrden(arbol->izq);
        postOrden(arbol->der);
        cout<<arbol->dato<<" - ";
    }
}

void eliminar(Nodo *arbol,int n){ //Eliminar un nodo del árbol
    if(arbol == NULL){
        return;
    }
    else if(n < arbol->dato){ //Si el valor es menor
        eliminar(arbol->izq,n); //Busca por la izquierda
    }
    else if(n > arbol->dato){ //Si el valor es mayor
        eliminar(arbol->der,n); //Busca por la derecha
    }
    else{ //Si ya encontraste el valor
        eliminarNodo(arbol);
    }
}

void eliminarNodo(Nodo *nodoEliminar){ //Eliminar nodo
    if(nodoEliminar->izq && nodoEliminar->der){ //Si tiene hijo izq e hijo der
        Nodo *menor = minimo(nodoEliminar->der);
        nodoEliminar->dato = menor->dato;
        eliminarNodo(menor);
    }
    else if(nodoEliminar->izq){ //Si tiene hijo izq
        reemplazar(nodoEliminar,nodoEliminar->izq);
        destruirNodo(nodoEliminar);
    }
    else if(nodoEliminar->der){ //Si tiene hijo der
        reemplazar(nodoEliminar,nodoEliminar->der);
        destruirNodo(nodoEliminar);
    }
    else{ //Si no tiene hijos (Nodo Hoja)
        reemplazar(nodoEliminar,NULL);
        destruirNodo(nodoEliminar);
    }
}

Nodo *minimo(Nodo *arbol){ //Función para determinar el nodo más izq posible
    if(arbol == NULL){ //Si el árbol está vacío
        return NULL; //Retornas NULL
    }
    if(arbol->izq){ //Si tiene hijo izq
        return minimo(arbol->izq); //Buscamos la parte más izq posible
    }
    else{ //Si no tiene hijo izq
        return arbol; //Retornamos el mismo número
    }

}

void reemplazar(Nodo *arbol,Nodo *nuevoNodo){ //Función para reemplazar dos nodos
    if(arbol->padre){
        //arbol->padre hay que asignarle el nuevo hijo
        if(arbol->dato == arbol->padre->izq->dato){
            arbol->padre->izq = nuevoNodo;
        }
        else if(arbol->dato == arbol->padre->der->dato){
            arbol->padre->der = nuevoNodo;
        }
    }
    if(nuevoNodo){
        //Procedemos a asignarle su nuevo padre
        nuevoNodo->padre = arbol->padre;
    }
}

void destruirNodo(Nodo *nodo){
    nodo->izq = NULL;
    nodo->der = NULL;
    delete nodo;
}