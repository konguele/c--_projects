/* Paso de parámetros de tipo vector

parámetros de la función:
    void nombreDeFuncion(tipo nombreArreglo[], int tamañoArreglo)

llamada a la función
    nombreDeFuncion(nombreArreglo, tamañoArreglo)
*/

//Cuadrados de los elementos del vector

#include<iostream>
#include<stdio.h>
using namespace std;

//Prototipo de Función
void Cuadrado(int vec[], int);
void Muestra(int vec[],int);

//Variables globales


//Función principal
int main(){
    const int TAM = 5;
    int vec[TAM] = {1,2,3,4,5};

    Cuadrado(vec,TAM);
    Muestra(vec,TAM);

    cin.get();
    return 0;
}

//Definición de función

void Cuadrado(int vec[],int tam){
    for(int i=0;i<tam;i++){
        vec[i] *= vec[i];
    }
}

void Muestra(int vec[],int tam){
    for(int i=0;i<tam;i++){
        cout<<vec[i]<<" ";
    }
}