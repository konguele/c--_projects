/*Matrices dinámicas

Ejemplo: Rellenar una matrix de NxM y mostrar su contenido

**puntero_matriz -> *puntero_fila -> [int] [int]
                    *puntero_fila -> [int] [int]
                    *puntero_fila -> [int] [int]

1 2 3       1   -> 2 3
4 5 6       4   -> 5 6
7 8 9       7   -> 8 9

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
    
    //Liberamos la memoria utilizada en la matriz
    for(int i=0;i<nFilas;i++){
        delete[] puntero_matriz[i];
    }

    delete[] puntero_matriz;

    cin.get();
    return 0;
}

//Definición de función
void pedirDatos(){
    cout<<"Digita el número de filas: "; cin>>nFilas;
    cout<<"Digita el número de columnas: "; cin>>nCol;

    //Reservar memoria para la matriz dinámica
    puntero_matriz = new int*[nFilas]; //Reservando memoria para las filas
    for(int i=0;i<nFilas;i++){
        puntero_matriz[i] = new int[nCol]; //Reservando memoria para las columnas
    }

    cout<<"\nDigitando elementos de la matriz: "<<endl;
    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nCol;j++){
            cout<<"Digita un número ["<<i<<"]["<<j<<"]: ";
            cin>>*(*(puntero_matriz+i)+j); //puntero_matriz[i][j]
        }
    }
}

void mostrarMatriz(int **puntero_matriz,int nFilas,int nCol){
    cout<<"\n\nImprimiendo matriz:\n";
    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nCol;j++){
            cout<<*(*(puntero_matriz+i)+j)<<" "; //puntero_matriz[i][j]
        }
        cout<<"\n";
    }
}