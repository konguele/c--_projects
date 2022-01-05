//Transformar una cadena a números - Función atoi() y atof()
//"123" --> 123
//"123.45" --> 123.45

#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
    char cad[] = "123";
    char cad2[] = "123.456";
    int numero;
    float numero2;

    numero = atoi(cad);
    numero2 = atof(cad2);

    cout<<numero<<endl;
    cout<<numero2<<endl;
    
    cin.get();
    return 0;
}