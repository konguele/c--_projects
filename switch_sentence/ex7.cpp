/*Hacer un menú que considere las siguientes opciones:
    1. Cubo de un número
    2. Par o impar
    3. Salir
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int opcion,num;
    float cubo,numero;

    cout<<"\t.:MENU:."<<endl;
    cout<<"1. Cubo de un número"<<endl;
    cout<<"2. Número par o impar"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"\nOpción: "; cin>>opcion;

    switch(opcion){
        case 1: cout<<"\nElige el número para obtener el cubo: "; cin>>numero;
                cubo = pow(numero,3);
                cout<<"\nEl cubo del número es: "<<cubo<<endl;
                break;
        case 2: cout<<"Elige un número para saber si es par o impar: "; cin>>num;
                if(num%2==0){
                    cout<<"\nEl numero es par"<<endl;
                }
                else{
                    cout<<"El número es impar"<<endl;
                }
                break;
        case 3: break;

    }



    return 0;
}