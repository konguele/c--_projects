// Escribe un programa que lea las 3 notas de un alumno y calcule la nota final media de dicho alumno

#include<iostream>

using namespace std;

int main(){
    float nota1,nota2,nota3, promedio = 0;

    cout<<"Dime la primera nota: "; cin>>nota1;
    cout<<"Dime la segunda nota: "; cin>>nota2;
    cout<<"Dime la tercera nota: "; cin>>nota3;

    promedio = (nota1+nota2+nota3)/3;

    cout.precision(2);
    cout<<"\nEl promedio de las 3 notas es: "<<promedio<<endl;


    return 0;
}