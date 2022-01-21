/* Desarrolla una función que determine si una matriz es símetrica o no.
una matriz simétrica: A = A^t

- La matriz debe ser cuadrada. _--
- Aij = Aji

|2   5   9|     |2   5   9|
|5   8  -1| ->  |5   8  -1|
|9  -1  10|     |9  -1  10|

*/

#include<iostream>
#include<stdio.h>
using namespace std;

//Prototipo de Función
void pedirDatos();
void comprobarSimetria(int m[][100],int,int);

//Variables globales
int m[100][100],nFilas,nCol;

//Función principal
int main(){
    pedirDatos();
    comprobarSimetria(m,nFilas,nCol);

    cin.get();
    return 0;
}

//Definición de función
void pedirDatos(){
    cout<<"Dime el número de filas: "; cin>>nFilas;
    cout<<"Dime el número de columnas: "; cin>>nCol;

    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nCol;j++){
            cout<<"Digita un número ["<<i<<"]["<<j<<"]: ";
            cin>>m[i][j];
        }
    }
}

void comprobarSimetria(int m[][100],int nFilas,int nCol){
    int cont=0;

    if(nFilas==nCol){
        for(int i=0;i<nFilas;i++){
            for(int j=0;j<nCol;j++){
                if(m[i][j]==m[j][i]){
                    cont++;
                }
            }
        }
    }

    if(cont==nFilas*nCol){
        cout<<"\nLa matriz es simétrica"<<endl;
    }
    else{
        cout<<"\nLa matriz no es simétrica"<<endl;
    }
}