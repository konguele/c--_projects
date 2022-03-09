/*Las plantillas de clases permiten definir versiones de una misma clase que difieren en el
tipo de dato de alguno(s) de sus miembros. Es decir. se crea el modelo de una clase el cual
permitirá definir distintas instancias de la misma para diferentes tipos de datos.

Se declara de la siguiente forma:

template<class T>
class PlantillaClase{
    private:
        T atributo;
        ...
    public:
        PlantillaClase();
        T Metodo1();
        void Metodo2(T valor);
        ...
};
*/

#include<iostream>
#include "EjemploTemplate.h"

using namespace std;

int main(int argc,char** argv){
    EjemploPlantilla <int,float> ob1(5,9.87); //Así se crean los objetos de plantillas de clases

    ob1.mostrarDatos();

    ob1.setDato1(10);
    ob1.setDato2(8.78);

    cout<<endl;

    ob1.mostrarDatos();

    return 0;
}