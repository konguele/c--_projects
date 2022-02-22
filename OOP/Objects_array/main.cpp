//Arreglo de Objetos

#include <iostream>
#include "Alumno.h"

using namespace std;

int main(int argc, char** argv){
    Alumno alumnos[4]; //Creación de un array de objetos estáticos
    Alumno* alumnos2 = new Alumno[3]; //Creación de un array de objetos dinámicos

    for(int i=0;i<3;i++){
        (alumnos2+i)->pedirDatos(); //Arreglo dinámico
        //alumnos[i].mostrarNotas(); --> Arreglo estático
        cout<<endl;
    }

    cout<<"Mostrando las notas: "<<endl;
    for(int i=0;i<3;i++){
        (alumnos2+i)->mostrarNotas();
        cout<<endl;
    }

    return 0;
}