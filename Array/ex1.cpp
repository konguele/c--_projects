/* Escribe un programa que defina un vector de números y calcule
la suma de todos sus elementos. */

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int numeros[]={1,2,3,4,5};
    int suma = 0;

    for(int i=0;i<5;i++){ //Todos los array inician en 0, si empezamos con i=1 obviará siempre el primer elemento
        suma += numeros[i];
    }

    cout<<"\nLa suma de los elementos del vector es: "<<suma<<endl;

    cin.get();
    return 0;
}