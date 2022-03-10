#include<iostream>
using namespace std;

template<class T>
class Materia{
    private:
        string nombreMateria;
        int clave;
        T calificacion;

    public:
        Materia(string nombreMateria,int clave,T calificacion){
            this->nombreMateria = nombreMateria;
            this->clave = clave;
            this->calificacion = calificacion;
        }

        void mostrarDatos(){
            cout<<"Nombre de la Materia: "<<nombreMateria<<endl;
            cout<<"Clave: "<<clave<<endl;
            cout<<"Calificación: "<<calificacion<<endl;
        }

        void setCalificacion(T calificacion){
            this->calificacion = calificacion;
        }

        T getCalificacion(){
            return calificacion;
        }
};