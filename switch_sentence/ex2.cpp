/*Escribe un programa que solicite una edad (Un entero) e indique en la salida standard
si la edad introducida está en el rango [18-25]*/

#include<iostream>

using namespace std;

int main(){
    int edad;

    cout<<"Dime tu edad: "; cin>>edad;

    if((edad>=18) && (edad<=25)){
        cout<<"Su edad está en el rango de 18 a 25"<<endl;
    }
    else{
        cout<<"Su edad no está en el rango especificado";
    }



    return 0;
}