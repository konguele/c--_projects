/* Escribe un programa que defina un vector de números y calclule si existe algún
número en el vector cuyo valor equivale a la suma del resto de números
del vector. */

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int numeros[5] = {1,4,3,1,2};
    int suma=0,mayor=0;

    for(int i=0;i<5;i++){
        suma += numeros[i];

        if(numeros[i] > mayor){
            mayor = numeros[i];
        }

    }

    if(mayor == suma-mayor){
        cout<<"\nEl número "<<mayor<<" equivale a la suma de los demás"<<endl;
    }
    else{
        cout<<"No existe ningún número que sea igual a la suma de los demás"<<endl;
    }

    cin.get();
    return 0;
}