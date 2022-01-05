/* Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas
con iguales, en caso de no serlo, indicar cuál es mayor alfabéticamente. */

#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
    char palabra1[30],palabra2[30];

    cout<<"Digita una palabra o frase: ";
    cin.getline(palabra1,30,'\n');
    cout<<"Digita otra palabra o frase: ";
    cin.getline(palabra2,30,'\n');

    if(strcmp(palabra1,palabra2) == 0){
        cout<<"Ambas palabras son iguales"<<endl;
    }
    else if(strcmp(palabra1,palabra2) > 0){
        cout<<palabra1<<" es mayor alfabéticamente"<<endl;
    }
    else{
        cout<<palabra2<<" es mayor alfabéticamente"<<endl;
    }
    
    cin.get();
    return 0;
}