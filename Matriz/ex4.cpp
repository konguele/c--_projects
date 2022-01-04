/* Hacer una matriz preguntando al usuario el número de filas y columnas,
llenarla de números aleatorios, copiar el contenido a otra matriz y por último mostrarla
por pantalla. */

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
    int numeros[100][100];
    int filas,columnas,dato;
    int numeros2[100][100];

    cout<<"Dime cuántas filas quieres: ";
    cin>>filas;
    cout<<"Dime cuántas columnas quieres: ";
    cin>>columnas;

    srand(time(NULL)); //Genera números aleatorios

    //Rellenando la matriz de números aleatorios
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            dato = 1+rand()%(100); //Genera números aleatorios del 1 al 100
            numeros[i][j] = dato;
        }
    }
    
    //Copiando el contenido a otra matriz
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            numeros2[i][j] = numeros[i][j];
        }
    }

    //Imprimiendo matriz 2 en pantalla
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<numeros2[i][j]<<" ";
        }
        cout<<"\n";
    }

    cin.get();
    return 0;
}