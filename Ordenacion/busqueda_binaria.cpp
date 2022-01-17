//Búsqueda binaria

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int numeros[] = {1,2,3,4,5};
    int inf,sup,mitad,dato;
    char band = 'F';

    dato = 4;

    //Algoritmo de la búsqueda binaria
    inf = 0;
    sup = 5;

    while(inf <= sup){
        mitad = (inf+sup)/2;

        if(numeros[mitad] == dato){
            band = 'V';
            break;
        }
        if(numeros[mitad] > dato){
            sup = mitad;
            mitad = (inf+sup)/2;
        }
        if(numeros[mitad] < dato){
            inf = mitad;
            mitad = (inf+sup)/2;
        }
    }

    if(band == 'V'){
        cout<<"El número ha sido encontrado en la posición: "<<mitad<<endl;
    }
    else{
        cout<<"El número no ha sido encontrado: "<<endl;
    }
    cin.get();
    return 0;
}