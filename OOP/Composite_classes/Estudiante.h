/*Jugando con las clases compuestas. Son aquellas que entre sus atributos tiene objetos de otras
clases

Los objetos de otras clases se les pasa como parámetro en la misma línea usando los dos puntos (:).
De esa manera, cuando vaya a su fichero podrá encontrar qué parámetro le pedimos*/

#include<iostream>
#include "Expediente.h"
#include "Direccion.h"

using namespace std;

class Estudiante{
    private:
        string codigo;
        float promedio;
        Expediente exp;
        Direccion dir;

    public:
        Estudiante(string codigo,float promedio,int nroExpediente,string direccion) : exp(nroExpediente),dir(direccion){
            this->codigo = codigo;
            this->promedio = promedio;
        }
    
    void mostrarDatos(){
        cout<<"Código del alumno: "<<codigo<<endl;
        cout<<"El promedio es: "<<promedio<<endl;
        cout<<"El número de expediente es: "<<exp.getNroExpediente()<<endl;
        cout<<"La dirección del alumno es: "<<dir.getDireccion()<<endl;
    }

};