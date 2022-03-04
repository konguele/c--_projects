#include<iostream>
#include "Alumno.h"
#include "Deportista.h"

using namespace std;

class BecadoDeporte : public Alumno, public Deportista{
    private:
        float montoBeca;

    public:
        BecadoDeporte(string getNombreCarrera,string getNombreEntrenador,float montoBeca) : Alumno(getNombreCarrera) , Deportista(getNombreEntrenador){
            this->montoBeca = montoBeca;
        }

        ~BecadoDeporte(){
            
        }
    
        void mostrarDatos(){
            Alumno::mostrarDatos();
            Deportista::mostrarDatos();
            cout<<"Monto de la Beca: "<<montoBeca<<endl;
        }

        void setMontoBeca(float n){
            float incremento = (montoBeca*n)/100;
            this->montoBeca += incremento;
        }

        float getMontoBeca(){
            return montoBeca;
        }
};