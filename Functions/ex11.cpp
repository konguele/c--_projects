/* Realiza una función que tome como parámetros un vector de números enteros y
devuelva la suma de sus elementos.*/

#include<iostream>
#include<stdio.h>
using namespace std;

//Prototipo de Función
void pedirDatos();
int calcularSuma(int vec[],int);

//Variables globales
int vec[100],tam;

//Función principal
int main(){
    pedirDatos();

    cout<<"\nLa suma de los elementos del vector es: "<<calcularSuma(vec,tam)<<endl;

    cin.get();
    return 0;
}

//Definición de función
void pedirDatos(){
    cout<<"Dime el número de elementos del vector: "; cin>>tam;

    for(int i=0;i<tam;i++){
        cout<<i+1<<". Digita un número: ";
        cin>>vec[i];
    }
}

int calcularSuma(int vec[], int tam){
    int suma=0;

    for(int i=0;i<tam;i++){
        suma += vec[i];
    }

    return suma;
}