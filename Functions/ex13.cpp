/* Realiza una función que tome como parámetros un vector de números y su tamaño
y cambie el signo de los elementos del vector. */

#include<iostream>
#include<stdio.h>
using namespace std;

//Prototipo de Función
void pedirDatos();
void cambiarSigno(int vec[], int tam);
void mostrarVector(int vec[],int tam);

//Variables globales
int vec[100],tam;

//Función principal
int main(){
    pedirDatos();
    cambiarSigno(vec,tam);
    mostrarVector(vec,tam);


    cin.get();
    return 0;
}

//Definición de función
void pedirDatos(){
    cout<<"Digita el tamaño del vector: "; cin>>tam;

    for(int i=0;i<tam;i++){
        cout<<i+1<<". Digita un número: ";
        cin>>vec[i];
    }
}

void cambiarSigno(int vec[], int tam){
    for(int i=0;i<tam;i++){
        vec[i] *= -1;
    }
}

void mostrarVector(int vec[],int tam){
    cout<<"\nMostrando los elementos del vector con signo cambiado\n";
    for(int i=0;i<tam;i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}