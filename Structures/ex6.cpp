/* Utilizar las 2 estructuras del problema 5, pero ahora pedir los datos para N
alumnos, y calcular cuál de todos tiene el mejor promedio e imprimir sus datos. */

#include<iostream>
#include<stdio.h>

using namespace std;

struct Promedio{
    float nota1,nota2,nota3;
};

struct Alumno{
    char nombre[20];
    char sexo[10];
    int edad;
    struct Promedio prom;

}alumnos[100];

int main(){
    int numero_alumnos, posM=0;
    float promedio_alumno[100], mayor=0;

    cout<<"Dime el número de alumnos: "; cin>>numero_alumnos;

    for(int i=0;i<numero_alumnos;i++){
        fflush(stdin);
        cout<<"\nDime el nombre del alumno: "; cin.getline(alumnos[i].nombre,20,'\n');
        cout<<"Dime su sexo: "; cin.getline(alumnos[i].sexo,10,'\n');
        cout<<"Dime su edad: "; cin>>alumnos[i].edad;

        cout<<"\n.:Notas del alumno:.\n";
        cout<<"Nota 1: "; cin>>alumnos[i].prom.nota1;
        cout<<"Nota 2: "; cin>>alumnos[i].prom.nota2;
        cout<<"Nota 3: "; cin>>alumnos[i].prom.nota3;

        promedio_alumno[i] = (alumnos[i].prom.nota1+alumnos[i].prom.nota2+alumnos[i].prom.nota3)/3;

        if(promedio_alumno[i] > mayor){
            mayor = promedio_alumno[i];
            posM = i;
        }


    }

    
    cout<<"\n.:Datos del alumno con mayor promedio:.\n";
    cout<<"Nombre: "<<alumnos[posM].nombre<<endl;
    cout<<"Sexo: "<<alumnos[posM].sexo<<endl;
    cout<<"Edad: "<<alumnos[posM].edad<<endl;
    cout<<"Promedio: "<<promedio_alumno[posM]<<endl;

    cin.get();
    return 0;
}