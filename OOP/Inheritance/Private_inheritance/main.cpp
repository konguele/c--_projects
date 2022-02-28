/*Herencia Privada: Los miembros públicos y protegidos de la clase base se vuelven miembros
privados de la clase derivada. En efecto, los usuarios de la clase derivada no tienen
acceso a las facilidades proporcionadas por la clase base. Los miembros privados de la clase
base son inaccesibles a las funciones miembro de la clase derivada.
    class ClaseDerivada : private ClaseBase{
        private:
            Sección privada
        public:
            Sección pública
        protected:
            Sección protegida
    }
*/

#include<iostream>
#include "Turismo.h"
#include "Deportivo.h"
using namespace std;

int main(int argc,char** argv){
    cout<<"\t-Herencia Pública-"<<endl;
    Turismo* t1 = new Turismo("Alfa Romeo","Blanco","Giulietta",5);

    cout<<"El color es: "<<t1->getColor()<<endl;
    
    t1->setColor("Negro");
    cout<<"El color es: "<<t1->getColor()<<endl;

    cout<<"El modelo es: "<<t1->retornarModelo()<<endl;

    cout<<"\n\n\t-Herencia Privada-"<<endl;
    Deportivo* d1 = new Deportivo("Porsche","Negro","911 Carrera",10);

    cout<<"La cilindrada es: "<<d1->getCilidrada()<<endl;
    cout<<"Marca: "<<d1->reportarMarca()<<endl;

    delete t1;
    delete d1;
    return 0;
}