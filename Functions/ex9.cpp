/* Escribe una función llamada tiempo() que tenga un parámetro en número entero llamado totalSeg
y tres parámetros de referencia enteros nombrados horas, min y seg. La función es convertir
el número de segundos transmitidos en un número equivalente de horas, minutos y segundos. */

#include<iostream>
#include<stdio.h>
using namespace std;

//Prototipo de Función
void tiempo(int,int&,int&,int&);

//Variables globales


//Función principal
int main(){
    int totalSeg,horas,min,seg;

    cout<<"Dime un número de segundos para pasar a horas, mins y seg: "; cin>>totalSeg;

    tiempo(totalSeg,horas,min,seg);

    cout<<"\nTiempo equivalente a la cantidad de segundos digitados es: "<<endl;
    cout<<"Horas: "<<horas<<endl;
    cout<<"Minutos: "<<min<<endl;
    cout<<"Segundos: "<<seg<<endl;

    cin.get();
    return 0;
}

//Definición de función
void tiempo(int totalSeg,int& horas,int& min, int& seg){
    horas = totalSeg/3600;
    totalSeg %= 3600;
    min = totalSeg/60;
    seg = totalSeg%60;
}