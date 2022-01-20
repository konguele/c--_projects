/* Intercambiar el valor de 2 variables utilizando paso de párametros por
referencia*/

#include<iostream>
#include<stdio.h>
using namespace std;

//Prototipo de Función
void intercambiar(int&,int&);

//Variables globales


//Función principal
int main(){
    int num1=10,num2=15;

    cout<<"El valor de num1 es: "<<num1<<endl;
    cout<<"El valor de num2 es: "<<num2<<endl;

    intercambiar(num1,num2);

    cout<<"\nEl nuevo valor de num1 es: "<<num1<<endl;
    cout<<"El nuevo valor de num2 es: "<<num2<<endl;

    cin.get();
    return 0;
}

//Definición de función
void intercambiar(int& num1,int& num2){
    int aux;
    aux=num1;
    num1=num2;
    num2=aux;
}