/* Transmisión de arrays

Ejemplo: Hallar el máximo elemento de un array */

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//Estructuras


//Prototipo de Función
int hallarMax(int *,int);

//Variables globales


//Función principal
int main(){
    const int nElementos = 5;
    int numeros[nElementos] = {3,5,12,8,1};

    cout<<"El mayor elemento es: "<<hallarMax(numeros,nElementos);

    cin.get();
    return 0;
}

//Definición de función
int hallarMax(int *dirVec,int nElementos){
    int max = 0;

    for(int i=0;i<nElementos;i++){
        if(*(dirVec+i)>max){
            max = *(dirVec+i);
        }
    }

    return max;
}