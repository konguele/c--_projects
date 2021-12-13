/*Escribe un programa que lea la entrada standard de un carácter e indique en la salida standard
si el caracter es una vocal minúscula o no*/

#include<iostream>

using namespace std;

int main(){
    char letra;

    cout<<"Elige un caracter: "; cin>>letra;

    switch(letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<"\nEs una vocal minúscula"<<endl;break;
        default: cout<<"\nNo es una vocal minúscula";break;
    }


    return 0;

}