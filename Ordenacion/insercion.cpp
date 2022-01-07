//Método inserción --> Se trata de ir revisando si el número a la izquierda es mayor todo el rato


#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int numeros[] = {4,2,3,1,5};
    int i,pos,aux;

    for(i=0;i<5;i++){
        pos = i;
        aux = numeros[i];

        while((pos>0) && (numeros[pos-1] > aux)){
            numeros[pos] = numeros[pos-1];
            pos--;
        }
        numeros[pos] = aux;
    }

    cout<<"Orden ascendente: ";
    for(i=0;i<5;i++){
        cout<<numeros[i]<<" ";
    }

    cout<<"\nOrden descendente: ";
    for(i=4;i>=0;i--){
        cout<<numeros[i]<<" ";
    }

    cin.get();
    return 0;
}