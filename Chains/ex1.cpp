/*Hacer un programa que pida al usuario que digite una cadena de caracteres,
luego verificar la longitud de la cadena, y si ésta supera los 10 caracteres mostrarla
en pantalla. En caso contrario, no mostrarla */

#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
    char frase[50];

    cout<<"Digita una frase: ";
    cin.getline(frase,50,'\n');

    if(strlen(frase)>10){
        cout<<frase<<endl;
    }
    else{
        cout<<"La cadena no supera los 10 caracteres."<<endl;
    }
    
    cin.get();
    return 0;
}