/*Construir un programa que permita dirigir el movimiento de un objeto dentro de un tablero y
actualice su posición dentro del mismo. Los movimientos posibles son ARRIBA, ABAJO, IZQUIERDA y
DERECHA. Tras cada movimiento el programa mostrará la nueva dirección elegida y las coordenadas
de situación del objeto dentro del tablero.*/

#include<iostream>
#include "Tablero.h"

using namespace std;

int main(int argc,char** argv){
    Tablero* ob1;
    int x,y,opcion,n;

    cout<<"Digita la posición inicial del objeto: "<<endl;
    cout<<"Posición X: "; cin>>x;
    cout<<"Posición Y: "; cin>>y;

    ob1 = new Tablero(x,y);

    do{
        cout<<"\n\t.:MENU:."<<endl;
        cout<<"1. Mover Arriba"<<endl;
        cout<<"2. Mover Abajo"<<endl;
        cout<<"3. Mover Derecha"<<endl;
        cout<<"4. Mover Izquierda"<<endl;
        cout<<"5. Salir"<<endl;
        cout<<"Digita una opción: ";
        cin>>opcion;

        if(opcion>=1 && opcion<=4){
            cout<<"\nDigita cuantas posiciones desea mover: ";
            cin>>n;
        }

        switch(opcion){
            case 1: ob1->moverArriba(n); break;
            case 2: ob1->moverAbajo(n); break;
            case 3: ob1->moverDerecha(n); break;
            case 4: ob1->moverIzquierda(n); break;
            case 5: break;
            default: cout<<"Te has equivocado de opción de menú"<<endl;

        }

        cout<<"\nPosición actual del objeto (X,Y): ("<<ob1->getX()<<","<<ob1->getY()<<")"<<endl;

    }while(opcion != 5);

    return 0;
}