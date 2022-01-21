/* Realiza una función que tome como parámetros un vector y su tamaño y diga si el vector está
ordenado crecientemente, Sugerencia: Comprueba que para todas las posiciones del vector, salvo
para la 0, el elemento del vector es mayor o igual que el elemento que le precede al vector. */

#include<iostream>
#include<stdio.h>
using namespace std;

//Prototipo de Función
void pedirDatos();
void comprobarOrdenamiento(int vec[],int tam);

//Variables globales
int vec[100],tam;

//Función principal
int main(){
    pedirDatos();
    comprobarOrdenamiento(vec,tam);


    cin.get();
    return 0;
}

//Definición de función
void pedirDatos(){
    cout<<"Digita el número de elementos del vector: ";
    cin>>tam;

    for(int i=0;i<tam;i++){
        cout<<i+1<<". Digita un número: ";
        cin>>vec[i];
    }
}

void comprobarOrdenamiento(int vec[], int tam){
    char band='F';

    int i=0;
    while((band=='F')&&(i<tam-1)){
        if(vec[i]>vec[i+1]){
            band = 'V';
        }
        i++;
    }

    if(band=='F'){
        cout<<"El arreglo está ordenado de forma creciente."<<endl;
    }
    else{
        cout<<"El arreglo no está ordenado."<<endl;
    }
}