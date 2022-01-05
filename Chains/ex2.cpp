/* Pedir al usuario una cadena de caracteres, almacenarla en un array y copiar todo
su contenido hacia otro array de caracteres. */

#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
    char frase[20],frase2[20];

    cout<<"Elige una frase: ";
    cin.getline(frase,20,'\n');

    strcpy(frase2,frase);

    cout<<frase2<<endl; //Guardando dentro de frase2 todo lo que hay dentro de frase   
    
    cin.get();
    return 0;
}