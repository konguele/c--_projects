//Implementación de la clase Persona
/*La sobrecarga de métodos se utiliza para pasar el mismo método con diferentes parámetros,
no puedes pasar dos métodos iguales con los mismos parámetros o sin, porque C++ se confunde*/

#include <iostream>
using namespace std;

class Persona{
    //Atributos
    private:
        string nombre;
        int edad;
        string dni;

    //Métodos
    public:
        Persona(string _nombre,int _edad){ //Constructor 1
            nombre = _nombre;
            edad =_edad;
        }

        Persona(string _dni){ //Constructor 2
            dni = _dni;
        }

        void correr(){
            cout<<"Soy "<<nombre<<", tengo "<<edad<<" años y estoy corriendo una maratón."<<endl;
        }

        void correr(int km){
            cout<<"He corrido "<<km<<" Kilómetros"<<endl;
        }
};