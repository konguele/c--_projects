//Pasar una palabra a MAYUSCULAS - Función strupr()

#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
    char palabra[] = "juanjo";

    strupr(palabra);

    cout<<palabra<<endl;

    cin.get();
    return 0;
}