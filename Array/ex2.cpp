/* Escribe un programa que defina un vector de números y calcule
la multiplicación acumulada de sus elementos */

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int numeros[] = {1,8,3,5,5};
    int multiplicacion=1; //Si inicializamos a 0 el resultado de la multiplicación siempre sería 0.

    for(int i=0;i<5;i++){
        multiplicacion *= numeros[i];
    }

    cout<<"\nLa multiplicación de los elementos es: "<<multiplicacion<<endl;

    cin.get();
    return 0;
}