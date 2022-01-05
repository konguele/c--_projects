//Longitud de una cadena de caracteres - Función strLen()

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    char palabra[] = "hola que tal";
    int longitud=0;

    longitud = strlen(palabra);

    cout<<"Numero de elementos de la cadena: "<<longitud<<endl;   
    
    cin.get();
    return 0;
}