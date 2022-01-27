/* Recursividad

Factorial de un número      3! = 3 * 2!

    0! = 1

Factorial(n) = 1            , si n=0
                n*factorial , si n>0
*/

#include<iostream>
#include<stdio.h>
using namespace std;

//Estructuras



//Prototipo de Función
int factorial(int);

//Variables globales


//Función principal
int main(){

    cout<<"Factorial: "<<factorial(5)<<endl;

    cin.get();
    return 0;
}

//Definición de función
int factorial(int n){
    if(n==0){ //Caso base
        n = 1;
    }
    else{ //Caso general
        n = n * factorial(n-1);
    }
    return n;
}