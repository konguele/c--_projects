/* Escribe un programa que lea de la entrada standard un vector de números
y muestre en la salida standard los números del vector con sus índices asociados */

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int numeros[100],n;

    cout<<"Dime el número de elementos que tendrá el array: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Digita un número: ";
        cin>>numeros[i]; //guardando todos los elementos del vector
    }

    //Ahora, vamos a mostrar los elementos con sus índices asociados

    for(int i=0;i<n;i++){
        cout<<i<<" -> "<<numeros[i]<<endl;
    }

    cin.get();
    return 0;
}