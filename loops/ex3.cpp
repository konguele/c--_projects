/* Realiza un programa que calcule y muestre en la salida standard la suma de 
los cuadrados de los 10 primeros enteros mayores a 0 */

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int suma = 0,cuadrado;

    for(int i=1;i<=10;i++){
        cuadrado = i*i;
        suma += cuadrado; //Es lo mismo que suma = suma + cuadrado

    }

    cout<<"El resultado de la suma es: "<<suma<<endl;

    cin.get();
    return 0;
}