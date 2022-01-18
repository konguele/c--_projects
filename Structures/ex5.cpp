/* Hacer 2 estructuras. Una llamada promedio que tendrá los siguientes campos:
- Nota 1
- Nota 2
- Nota 3
Y otro llamado alumno que tendrá los siguientes campos:
- Nombre
- Sexo
- Edad
Hacer que la estructura promedio esté anidada a la estructura alumno, luego pedir todos los datos
para un alumno, calcular su promedio y por último, imprimir todos sus datos incluido el promedio. */

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

}alumno1;

int main(){
    float promedio_alumno;

    cout<<"Dime el nombre del alumno: "; cin.getline(alumno1.nombre,20,'\n');
    cout<<"Dime su sexo: "; cin.getline(alumno1.sexo,10,'\n');
    cout<<"Dime su edad: "; cin>>alumno1.edad;

    cout<<"\n.:Notas del alumno:.\n";
    cout<<"Nota 1: "; cin>>alumno1.prom.nota1;
    cout<<"Nota 2: "; cin>>alumno1.prom.nota2;
    cout<<"Nota 3: "; cin>>alumno1.prom.nota3;

    promedio_alumno = (alumno1.prom.nota1+alumno1.prom.nota2+alumno1.prom.nota3)/3;

    cout<<"\n.:Datos del alumno:.\n";
    cout<<"Nombre: "<<alumno1.nombre<<endl;
    cout<<"Sexo: "<<alumno1.sexo<<endl;
    cout<<"Edad: "<<alumno1.edad<<endl;
    cout<<"Promedio: "<<promedio_alumno<<endl;

    cin.get();
    return 0;
}