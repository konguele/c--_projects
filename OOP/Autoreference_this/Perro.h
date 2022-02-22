//Autorreferencia del Objeto: this
#include <iostream>
#include <string>

using namespace std;

class Perro{
    //Atributos
    private:
        string nombre,raza;

    //Métodos
    public:
        Perro(string nombre,string raza){
            this->nombre = nombre;
            this->raza = raza;
        }

        ~Perro(){ //Destructor: Sirve para liberar la memoria cuando el programa finaliza

        }

        void mostrarDatos();
        void jugar();
};