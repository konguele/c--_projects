//Paso de parámetros por referencia

#include<iostream>
#include<stdio.h>
using namespace std;

//Prototipo de Función
void valNuevo(int&,int&);

//Variables globales


//Función principal
int main(){
    int num1,num2;

    cout<<"Digita 2 números: "; cin>>num1>>num2;

    valNuevo(num1,num2);

    cout<<"El nuevo valor del primer número es: "<<num1<<endl;
    cout<<"El nuevo valor del segundo número es: "<<num2<<endl;

    cin.get();
    return 0;
}

//Definición de función
void valNuevo(int& xnum, int& ynum){
    cout<<"El valor del primer número es: "<<xnum<<endl;
    cout<<"El valor del segundo número es: "<<ynum<<endl;

    xnum=89;
    ynum=45;
}