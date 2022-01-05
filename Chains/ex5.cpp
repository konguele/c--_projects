/* Pedir al usuario 2 cadenas de caracteres de números, uno entero y otro real,
convertirlos en sus respectivos valores y por último sumarlos. */

#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
    char cad1[20],cad2[20];
    int numero;
    float numero2;

    //Guardamos los números como cadenas
    cout<<"Digita un valor entero: ";
    cin.getline(cad1,20,'\n');
    cout<<"Digita un valor flotante: ";
    cin.getline(cad2,20,'\n');
    
    //Transformamos las cadenas a números
    numero=atoi(cad1);
    numero2=atof(cad2);

    //Sumar los dos números
    cout<<"La suma es: "<<numero+numero2<<endl;

    cin.get();
    return 0;
}