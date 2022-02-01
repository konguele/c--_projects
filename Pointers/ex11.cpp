/* Hacer una estructura llamada alumno, en la cual se tendrán los siguientes campos:
- Nombre
- Edad
- Promedio
Pedir los datos al usuario para 3 alumnos, comprobar cuál de los 3 tiene el mejor promedio
y posteriormente imprimir los datos del alumno.
NOTA: Usar punteros a estructuras. */

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//Estructuras
struct Alumno{
    char nombre[30];
    int edad;
    float promedio;
}alumno[3],*puntero_alumno = alumno;

//Prototipo de Función
void pedirDatos();
void calcularMejorPromedio(Alumno *);

//Variables globales


//Función principal
int main(){
    pedirDatos();
    calcularMejorPromedio(puntero_alumno);


    cin.get();
    return 0;
}

//Definición de función
void pedirDatos(){
    for(int i=0;i<3;i++){
        fflush(stdin);
        cout<<"Digita el nombre del alumno: ";
        cin.getline((puntero_alumno+i)->nombre,30,'\n');
        cout<<"Digita la edad del alumno: ";
        cin>>(puntero_alumno+i)->edad;
        cout<<"Digita el promedio del alumno: ";
        cin>>(puntero_alumno+i)->promedio;
        cout<<"\n";
    }
}

void calcularMejorPromedio(Alumno *puntero_alumno){
    float mayor = 0.0;
    int pos=0;

    for(int i=0;i<3;i++){
        if((puntero_alumno+i)->promedio > mayor){
            mayor = (puntero_alumno+i)->promedio; //Comprobar el mayor promedio
            pos = i; //Guardamos la posición del mayor promedio
        }
    }

    //Imprimir los datos del alumno con mayor promedio
    cout<<"\nEl alumno con mejor promedio es: \n";
    cout<<"Nombre: "<<(puntero_alumno+pos)->nombre<<endl;
    cout<<"Edad: "<<(puntero_alumno+pos)->edad<<endl;
    cout<<"Promedio: "<<(puntero_alumno+pos)->promedio<<endl;
}