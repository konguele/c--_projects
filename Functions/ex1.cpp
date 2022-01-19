/* Escribe una función llamada mult() que acepte dos números en punto
flotante como parámetros, multiplica estos dos números y despliega el resultado*/

#include<iostream>
#include<stdio.h>
using namespace std;

//Prototipo de Función
void pedirDatos();
void mult(float x, float y);

//variables globales
float num1,num2;

//Función principal
int main(){
    pedirDatos();
    mult(num1,num2);


    cin.get();
    return 0;
}

//Definición de función
void pedirDatos(){
    cout<<"Digita un número: "; cin>>num1;
    cout<<"Digita otro número: "; cin>>num2;   
}

void mult(float x, float y){
    float multiplicacion = x * y;
    cout<<"La multiplicación es: "<<multiplicacion<<endl;
}