//Escribe un programa que calcule el valor de 2^1+2^2+2^3...n^n

#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main(){
    int suma=0,elevacion=0,n;

    cout<<"Digita el número de elementos a sumar: ";
    cin>>n;

    for(int i=1;i<=n;i++){

        elevacion = pow(2,i);
        suma += elevacion;
    }

    cout<<"\nLa suma total es: "<<suma<<endl;

    cin.get();
    return 0;
}