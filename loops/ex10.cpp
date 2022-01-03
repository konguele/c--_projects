//Escribe un programa que calcule el valor de: 1!+2!+3!+...n! (Suma de factoriales)

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int nElementos,factorial=1,suma=0;

    cout<<"Digita el número de elementos a sumar: "; cin>>nElementos;

    for(int i=1;i<=nElementos;i++){
        factorial = factorial * i; //factorial *= i; Es lo mismo

        suma += factorial;

    }

    cout<<"\nLa suma de factoriales es: "<<suma<<endl;

    cin.get();
    return 0;
}