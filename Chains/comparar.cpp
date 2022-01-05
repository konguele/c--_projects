//Comparar cadenas - Función strcmp()

#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
    char palabra1[] = "becerro";
    char palabra2[] = "avion";

    /*if(strcmp(palabra1,palabra2) == 0){
        cout<<"Ambas cadenas son iguales"<<endl;
    } --> Función por si son iguales */

    /*if(strcmp(palabra1,palabra2) != 0){
        cout<<"Ambas cadenas son diferentes"<<endl;
    } --> Función por si son diferentes */

    if(strcmp(palabra1,palabra2) > 0){
        cout<<palabra1<<" está después alfabéticamente"<<endl;

    } //También compara qué palabra va primero alfabéticamente
    
    cin.get();
    return 0;
}