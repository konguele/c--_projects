// Realiza un programa que calcule la suma de dos matrices dinámicas.

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//Estructuras


//Prototipo de Función
void pedirDatos();
void sumarMatrices(int **,int **,int,int);
void mostrarMatrizResultante(int **,int,int);

//Variables globales
int **puntero_matriz1,**puntero_matriz2,nFilas,nCol;

//Función principal
int main(){
    pedirDatos();
    sumarMatrices(puntero_matriz1,puntero_matriz2,nFilas,nCol);
    mostrarMatrizResultante(puntero_matriz1,nFilas,nCol);

    //Liberar memoria utilizada
    for(int i=0;i<nFilas;i++){
        delete[] puntero_matriz2[i];
    }
    delete[] puntero_matriz1;

    for(int i=0;i<nFilas;i++){
        delete[] puntero_matriz1[i];
    }
    delete[] puntero_matriz1;

    cin.get();
    return 0;
}

//Definición de función
void pedirDatos(){
    cout<<"Digita el número de filas: "; cin>>nFilas;
    cout<<"Digita el número de columnas: "; cin>>nCol;

    //Reservando memoria para la primera matriz
    puntero_matriz1 = new int*[nFilas]; //Reservar memoria para las filas
    for(int i=0;i<nFilas;i++){
        puntero_matriz1[i] = new int[nCol]; //Reservar memoria para las columnas
    }

    cout<<"\nDigita los elementos de la primera matriz:\n";
    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nCol;j++){
            cout<<"Digita un número["<<i<<"]["<<j<<"]: ";
            cin>>*(*(puntero_matriz1+i)+j); //puntero_matriz1[i][j]
        }
    }

    //Reservando memoria para la segunda matriz
    puntero_matriz2 = new int*[nFilas]; //Reservar memoria para las filas
    for(int i=0;i<nFilas;i++){
        puntero_matriz2[i] = new int[nCol]; //Reservar memoria para las columnas
    }

    cout<<"\nDigita los elementos de la segunda matriz:\n";
    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nCol;j++){
            cout<<"Digita un número["<<i<<"]["<<j<<"]: ";
            cin>>*(*(puntero_matriz2+i)+j); //puntero_matriz2[i][j]
        }
    }
}

void sumarMatrices(int **puntero_matriz1,int **puntero_matriz2,int nFilas,int nCol){
    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nCol;j++){
            *(*(puntero_matriz1+i)+j) += *(*(puntero_matriz2+i)+j);
        }
    }
}

void mostrarMatrizResultante(int **puntero_matriz1,int nFilas,int nCol){
    cout<<"\nLa suma de las 2 matrices es:"<<endl;
    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nFilas;j++){
            cout<<*(*(puntero_matriz1+i)+j)<<" "; //puntero_patriz[i][j]
        }
        cout<<"\n";
    }
}