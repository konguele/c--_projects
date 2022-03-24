//Algoritmos de Búsqueda y Ordenamiento

#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<cstdlib>
using namespace std;

//Función para generar valores aleatorios
int numerosAleatorios(){
    return rand()%30;
}

//Función lógica para calcular si es par
template <class T>
bool esPar(T valor){
    return ((valor%2) == 0);
}

int main(){
    vector<int> valores(10);

    //Generamos números aleatorios y los guardamos dentro de Vector
    generate(valores.begin(),valores.end(),numerosAleatorios);

    //Mostrar en pantalla el vector
    copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"|"));

    //Creamos un nuevo vector para almacenar los elementos pares
    vector<int> pares;

    //Iterador para recorrer el vector valores
    vector<int>::iterator i = valores.begin();

    while((i=find_if(i,valores.end(),esPar<int>)) != valores.end()){
        pares.push_back(*i);
        i++;
    } 

    cout<<"\n\n\t-Arreglo de números pares-"<<endl;

    //Mostramos el vector pares en pantalla
    copy(pares.begin(),pares.end(),ostream_iterator<int> (cout,"|"));
    cout<<endl;

    //Ordena el vector pares
    cout<<"\n\t-Pares ordenados-"<<endl;
    sort(pares.begin(),pares.end());

    //Mostramos el vector pares ordenado en pantalla
    copy(pares.begin(),pares.end(),ostream_iterator<int> (cout,"|"));
    cout<<endl;

    return 0;
}