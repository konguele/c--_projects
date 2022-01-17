//Búsqueda secuencial

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int a[] = {3,4,2,1,5};
    int i,dato;
    char bandera = 'F';

    dato = 4;
    //Búsqueda secuencial

    i=0;
    while((bandera == 'F') && (i<5)){
        if(a[i] == dato){
            bandera = 'V';
        }
        i++;
    }

    if(bandera == 'F'){
        cout<<"El número a buscar no existe en el array"<<endl;
    }
    else if(bandera == 'V'){
        cout<<"El número ha sido encontrado en la posición: "<<i-1<<endl;
    }

    cin.get();
    return 0;
}