/*Herencia Pública: Una clase derivada tiene acceso a los elementos públicos y protegidos de su
clase base. Los elementos públicos se heredan como elementos públicos; los elementos protegidos
permanecen protegidos; los elementos privados no se heredan.
    class ClaseDerivada : public ClaseBase{
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
using namespace std;

int main(int argc,char** argv){
    Turismo* t1 = new Turismo("Alfa Romeo","Blanco","Giulietta",5);

    cout<<"El color es: "<<t1->getColor()<<endl;
    
    t1->setColor("Negro");
    cout<<"El color es: "<<t1->getColor()<<endl;

    cout<<"El modelo es: "<<t1->retornarModelo()<<endl;


    return 0;
}