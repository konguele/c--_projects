/*Herencia protegida: Los miembros públicos y protegidos de la clase base se convierten en miembros
protegidos de la clase derivada y los miembros privados de la clase base se vuelven inaccesibles

    class ClaseDerivada : protected ClaseBase{
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
#include "Furgoneta.h"
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

    cout<<"\n\n\t-Herencia Protegida-"<<endl;
    Furgoneta* f1 = new Furgoneta("Ford","Amarillo","AS12",1200);

    cout<<"Carga: "<<f1->getCarga()<<endl;
    cout<<"Color: "<<f1->reportarColor()<<endl;

    delete t1;
    delete d1;
    delete f1;
    return 0;
}