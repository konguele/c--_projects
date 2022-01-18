/* Realiza un programa que lea de un array de estructuras los datos de N empleados
de la empresa y que imprima los datos del empleado con mayor y menor salario. */


#include<iostream>
#include<stdio.h>

using namespace std;

struct Empleados{
    char nombre[20];
    float salario;
}emp[100];


int main(){
    int n_empleados, posM=0, posm=0;
    float mayor=0, menor=999999;

    cout<<"Digita el número de empleados: "; cin>>n_empleados;

    for(int i=0;i<n_empleados;i++){
        fflush(stdin);
        cout<<i+1<<". Digita el nombre del empleado: ";
        cin.getline(emp[i].nombre,20,'\n');
        cout<<i+1<<". Digita el salario del empleado: ";
        cin>>emp[i].salario;
        cout<<"\n";

        //Empleado de mayor salario
        if(emp[i].salario > mayor){
            mayor = emp[i].salario;
            posM = i;
        }
        //Empleado de menor salario
        if(emp[i].salario < menor){
            menor = emp[i].salario;
            posm = i;
        }

    }

    cout<<"\n.:Datos del empleado con el mayor salario:.\n";
    cout<<"Nombre: "<<emp[posM].nombre<<endl;
    cout<<"Salario: "<<emp[posM].salario<<endl;

    cout<<"\n.:Datos del empleado con el menor salario:.\n";
    cout<<"Nombre: "<<emp[posm].nombre<<endl;
    cout<<"Salario: "<<emp[posm].salario<<endl;

    cin.get();
    return 0;
}