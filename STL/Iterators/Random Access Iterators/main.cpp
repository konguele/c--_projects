//Iteradores - Random Access Iterators

#include<iostream>
#include<vector>
#include<cstdlib>

using namespace std;

//Función template para mostrar los elementos de un contenedor
template<class Iter>
void mostrarEnPantalla(Iter inicio,Iter final){
    while(inicio != final){
        cout<< *inicio <<"|";
        inicio++;
    }
}

int main(){
    vector<char> letras(10); //Creando el vector de 10 elementos char

    //Agregando elementos aleatorios al vector
    for(int i=0;i<10;i++){
        letras[i] = 'A' + (rand() % 26);
    }
    
    //Visualizar los elementos del vector
    mostrarEnPantalla(letras.begin(),letras.end());
    cout<<endl;

    //Visualizar los elementos del vector al revés
    mostrarEnPantalla(letras.rbegin(),letras.rend());
    cout<<endl;

    //Visualizar los elementos del medio del vector
    mostrarEnPantalla(letras.begin()+1,letras.end()-1);
    cout<<endl;

    return 0;
}