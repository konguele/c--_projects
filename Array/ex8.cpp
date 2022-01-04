/* Hacer un programa que lea 5 números en un arreglo, los copie a otro arregle
multiplicados por 2 y muestre el segundo arreglo. */

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int numeros[5],numeros2[5];

    //Primero pedimos los elementos del vector
    for(int i=0;i<5;i++){
        cout<<i<<". Digita los elementos del array: ";
        cin>>numeros[i];
    }

    //Ahora vamos a multiplicar x2 los números del arreglo

    for(int i=0;i<5;i++){
        numeros2[i] = numeros[i] * 2;
    }

    cout<<"\nMostrando los elementos del arreglo x2: \n";
    for(int i=0;i<5;i++){
        cout<<numeros2[i]<<" ";
    }


    cin.get();
    return 0;
}