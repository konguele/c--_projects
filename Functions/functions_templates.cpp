/* Plantillas de funciones

Ejemplo: Sacar el valor absoluto de un número */

#include<iostream>
#include<stdio.h>
using namespace std;

//Prototipo de Función
template <class TIPOD>
void mostrarAbs(TIPOD numero);

int main(){
    int num1 = -4;
    float num2 = -56.67;
    double num3 = -123.5678;

    mostrarAbs(num1);
    mostrarAbs(num2);
    mostrarAbs(num3);



    cin.get();
    return 0;
}

//Definición de función
template <class TIPOD>
void mostrarAbs(TIPOD numero){
    if(numero<0){
        numero *= -1;
    }

    cout<<"El valor absoluto del número es: "<<numero<<endl;
}