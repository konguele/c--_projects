/*Escribe un programa que lea de la entrada standard un carácter que indique en la salida
standard si el carácter es una vocal minúscula, una vocal mayúscula o no es una vocal*/
#include<iostream>

using namespace std;

int main(){
    char letra;

    cout<<"Elige un carácter: "; cin>>letra;

    switch(letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<"\nLa vocal es minúscula"<<endl;break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': cout<<"\nLa vocal es mayúscula"<<endl;break;
        default: cout<<"\nNo es una vocal"<<endl;break;
    }


    return 0;
}