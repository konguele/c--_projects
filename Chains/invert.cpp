//Invertir una cadena - Función strrev()

#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
    char cad[] = "Juanjo";

    strrev(cad);

    cout<<cad<<endl;
    
    cin.get();
    return 0;
}