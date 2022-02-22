//Destructor de objetos
#include <iostream>
#include <string>

using namespace std;

class Perro{
    //Atributos
    private:
        string nombre,raza;

    //Métodos
    public:
        Perro(string _nombre,string _raza){
            nombre = _nombre;
            raza = _raza;
        }

        ~Perro(){ //Destructor: Sirve para liberar la memoria cuando el programa finaliza

        }

        void mostrarDatos();
        void jugar();
};