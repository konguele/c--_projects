/* Escribe un programa en C++ que devuelva la parte praccionaria de cualquier número introducido
por el usuario. Por ejemplo si se introduce el número 256.879, debería desplegarse el número 0.879*/

#include<iostream>
#include<stdio.h>
using namespace std;

//Prototipo de Función
void pedirDatos();
float parteFraccionaria(float n);

//Variables globales
float numero;

//Función principal
int main(){
    pedirDatos();

    cout<<"La parte fraccionaria del número es: "<<parteFraccionaria(numero)<<endl;



    cin.get();
    return 0;
}

//Definición de función
void pedirDatos(){
    cout<<"Dime un número decimal: "; cin>>numero;

}

float parteFraccionaria(float n){
    int entero=n;

    float resultado = n - entero;

    return resultado;
}