/* Hacer una estructura llamada alumno, en la cual se nos tendrá los siguientes campos:
- Nombre
- Edad
- Promedio
Pedir datos al usuario para 3 alumnos, comprobar cuál de los 3 tiene el mejor promedio
y posteriormente imprimir los datos del alumno. */

#include<iostream>
#include<stdio.h>

using namespace std;

struct Alumno{
    char nombre[20];
    int edad;
    float promedio;
}alumnos[3];

int main(){
    float mayor = 0;
    int pos;
    
    
    for(int i=0;i<3;i++){
        //Guardando los datos para 3 alumnos
        cout<<i+1<<". Digita el nombre del alumno: "; cin.getline(alumnos[i].nombre,20,'\n');
        cout<<i+1<<". Digita la edad del alumno: "; cin>>alumnos[i].edad;
        cout<<i+1<<". Digita el promedio del alumno: "; cin>>alumnos[i].promedio;
        cout<<"\n";
        fflush(stdin);

        //Cual de los 3 alumnos tiene el mejor promedio
        if(alumnos[i].promedio > mayor){
            mayor = alumnos[i].promedio;
            pos = i;
        }
    }

    //Imprimiendo datos del mejor promedio
    cout<<"\nEl mejor promedio lo tiene el alumno: "<<endl;
    cout<<"Nombre: "<<alumnos[pos].nombre<<endl;
    cout<<"Edad: "<<alumnos[pos].edad<<endl;
    cout<<"Promedio: "<<alumnos[pos].promedio<<endl;

    cin.get();
    return 0;
}