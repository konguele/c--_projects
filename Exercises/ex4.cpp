/* Ejecute el programa del ejercicio anterior con entradas erróneas y observe los resultados.
Por ejemplo, introduzca un dato de tipo carácter cuando se espera un dato de tipo entero.*/

#include<iostream>

using namespace std;

int main(){
    int edad;
    char sexo[10];
    float altura;

    cout<<"Escribe tu edad: "; cin>>edad;
    cout<<"Escribe tu sexo: "; cin>>sexo;
    cout<<"Escribe tu altura en metros: "; cin>>altura;

    cout<<"\nEdad: "<<edad<<endl;
    cout<<"Sexo: "<<sexo<<endl;
    cout<<"Altura: "<<altura<<"m"<<endl;

    return 0;
}