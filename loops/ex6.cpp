/* Escribe un programa que calcule x^y donde tanto x como y son enteros positivos,
sin utilizar la función pow*/

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int x,y,elevacion=1;

    cout<<"Digita el valor de x: ";
    cin>>x;
    cout<<"Digita el valor de y: ";
    cin>>y;

    for(int i=1;i<=y;i++){
        elevacion = elevacion * x;
    }

    cout<<"\nEl resultado de la elevación es: "<<elevacion<<endl;

    cin.get();
    return 0;
}