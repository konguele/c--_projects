/* Desarrolla un programa que lea de la entrada standard un vector de enteros y
determine el mayor elemento del vector. */

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int numeros[100],n,mayor;

    cout<<"\nDigita el número de elementos del array: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<i+1<<". Digita un número: ";
        cin>>numeros[i];

        if(numeros[i] > mayor){
            mayor = numeros[i];
        }
    }

    cout<<"\nEl mayor elemento del vector es: "<<mayor<<endl;

    cin.get();
    return 0;
}