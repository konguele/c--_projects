/*Crear un programa para simular un equipo de futbol (Futbolista, entrenador y doctor), para
lo cual tendremos lo siguiente:
    - Una Clase Base Persona, que tendrá los siguientes datos:
        - Nombre
        - Apellido
        - Edad
    - La clase derivada Futbolista tendrá los siguientes datos:
        - Dorsal
        - Posición
    - La clase Derivada Entrenador tendrá de dato la estrategia que utiliza.
    - La clase derivada Médico, la titulación y los años de experiencia.

Hacer un menú donde se tengan las siguientes opciones:
    a) Viaje en equipo
    b) entrenamiento
    c) Partido de fútbol
    d) Planificar el entrenamiento
    e) Entrevista
    f) Curar lesión
*/

#include<iostream>
#include<stdlib.h>
#include "Persona.h"
#include "Futbolista.h"
#include "Entrenador.h"
#include "Medico.h"

using namespace std;

Persona* equipo[4];

void menu(){
    int opcion;

    do{
        cout<<"\n\t-MENU-"<<endl;
        cout<<"1. Viaje en equipo"<<endl;
        cout<<"2. Entrenamiento"<<endl;
        cout<<"3. Partido de futbol"<<endl;
        cout<<"4. Planificar entrenamiento"<<endl;
        cout<<"5. Entrevista"<<endl;
        cout<<"6. Curar una lesión"<<endl;
        cout<<"7. Salir"<<endl;
        cout<<"Digita una opción: "; cin<<opcion;
        cout<<endl;

        switch(opcion){
            case 1: //viaje en equipo
                    break;
            case 2: //Entrenamiento
                    break;
            case 3: //Partido de futbol
                    break;
            case 4: //Planificar entrenamiento
                    break;
            case 5: //Entrevista
                    break;
            case 6: //Curar lesión
                    break;
            case 7: break;
            default: cout<<"\nTe has equivocado de opción del menú"<<endl;
        }
        cout<<endl;

    }while(opcion != 7);
}

int main(int argc,char** argv){
    equipo[0] = new Futbolista("Marc André","Ter Stegen",29,1,"Portero");
    equipo[1] = new Futbolista("Gerard","Piqué",35,3,"Defensa");
    equipo[2] = new Entrenador("Xavi","Hernández",42,"Tiki Taka");
    equipo[3] = new Medico("Ricard","Pruna",57,"Doctor",20);

    //Menú
    menu();

    return 0;
}