//Escribe un programa que calcule el valor de: 1*2*3*...n (Factorial de un número)

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int numero,factorial=1;

    cout<<"Digita un número: "; cin>>numero;

    for(int i=1;i<=numero;i++){
        factorial = factorial * i; //factorial *= i; Es lo mismo
    }

    cout<<"\nEl factorial del número es: "<<factorial<<endl;

    cin.get();
    return 0;
}