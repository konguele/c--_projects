/*Escribe un programa que lea valores enteros hasta que se introduzca un valor
 en el rango [20-30] o se introduzca un valor 0. El programa debe entregar la suma de los valores
 mayores a 0 introducidos.*/

#include<iostream>
#include<stdio.h>

using namespace std;


 int main(){
     int numero, suma = 0;

     do{
         cout<<"Elige un número: "; cin>>numero;

         if(numero>0){
             suma+=numero;
         }

     }while(((numero<20) || (numero>30)) && (numero != 0));

    cout<<"\nLa suma es: "<<suma<<endl;

     cin.get();
    return 0;
 }