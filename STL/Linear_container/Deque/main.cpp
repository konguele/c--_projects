//Container Lineal - Deque

#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<char> letras;

    letras.push_front('C'); //Agregamos elementos por el principio de nuestro Array
    letras.push_front('B');
    letras.push_front('A');

    letras.push_back('D'); //Insertamos elementos por el final de nuestro Array
    letras.push_back('E');
    letras.push_back('F');

    //Mostramos los elementos de la doble cola (Deque)
    for(int i=0;i<letras.size();i++){
        cout<<letras[i]<<"|";
    }
    cout<<endl;

    letras.pop_front(); //Elimina el primer elemento de la cola
    letras.pop_back(); //Elimina el último elemento de la cola

    //Mostramos los elementos de la doble cola (Deque)
    for(int i=0;i<letras.size();i++){
        cout<<letras[i]<<"|";
    }
    cout<<endl;

    return 0;
}