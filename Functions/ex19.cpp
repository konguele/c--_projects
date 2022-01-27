/* Realiza una función recursiva que sume los primeros n enteros positivos
Nota: Para plantear la función recursiva ten en cuenta que la suma puede expresarse mediante la 
siguiente recurrencia:

        suma(n) = 1             , si n=1
                  n+suma(n-1)   , si n>1
*/

#include<iostream>
#include<stdio.h>
using namespace std;

//Estructuras
struct Fecha{
    int dia,mes,anyo;
}f1,f2;

//Prototipo de Función
int sumar(int);

//Variables globales


//Función principal
int main(){
    int nElementos;

    do{
        cout<<"Digita el número de elementos: "; cin>>nElementos;
    }while(nElementos <= 0);

    cout<<"\nLa suma es: "<<sumar(nElementos)<<endl;



    cin.get();
    return 0;
}

//Definición de función
int sumar(int n){
    int suma = 0;

    if(n==1){ //Caso base
        suma = 1;
    }
    else{ //Caso general
        suma = n+sumar(n-1);
    }
    return suma;
}