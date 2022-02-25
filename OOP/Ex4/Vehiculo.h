#include<iostream>
#include<string.h>

using namespace std;

class Vehiculo{
    private:
        string marca,modelo;
        float precio;
    public:
        Vehiculo(string marca,string modelo,float precio){
            this->marca = marca;
            this->modelo = modelo;
            this->precio = precio;
        }

        Vehiculo(){ //Constructor por Defecto

        }
        ~Vehiculo(){
            
        }

        float getPrecio();
        void mostrarDatos();
        static int indiceBarato(Vehiculo coches[],int n);
};