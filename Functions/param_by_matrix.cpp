//Paso de parámetros tipo matriz

//Elevar al cuadrado todos los elementos de una matriz

#include<iostream>
#include<stdio.h>
using namespace std;

//Prototipo de Función
void mostrarMatriz(int m[][3],int,int);
void calcularCuadrado(int m[][3],int,int);
void mostrarMatrizElevada(int m[][3],int,int);

//Variables globales


//Función principal
int main(){
    const int nFilas = 2;
    const int nCol = 3;
    int m[nFilas][nCol] = {{1,2,3},{4,5,6}};

    mostrarMatriz(m,nFilas,nCol);
    calcularCuadrado(m,nFilas,nCol);
    mostrarMatrizElevada(m,nFilas,nCol);

    cin.get();
    return 0;
}

//Definición de función
void mostrarMatriz(int m[][3],int nFilas,int nCol){
    cout<<"Mostrando matrix original:\n";
    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nCol;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}

void calcularCuadrado(int m[][3],int nFilas,int nCol){
    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nCol;j++){
            m[i][j] *= m[i][j];
        }
    }
    cout<<endl;
}

void mostrarMatrizElevada(int m[][3],int nFilas,int nCol){
    cout<<"\n\nMostrando matriz elevada al cuadrado\n";
    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nCol;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}