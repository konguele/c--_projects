/*Realiza un programa que lea una matriz dinámica NxM y cree su matriz traspuesta.

NOTA: La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original

|1 2 3|     |1 4 7|
|4 5 6| ->  |2 5 8|
|7 8 9|     |3 6 9|
*/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//Estructuras


//Prototipo de Función
void pedirDatos();
void mostrarMatriz(int **,int,int);

//Variables globales
int **puntero_matriz,nFilas,nCol;

//Función principal
int main(){
    pedirDatos();
    mostrarMatriz(puntero_matriz,nFilas,nCol);

    //Liberando memoria de la matriz
    for(int i=0;i<nFilas;i++){
        delete[] puntero_matriz[i];
    }

    delete[] puntero_matriz;


    cin.get();
    return 0;
}

//Definición de función
void pedirDatos(){
    cout<<"Digita el número de filas de la matriz: "; cin>>nFilas;
    cout<<"Digita el número de columnas de la matriz: "; cin>>nCol;

    puntero_matriz = new int*[nFilas]; //Reservando memoria para las filas
    for(int i=0;i<nFilas;i++){
        puntero_matriz[i] = new int[nCol]; //Reservando memoria para las columnas
    }

    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nCol;j++){
            cout<<"Digita un número["<<i<<"]["<<j<<"]: "; cin>>*(*(puntero_matriz+i)+j);
        }
    }
}

void mostrarMatriz(int **puntero_matriz,int nFilas,int nCol){
    cout<<"\nImprimiendo la matriz original: \n";
    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nCol;j++){
            cout<<*(*(puntero_matriz+i)+j)<<" ";
        }
        cout<<"\n";
    }

    cout<<"\nImprimiendo la matriz transpuesta: \n";
    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nCol;j++){
            cout<<*(*(puntero_matriz+j)+i)<<" ";
        }
        cout<<"\n";
    }
}