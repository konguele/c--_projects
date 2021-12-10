/* Escribe el fragmento de programa que intercambie los valores de dos
variables. */

#include<iostream>

using namespace std;

int main(){
    int x,y,aux;

    cout<<"Dime un valor para x: "; cin>>x;
    cout<<"Dime un valor para y: "; cin>>y;

    aux = x;
    x = y;
    y = aux;

    cout<<"\nEl nuevo valor de x es: "<<x<<endl;
    cout<<"\nEl nuevo valor de y es: "<<y<<endl;



    return 0;
}