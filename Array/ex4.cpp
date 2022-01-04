/* Escribe un programa que defina un vector de números y muestre en la salida standard
el vector en orden inverso del último al primero. */

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int numeros[5] = {1,2,3,4,5};

    for(int i=4;i>=0;i--){
        cout<<numeros[i]<<endl;
    }

    cin.get();
    return 0;
}