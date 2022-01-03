/*Hacer un programa que calcule el resultado de la siguiente expresión: 1-2+3-4+5-6...n
par = -2-4-6...
impares = 1+3+5...

sumaTotal = pares+impares
*/

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int nElementos,par,sumaPares=0,sumaImpares=0,sumaTotal=0;    

    cout<<"Digite el número de elementos a sumar: ";
    cin>>nElementos;

    for(int i=1;i<=nElementos;i++){
        if(i%2==0){
            par = i*-1;
            sumaPares += par;
        }
        else{
            sumaImpares+= i;

        }
    }

    sumaTotal = sumaPares + sumaImpares;
    cout<<"\nEl resultado de la suma es: "<<sumaTotal<<endl;

    cin.get();
    return 0;
}