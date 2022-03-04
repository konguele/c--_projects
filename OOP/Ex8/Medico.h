#include<iostream>
#include "Persona.h"
using namespace std;

class Medico : public Persona{
    private:
        string titulo;
        int expyears;

    public:
        Medico(string nombre,string apellido,string edad,string titulo,int expyears) : Persona(nombre,apellido,edad){
            this->titulo = titulo;
            this->expyears = expyears;
        }

        ~Medico(){

        }

        void partidoFutbol(){
            cout<<"Da asistencia médica durante el partido"<<endl;
        }

        void entrenamiento(){
            cout<<"Da asistencia médica en la sesión de entrenamiento"<<endl;
        }

        void curarLesion(){
            cout<<"Cura la lesión"<<endl;
        }
};