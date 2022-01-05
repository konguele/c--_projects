//Cadena de caracteres

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    char palabra[] = "Juanjo";
    char palabra2[] = {'J','u','a','n','j','o'};
    char nombre[20];

    cout<<"Dime tu nombre: "; 
    //cin>>nombre;--> Si usamos el cin a la que encuentre un espacio ya dejará de guardar
    //gets(nombre);-->Para caracteres usaremos mejor el gets, aunque almacena toda la cadena sin importarle el número de espacios.
    cin.getline(nombre,20,'\n'); //De esta forma respeta todos los espacios y el número de caracteres

    cout<<nombre<<endl;

    cout<<palabra<<endl;
    cout<<palabra2<<endl;   
    
    cin.get();
    return 0;
}