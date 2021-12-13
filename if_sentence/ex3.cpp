// Realiza un programa que lea un valor entero y determine si es par o impar

#include<iostream>

using namespace std;

int main(){
    int numero;

    cout<<"Elige un número entero: "; cin>>numero;

    //Lo que hacemos en este caso es dividir entre 0 y validar si el residuo es 0
    if(numero==0){
        cout<<"El número es igual a 0"<<endl;
    }
    else if(numero%2==0){
        cout<<"\nEl número es par"<<endl;
    }
    else{
        cout<<"\nEl número es impar"<<endl;
    }


    return 0;
}