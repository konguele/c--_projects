/* Escribe una plantilla de función llamada despliegue() que despliegue el valor del argumento único
que se le transmite cuando es invocada la función. */

#include<iostream>
#include<stdio.h>
using namespace std;

//Prototipo de Función
template <class TIPOD>
void despliegue(TIPOD dato);

//Variables globales


//Función principal
int main(){
    int dato1 = 4;
    float dato2 = 15.67;
    double dato3 = 567.7890;
    char dato4 = 'a';

    despliegue(dato1);
    despliegue(dato2);
    despliegue(dato3);
    despliegue(dato4);



    cin.get();
    return 0;
}

//Definición de función
template <class TIPOD>
void despliegue(TIPOD dato){
    cout<<"El dato es: "<<dato<<endl;
}