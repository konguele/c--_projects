//Escribe un programa que calcule el valor de: 1+3+5+...n

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int nElementos,sumaTotal=0;

    cout<<"Digita el número de elementos que quieres sumar: ";
    cin>>nElementos;

    for(int i=1;i<=2*nElementos-1;i+=2){
        sumaTotal += i;
    }

    cout<<"\nLa suma es: "<<sumaTotal<<endl;


    cin.get();
    return 0;
}