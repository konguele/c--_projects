/* Escribe una función recursiva que calcule un número elevado a una potencia entera
mayor o igual que cero: x^y. 

    potencia(x,y) = x                   , y=1
                    x*potencia(x,y-1)   , y>1

*/

#include<iostream>
#include<stdio.h>
using namespace std;

//Estructuras


//Prototipo de Función
int potencia(int,int);

//Variables globales


//Función principal
int main(){
    int base,exponente;

    cout<<"Digita la base: "; cin>>base;
    cout<<"Digita el exponente: "; cin>>exponente;

    cout<<"\nPotencia de "<<base<<" Elevado a "<<exponente<<" es: "<<potencia(base,exponente)<<endl;

    cin.get();
    return 0;
}

//Definición de función
int potencia(int x,int y){
    int pot;

    if(y==1){
        pot = x;
    }
    else{
        pot = x * potencia(x,y-1);
    }
    return pot;

}