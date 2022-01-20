/* Escribe una función llamada calc_años() que tenga un parámetro entero que represente el número total
de días desde la fecha 1/1/2000 y parámetros de referencia nombrados año, mes y día. La función es
calcular el año, mes y día actual para el número dado de días que se le transmitan. Para este problema
suponga que cada año tiene 365 días y cada mes tiene 30 días.*/

#include<iostream>
#include<stdio.h>
using namespace std;

//Prototipo de Función
void calc_anios(int,int&,int&,int&);

//Variables globales


//Función principal
int main(){
    int totalDias,anio,mes,dia;

    cout<<"Dime el número total de días: "; cin>>totalDias;

    calc_anios(totalDias,anio,mes,dia);

    cout<<"Fecha Actual: "<<dia+1<<"/"<<mes+1<<"/"<<anio+2000<<endl;

    cin.get();
    return 0;
}

//Definición de función
void calc_anios(int totalDias, int& anios, int& mes, int& dias){
    anios=totalDias/365;
    totalDias %= 365;
    mes=totalDias/30;
    dias=totalDias%30;
}