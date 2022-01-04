/* Hacer una matriz de tipo entera 2*2, llenarla de números y luego
copiar todo su contenido hacia otra matriz. */

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int numeros[2][2] = {{1,2},{3,4}},numeros2[2][2];

    //Pasando el contenido de una matriz a otra
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            numeros2[i][j] = numeros[i][j];
        }
    }

    //Mostrando la segunda matriz
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<numeros2[i][j];
        }
        cout<<"\n";
    }



    cin.get();
    return 0;
}