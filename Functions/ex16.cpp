/* Realiza una función que dada una matriz y un número de fila de la matriz devuelva
el menor de los elementos almacenados en dicha fila. */

#include<iostream>
#include<stdio.h>
using namespace std;

//Prototipo de Función
void pedirDatos();
int comprobarMenorElemento(int m[][100],int,int);

//Variables globales
int m[100][100],nfilas,ncol;

//Función principal
int main(){
    pedirDatos();
    
    cout<<"\nEl menor elemento es: "<<comprobarMenorElemento(m,nfilas,ncol);



    cin.get();
    return 0;
}

//Definición de función
void pedirDatos(){
    cout<<"Dime el número de filas: "; cin>>nfilas;
    cout<<"Dime el número de columnas: "; cin>>ncol;

    for(int i=0;i<nfilas;i++){
        for(int j=0;j<ncol;j++){
            cout<<"Dime un número ["<<i<<"] ["<<j<<"]: ";
            cin>>m[i][j];
        }
    }
}

int comprobarMenorElemento(int m[][100],int nfilas,int ncol){
    int fila,menor=99999;

    cout<<"\nDigita un número de fila para comprobar el menor elemento: "; cin>>fila;
    for(int i=0;i<nfilas;i++){
        for(int j=0;j<ncol;j++){
            if(i==fila){
                if(m[i][j] < menor){
                    menor = m[i][j];
                }
            }
        }
    }
    return menor;
}