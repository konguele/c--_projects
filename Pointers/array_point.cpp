//Correspondencias entre arrays y punteros

#include<iostream>
#include<stdio.h>
using namespace std;

//Estructuras


//Prototipo de Función


//Variables globales


//Función principal
int main(){
    int numeros[] = {1,2,3,4,5};
    int *dir_numeros;

    dir_numeros = numeros; //Así le pasamos la posición de memoria inicial del array

    for(int i=0;i<5;i++){
        //cout<<"Elemento del vector: ["<<i<<"]: "<<*dir_numeros++<<endl;
        cout<<"Posiciones de memoria "<<numeros[i]<<" es: "<<dir_numeros++<<endl;
    }

    cin.get();
    return 0;
}

//Definición de función