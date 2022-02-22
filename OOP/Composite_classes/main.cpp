//Clases compuestas: Son aquellas que sus atributos tienen objetos de otras clases

#include<iostream>
#include "Estudiante.h"

using namespace std;

int main(int argc, char** argv){
    Estudiante* estudiante1 = new Estudiante("34FG",15.6,56,"Calle Maricuchili, 69");

    estudiante1->mostrarDatos();

    return 0;
}