/* Crea una cadena que tenga la siguiente frase "Hola que tal", luego crea otra
cadena para preguntarle al usuario su nombre, por último añadir el nombre al final
de la primera cadena y mostrar el mensaje completo "Hola que tal (Nombre_Usuario)" */

#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
    char frase1[] = "Hola que tal ";
    char frase2[30];

    cout<<"Dime tu nombre: ";
    cin.getline(frase2,30,'\n');

    strcat(frase1,frase2); //Concatenando las dos cadenas

    cout<<"Frase: "<<frase1<<endl;
    
    cin.get();
    return 0;
}