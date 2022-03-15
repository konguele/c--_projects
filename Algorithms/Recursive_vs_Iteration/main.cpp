/*Ejemplo:
Dado un número natural N, obtener la suma de los dígitos de que consta. Presentar un algoritmo
recursivo y otro iterativo.*/

#include<iostream>
using namespace std;

//Solución Recursiva
int sumaRecursiva(int n){
    if(n<=9){ //Caso base
        return n;
    }
    else{ //Caso recursivo
        return sumaRecursiva(n/10) + n%10;
    }
}

//Solución iterativa
int sumaIterativa(int n){
    int suma=0;

    while(n > 9){
        suma += n%10;
        n /= 10;
    }

    return(suma+n);
}

int main(){
    int numero;

    cout<<"Digita un número: ";
    cin>>numero;

    cout<<"\nLa suma de los dígitos del número es: "<<endl;
    cout<<"Algoritmo recursivo: "<<sumaRecursiva(numero)<<endl;
    cout<<"Algoritmo iterativo: "<<sumaIterativa(numero)<<endl;

    return 0;
}