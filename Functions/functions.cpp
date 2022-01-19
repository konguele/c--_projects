//Ejemplo encontrar el mayor de 2 números

#include<iostream>
#include<stdio.h>
using namespace std;

//Prototipo de Función
int encontrarMax(int x, int y);

int main(){
    int n1,n2;
    int mayor;

    cout<<"Digita 1 número: "; cin>>n1;
    cout<<"Digita otro número: "; cin>>n2;

    mayor = encontrarMax(n1,n2);

    cout<<"El mayor de los números es: "<<mayor<<endl;

    //Se puede hacer más sencillo sin crear la variable, simplemente 
    //cout<<"El mayor de los números es: "<<encontrarMax(n1,n2)<<endl;

    cin.get();
    return 0;
}

//Definición de función
int encontrarMax(int x, int y){
    int numMax;

    if(x>y){
        numMax = x;
    }
    else{
        numMax = y;
    }

    return numMax;
}