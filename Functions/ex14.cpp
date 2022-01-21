/* Realiza una función que tome como parámetros un vector de enteros y su tamaño e imprima
un vector con los elementos impares del vector recibido. */

#include<iostream>
#include<stdio.h>
using namespace std;

//Prototipo de Función
void pedirDatos();
void impares(int vec[], int tam);

//Variables globales
int vec[100],tam;

//Función principal
int main(){
    pedirDatos();
    impares(vec,tam);

    cin.get();
    return 0;
}

//Definición de función
void pedirDatos(){
    cout<<"Digita el tamaño del vector: "; cin>>tam;
    for(int i=0;i<tam;i++){
        cout<<i+1<<". Digita un número: "; cin>>vec[i];
    }
}

void impares(int vec[],int tam){
    int vecImpares[100];
    int j=0;

    for(int i=0;i<tam;i++){
        if(vec[i]%2!=0){
            vecImpares[j]=vec[i];
            j++;
        }
    }

    cout<<"\nImprimiendo los elementos impares del vector: ";
    for(int i=0;i<tam;i++){
        cout<<vecImpares[i]<<" ";
    }
    cout<<endl;
}