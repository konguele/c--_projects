/* Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas
y columnas, posteriormente mostrar la matriz por pantalla. */

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int numeros[100][100],filas,columnas;

    cout<<"Dime cuantas filas quieres: ";
    cin>>filas;
    cout<<"Dime cuantas columnas quieres: ";
    cin>>columnas;

    //Almacenamos los elementos en la matriz
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<"Digita un número ["<<i<<"]["<<j<<"]: ";
            cin>>numeros[i][j];
        }
    }

    //Mostrando la matriz
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<numeros[i][j];
        }
        cout<<"\n";
    }

    cin.get();
    return 0;
}