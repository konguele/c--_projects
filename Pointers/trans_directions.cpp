/* Transmisión de direcciones

Ejemplo: Intercambiar el valor de 2 variables. */

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//Estructuras


//Prototipo de Función
void intercambio(float *,float *);

//Variables globales


//Función principal
int main(){
    float num1 = 20.8,num2 = 6.78;

    cout<<"Primer número: "<<num1<<endl;
    cout<<"Segundo número: "<<num2<<endl;

    intercambio(&num1,&num2); //Llamada a la función intercambio

    cout<<"\n\nDespués del intercambio: \n\n";
    cout<<"El nuevo valor de num1: "<<num1<<endl;
    cout<<"El nuevo valor de num2: "<<num2<<endl;

    cin.get();
    return 0;
}

//Definición de función
void intercambio(float *dirNum1,float *dirNum2){
    float aux;

    //Intercambiar los valores de las variables
    aux = *dirNum1;
    *dirNum1 = *dirNum2;
    *dirNum2 = aux;
}