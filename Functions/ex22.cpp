/* Escribe una función escribeNumeros(int ini, int fin) que devuelva en la salida standard
los números del ini al fin. Escribe una versión que escriba los números en órden ascendente.

        escribeNumeros(ini,fin) = ini                       , si ini=fin
                                  escribeNumeros(ini,fin-1) , si fin>ini

*/

#include<iostream>
#include<stdio.h>
using namespace std;

//Estructuras


//Prototipo de Función
int escribeNumeros(int,int);

//Variables globales


//Función principal
int main(){
    int ini,fin;

    cout<<"Digita un inicio: "; cin>>ini;
    cout<<"Digita un final: "; cin>>fin;

    for(int i=ini;i<=fin;i++){
        cout<<escribeNumeros(i,fin)<<" ";
    }

    cin.get();
    return 0;
}

//Definición de función
int escribeNumeros(int ini,int fin){
    if(ini == fin){
        return ini;
    }
    else{
        return escribeNumeros(ini,fin-1);
    }
}