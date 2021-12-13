/* Realiza un programa que solicite de la entrada standard un entero del 1
al 10 y muestre en la salida standard su tabla de multiplicar */

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int numero;

    do{
        cout<<"Elige un número: "; cin>>numero;
    }while((numero<1) || (numero>10));

    for(int i=1;i<=20;i++){
        cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
    }

    cout<<"\n\n";
    cin.get();

    return 0;
}