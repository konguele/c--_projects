//Copiar el contenido de una cadena a otra - Función strcpy()

#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
    char nombre[] = "Juanjo";
    char nombre2[20];

    strcpy(nombre2,nombre);
    cout<<nombre2<<endl;
    
    cin.get();
    return 0;
}