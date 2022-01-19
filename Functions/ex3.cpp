/* Escribe una función nombrada funPot() que eleve un número entero que se le transmita
a una potencia en número entero positivo y despliegue el resultado. 
El número entero positivo deberá ser el segundo valor transmitido a la función. */

#include<iostream>
#include<stdio.h>
using namespace std;

//Prototipo de Función
void pedirDatos();
void funPot(int x,int y);

//Variables globales
int numero, exponente;

//Función principal
int main(){
    pedirDatos();
    funPot(numero,exponente);


    cin.get();
    return 0;
}

//Definición de función
void pedirDatos(){
    cout<<"Digita un número: "; cin>>numero;
    cout<<"Digita el exponente de elevación: "; cin>>exponente;
}

void funPot(int x,int y){
    long resultado=1;

    for(int i=1;i<=y;i++){
        resultado *= x;
    }

    cout<<"El resultado es: "<<resultado<<endl;

}