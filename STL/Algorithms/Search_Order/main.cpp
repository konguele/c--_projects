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

int main(){
    vector<int> valores(10);

    //Generamos números aleatorios y los guardamos dentro de Vector
    generate(valores.begin(),valores.end(),numerosAleatorios);

    //Mostrar en pantalla el vector
    copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"|"));

    return 0;
}