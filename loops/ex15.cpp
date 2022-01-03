/* Realiza un programa que solicite al usuario que piense un número entero entre el 1 y el 100.
el programa debe generar aleatoriamente un número en ese mismo rango [1-100], e indicarle al
usuario si el número que digitó es menor o mayor al número aleatorio, así hasta que adivine.
Por último mostrarle el número de intentos que le ha llevado.

variable = limite_inferior +rand() % (limite_superior +1 - limite_inferior);
*/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
    int numero,dato,contador=0;

    srand(time(NULL)); //Genera un número aleatorio
    dato = 1 + rand()%(100);

    do{
        cout<<"Intenta adivinar el número en el que pienso entre 1 y 100: "; cin>>numero;

        if(numero>dato){
            cout<<"\nDigita un número menor\n";
        }
        if(numero<dato){
            cout<<"\nDigita un número mayor\n";
        }
        contador++;
    }while(numero != dato);

    cout<<"\nFELICIDADES! ADIVINASTE EL NÚMERO!!\n";
    cout<<"Número de intentos: "<<contador<<endl;

    cin.get();
    return 0;
}