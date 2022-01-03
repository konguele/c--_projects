/* Realiza un programa que calcule la descomposición en factores primos de un número entero.

por ejemplo: 20 = 2*2*5;

20|2
10|2
5 |5
1 |
*/

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
   int numero;

   cout<<"Digita un número para descomponerlo en primos: ";
   cin>>numero;

   for(int i=2;numero>1;i++){
       while(numero%i==0){
           cout<<i<<" ";
           numero /= i;
       }
   } 


    cin.get();
    return 0;
}