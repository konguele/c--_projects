/* Determina si un número es primo o no; con punteros y además indicar en qué posición de
memoria se guardó el número. 

2, 3, 5, 7, 11, 13...

*/

#include<iostream>
#include<stdio.h>
using namespace std;

//Estructuras


//Prototipo de Función


//Variables globales


//Función principal
int main(){
    int numero,*dir_numero,cont=0;

    cout<<"Digita un número para saber si es primo: "; cin>>numero;

    dir_numero = &numero;

    //Determinar si el número es primo o no
    for(int i=1;i<*dir_numero;i++){
        if(*dir_numero%i==0){
            cont++;
        }
    }

    if(cont>2){
        cout<<"El número "<<*dir_numero<<" NO es primo"<<endl;
        cout<<"Posición: "<<dir_numero<<endl;
    }
    else{
        cout<<"El número "<<*dir_numero<<" es primo"<<endl;
        cout<<"Posición: "<<dir_numero<<endl;
    }
    


    cin.get();
    return 0;
}

//Definición de función