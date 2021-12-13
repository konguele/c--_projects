/*Haz un programa que simule un cajero automático con un saldo inicial
del 1000 CHF*/

#include<iostream>

using namespace std;

int main(){
    int saldo_inicial=1000,opc;
    float extra,saldo=0,retiro=0;

    cout<<"\tBienvenido a su cajero virtual"<<endl;
    cout<<"1. Ingresar dinero en cuenta"<<endl;
    cout<<"2. Retirar dinero de la cuenta"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"\nOpción: "<<endl;
    cin>>opc;

    switch(opc){
        case 1: 
            cout<<"Elige la cantidad a ingresar: ";
            cin>>extra;
            saldo = saldo_inicial + extra;
            cout<<"Dinero en cuenta: "<<saldo<<endl;break;
        case 2:
        cout<<"Elige la cantidad a retirar: ";
        cin>>retiro;

        if(retiro > saldo_inicial){
            cout<<"NO tienes saldo suficiente"<<endl;break;
        }
        else{
            saldo=saldo_inicial - retiro;
            cout<<"Dinero en cuenta: "<<saldo<<endl;break;
        }
        case 3: break;
    }


    return 0;
}