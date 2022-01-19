/* Escribe una función llamada al_cuadrado() que calcule el cuadrado del valor
que se le transmite y despliega el resultado. La función deberá ser capaz de 
elevar al cuadrado números flotantes. */

#include<iostream>
#include<stdio.h>
using namespace std;

//Prototipo de Función
void pedirDatos();
void al_cuadrado(float n);

//Variables globales
float numero;

//Función principal
int main(){
    pedirDatos();
    al_cuadrado(numero);



    cin.get();
    return 0;
}

//Definición de función
void pedirDatos(){
    cout<<"Digita un número para saber su cuadrado: "; cin>>numero;
}

void al_cuadrado(float n){
    float elevacion;

    elevacion = n * n;

    cout<<"El número al cuadrado es: "<<elevacion<<endl;
}