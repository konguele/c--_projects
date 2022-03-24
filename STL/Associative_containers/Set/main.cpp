//Contenedores asociativos - Set

#include<iostream>
#include<iterator>
#include<algorithm>
#include<set> //Para set y multiset
using namespace std;

int main(){
    set<int> valores; //Creando un set (Conjunto de datos)

    //Insertamos elementos
    valores.insert(5);
    valores.insert(3);
    valores.insert(10);
    valores.insert(1);
    valores.insert(15);

    //Mostrar nuestro Set en pantalla
    copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"|"));
    cout<<endl;

    valores.insert(3);
    valores.insert(10);

    //Mostrar nuestro Set en pantalla (Ignora los valores duplicados)
    copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"|"));
    cout<<endl;

    //Búsqueda de un elemento de nuestro Set
    set<int>::iterator i = valores.find(12);

    if(i != valores.end()){
        cout<<"\nEl elemento "<<*i<<" SI ha sido encontrado"<<endl;
    }
    else{
        cout<<"\nEl elemento NO ha sido encontrado"<<endl;
    }

    //Eliminar un elemento del Set
    valores.erase(1);

    //Mostrar nuestro Set en pantalla (con los valores indicados eliminados)
    copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"|"));
    cout<<endl;

    return 0;
}