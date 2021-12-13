/* Realiza un programa que lea de la entrada standard un número hasta que se introduzca un 0.
En ese momento el programa debe terminar y mostrar en la salida standard el número de valores mayores
que 0 leídos. */

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int numero,conteo=0;

    do{
        cout<<"Elige un número: ";
        cin>>numero;

        if(numero>0){
            conteo++;
        }

    }while(numero != 0);

    cout<<"\nEl número de valores mayores a 0 introducidos es: "<<conteo<<endl;


    cin.get();cin.get();
    return 0;   
}