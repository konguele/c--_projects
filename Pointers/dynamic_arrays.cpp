/* Asignación dinámica de arrays

new: Reserva el número de bytes solicitado por la declaración.
delete: Libera un bloque de bytes reservado con anterioridad.

Ejemplo: Pedir al usuario n calificaciones y almacenarlos en un array dinámico.
*/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//Estructuras


//Prototipo de Función
void pedirNotas();
void mostrarNotas();

//Variables globales
int numCalif,*calif;

//Función principal
int main(){
    pedirNotas();
    mostrarNotas();

    delete[] calif; //Liberando el espacio en bytes utilizados anteriormente.

    cin.get();
    return 0;
}

//Definición de función
void pedirNotas(){
    cout<<"Digita el número de calificaciones: "; cin>>numCalif;

    calif = new int[numCalif]; //Creamos el array

    for(int i=0;i<numCalif;i++){
        cout<<"Ingresa una nota: ";
        cin>>calif[i];
    }
}

void mostrarNotas(){
    cout<<"\n\nMostrando notas del usuario:\n";
    for(int i=0;i<numCalif;i++){
        cout<<calif[i]<<endl;
    }
}