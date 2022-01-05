/*Desarrollar un programa que determine si una matriz es simétrica o no. Una matriz
es simétrica si es cuadrada y si es igual a su matriz transpuesta. 

|8 1 3|     |8 1 3|
|1 7 4| ->  |1 7 4|
|3 4 9|     |3 4 9|

*/

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int numeros[100][100],filas,columnas;
    char band='F';

    cout<<"Elige un número de filas: "; cin>>filas;
    cout<<"Elige el número de columnas: "; cin>>columnas;

    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<"Digita un número "<<i<<"]["<<j<<"]: ";
            cin>>numeros[i][j];
        }
    }
    
    if(filas==columnas){
        for(int i=0;i<filas;i++){
            for(int j=0;j<columnas;j++){
                if(numeros[i][j] == numeros[j][i]){
                    band='V';
                }
            }
        }
    }

    if(band == 'V'){
        cout<<"La matriz es simétrica"<<endl;
    }
    else{
        cout<<"La matriz no es simétrica"<<endl;
    }

    cin.get();
    return 0;
}