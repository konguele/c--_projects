/* Realiza una función recursiva para la serie Fibonacci
Nota: La serie de Fibonacci está formada por la secuencia de números:
            0,1,1,2,3,5,8,13,21,34,...

        fibonacci(n) = n                                , si n<2
                        fibonacci(n-1)+fibonacci(n-2)   , si n>=2
*/

#include<iostream>
#include<stdio.h>
using namespace std;

//Estructuras


//Prototipo de Función
int fibonacci(int);

//Variables globales


//Función principal
int main(){
    int nElementos;

    do{
        cout<<"Digita el número de elementos: "; cin>>nElementos;
    }while(nElementos <= 0);

    cout<<"\nSerie Fibonacci: ";
    for(int i=0;i<nElementos;i++){
        cout<<fibonacci(i)<<" , ";
    }

    cin.get();
    return 0;
}

//Definición de función
int fibonacci(int n){
    if(n<2){
        return n;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}