/* Escribe una función en C++ llamada mayor() que devuelva la fecha más reciente de cualquier
par de fechas que se le transmitan. Por ejemplo, si se transmiten las fechas 10/9/2005 y 11/3/2015
a mayor(), será devuelta la segunda fecha. */

#include<iostream>
#include<stdio.h>
using namespace std;

//Estructuras
struct Fecha{
    int dia,mes,anyo;
}f1,f2;

//Prototipo de Función
void pedirDatos();
Fecha mayor(Fecha,Fecha);
void muestra(Fecha);

//Variables globales


//Función principal
int main(){
    pedirDatos();

    Fecha x = mayor(f1,f2);

    muestra(x);

    cin.get();
    return 0;
}

//Definición de función
void pedirDatos(){
    cout<<"Digita la primera fecha: "<<endl;
    cout<<"Día: "; cin>>f1.dia;
    cout<<"Mes: "; cin>>f1.mes;
    cout<<"Año: "; cin>>f1.anyo;

    cout<<"\nDigita la segunda fecha: "<<endl;
    cout<<"Día: "; cin>>f2.dia;
    cout<<"Mes: "; cin>>f2.mes;
    cout<<"Año: "; cin>>f2.anyo;
}

Fecha mayor(Fecha f1,Fecha f2){
    Fecha mayorFecha;

    if((f1.anyo >= f2.anyo) && (f1.mes >= f2.mes) && (f1.dia >= f2.dia)){
        mayorFecha = f1;

    }
    else{
        mayorFecha = f2;
    }

    return mayorFecha;
}

void muestra(Fecha x){
    cout<<"\nLa fecha más reciente es: "<<x.dia<<"/"<<x.mes<<"/"<<x.anyo<<endl;
}