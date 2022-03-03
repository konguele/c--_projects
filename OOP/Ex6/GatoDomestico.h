#include<iostream>
#include "Felino.h"
using namespace std;

class GatoDomestico : public Felino{
    private:
        string nombreAmo;
    
    public:
        GatoDomestico(int nacimiento,string lugarNacimiento,string raza,string nombreAmo) : Felino(nacimiento,lugarNacimiento,raza){
            this->nombreAmo = nombreAmo;
        }
        ~GatoDomestico(){

        }

        string imprimirDieta(){
            return "La dieta del gato es con Whiskas";
        }

        void setNombreAmo(string nuevoAmo){
            this->nombreAmo = nuevoAmo;
        }

        string getNombreAmo(){
            return nombreAmo;
        }
};