/* Escribe una función nombrada cambio() que tenga un parámetro en número entero y seis
parámetros de referencia en número enter nombrados cien, cincuenta, veinte, diez, cinco y
uno, respectivamente. La función tiene que considerar el valor entero transmitido como
una cantidad en dólares y convertir el valor en el número menor de billetes equivalentes.*/

#include<iostream>
#include<stdio.h>
using namespace std;

//Prototipo de Función
void cambio(int,int&,int&,int&,int&,int&,int&);

//Variables globales


//Función principal
int main(){
    int valor,cien,cincuenta,veinte,diez,cinco,uno;

    cout<<"Dime cuántos dólares tienes: "; cin>>valor;
    
    cambio(valor,cien,cincuenta,veinte,diez,cinco,uno);

    cout<<"Cantidad de billetes a entregar como cambio: "<<endl;
    cout<<"Cien: "<<cien<<endl;
    cout<<"Cincuenta: "<<cincuenta<<endl;
    cout<<"Veinte: "<<veinte<<endl;
    cout<<"Diez: "<<diez<<endl;
    cout<<"Cinco: "<<cinco<<endl;
    cout<<"Uno: "<<uno<<endl;

    cin.get();
    return 0;
}

//Definición de función
void cambio(int valor, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){
    cien = valor/100;
    valor %= 100;
    cincuenta = valor/50;
    valor %= 50;
    veinte = valor/20;
    valor %= 20;
    diez = valor/10;
    valor %= 10;
    cinco = valor/5;
    uno = valor%5;
}