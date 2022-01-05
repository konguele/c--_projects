//Pasar una palabra a minusculas - Función strlwr()

#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
    char palabra[] = "STILU GAMES";

    strlwr(palabra);

    cout<<palabra<<endl;
    
    cin.get();
    return 0;
}