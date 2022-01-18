/* Defina una estrucutra que sirva para representar a una persona. La estructura debe contener
dos campos:
- Nombre
- Valor lógico que indique si la persona tiene discapacidad
Realiza un programa que dado un vector de personas rellene dos nuevos vectores:
- No discapacidad
- Discapacidad */

#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

struct Persona{
    char nombre[30];
    bool discapacidad;
}personas[100],personasSinD[100],personasConD[100];
//personasSinD --> Personas sin discapacidad
//personasConD --> Personas con discapacidad

int main(){
    int numero_personas,j=0,k=0;

    cout<<"Dime el número de personas: "; cin>>numero_personas;
    
    //Rellenando el vector con los datos de las personas
    for(int i=0;i<numero_personas;i++){
        fflush(stdin);
        cout<<"Dime su nombre: "; cin.getline(personas[i].nombre,30,'\n');
        cout<<"La persona tiene discapacidad (1/0): "; cin>>personas[i].discapacidad;

        //Almacenando personas con discapacidad
        if(personas[i].discapacidad == 1){
            strcpy(personasConD[j].nombre,personas[i].nombre);
            j++;
        }
        else{
            strcpy(personasSinD[k].nombre,personas[i].nombre);
            k++;
        }
    }

    cout<<"\n.:Mostrando a las personas sin discapacidad:.\n";
    for(int i=0;i<k;i++){
        cout<<personasSinD[i].nombre<<endl;
    }
    cout<<"\n.:Mostrando a las personas con discapacidad:.\n";
    for(int i=0;i<j;i++){
        cout<<personasConD[i].nombre<<endl;
    }


    cin.get();
    return 0;
}