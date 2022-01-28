/* Pedir una cadena de caracteres (String) al usuario, e indicar cuantas veces aparece
la vocal a, e, i, o, u; en la cadena de caracteres.

NOTA: Usa los punteros.
*/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//Estructuras


//Prototipo de Función
void pedirDatos();
void contarVocales(char *);

//Variables globales
char palabraUsuario[40];

//Función principal
int main(){
    pedirDatos();
    contarVocales(palabraUsuario);


    cin.get();
    return 0;
}

//Definición de función
void pedirDatos(){
    cout<<"Digita una palabra o frase: "; cin.getline(palabraUsuario,40,'\n');

    //strupr(palabraUsuario); //Pasar a mayúscula la palabra del usuario
}

void contarVocales(char *palabra){
    int contA=0,contE=0,contI=0,contO=0,contU=0;

    while(*(palabra)){
        switch(*palabra){
            case 'A': contA++;break;
            case 'E': contE++;break;
            case 'I': contI++;break;
            case 'O': contO++;break;
            case 'U': contU++;break;
            case 'a': contA++;break;
            case 'e': contE++;break;
            case 'i': contI++;break;
            case 'o': contO++;break;
            case 'u': contU++;break;
        }
        palabra++;
    }

    cout<<"\n\nEl Número de veces de la vocal A: "<<contA<<endl;
    cout<<"El Número de veces de la vocal E: "<<contE<<endl;
    cout<<"El Número de veces de la vocal I: "<<contI<<endl;
    cout<<"El Número de veces de la vocal O: "<<contO<<endl;
    cout<<"El Número de veces de la vocal U: "<<contU<<endl;
}