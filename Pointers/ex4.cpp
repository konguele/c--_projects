/* Rellenar un array con n números, posteriormente utilizando punteros determinar el menor elemento
del array. */

#include<iostream>
#include<stdio.h>
using namespace std;

//Estructuras


//Prototipo de Función


//Variables globales


//Función principal
int main(){
    int nElementos,numeros[100],*dir_numeros,menor=999999;

    cout<<"Digita el número de elementos: "; cin>>nElementos;

    for(int i=0;i<nElementos;i++){
        cout<<"Digita un número ["<<i<<"]: "; cin>>numeros[i];
    }

    dir_numeros = numeros;

    for(int i=0;i<nElementos;i++){
        if(*dir_numeros < menor){
            menor = *dir_numeros;
        }
        dir_numeros++;
    }

    cout<<"El menor elemento es: "<<menor<<endl;

    cin.get();
    return 0;
}

//Definición de función