//Container Lineal - List

#include<iostream>
#include<list>

using namespace std;


int main(){
    list<int> datos;

    //Agregar elementos a la lista
    datos.push_back(5); //Agregamos un elemento por el final
    datos.push_back(1);
    datos.push_back(6);


    datos.push_front(2); //Agregamos un elemento por el principio
    datos.push_front(7);

    //Ordenar los elementos de menor a mayor
    datos.sort();

    list<int>::iterator i; //Creamos el iterador que nos ayuda a recorrer la lista
    i = datos.begin(); //Apuntamos el iterador al primer valor de nuestra lista

    while(i != datos.end()){
        cout<< *i <<"|";

        i++;
    }

    cout<<endl;

    //Eliminar elementos de la lista
    datos.pop_back(); //Elimina el último elemento de la lista
    datos.pop_front(); //Elimina el primer elemento de la lista

    i = datos.begin(); //Apuntamos el iterador al primer valor de nuestra lista
    while(i != datos.end()){
        cout<< *i <<"|";

        i++;
    }

    cout<<endl;


    return 0;
}