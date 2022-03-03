/* Clases Derivadas - Herencia y Polimorfismo
Considera la siguiente relación de herencia. Define las clases Mamífero, Felino y Gato Doméstico.
Decide qué atributos y métodos incluir de tal manera que el programa pueda:
    a) Declarar un objeto llamado minino de tipo GatoDomestico y otro llamado estrellaCirco
        de tipo Felino.
    b) Imprimir la dieta de minino y estrellaCirco.
    c) Imprimir el año y lugar de nacimiento de minino y estrellaCirco.
    d) Cambiar el nombre del dueño de minino.
    e) Imprimir la raza de minino y estrellaCirco.
    f) Cambiar el nombre del circo en el que actúa estrellaCirco.
*/

#include<iostream>
#include "GatoDomestico.h"
#include "Felino.h"
using namespace std;

int main(int argc,char** argv){
    GatoDomestico* minino = new GatoDomestico(2015,"Urdorf","Gato Sphynx","Juanjo García");
    Felino* estrellaCirco = new Felino(2014,"África","León","Circo Raluy");

    cout<<"\n\t-DIETAS-"<<endl;
    cout<<"Gato: "<<minino->imprimirDieta()<<endl;
    cout<<"Felino: "<<estrellaCirco->imprimirDieta()<<endl;

    cout<<"\n\t-AÑO DE NACIMIENTO-"<<endl;
    cout<<"Gato: "<<minino->getNacimiento()<<" - "<<minino->getLugarNacimiento()<<endl;
    cout<<"Felino: "<<estrellaCirco->getNacimiento()<<" - "<<estrellaCirco->getLugarNacimiento()<<endl;

    cout<<"\n\t-CAMBIAR DUEÑO DEL GATO-"<<endl;
    string nuevoAmo;
    cout<<"Digita el nombre del nuevo dueño: ";
    getline(cin,nuevoAmo);
    minino->setNombreAmo(nuevoAmo);
    cout<<"El nuevo dueño es: "<<minino->getNombreAmo()<<endl;

    cout<<"\n\t-RAZA-"<<endl;
    cout<<"Gato: "<<minino->getRaza()<<endl;
    cout<<"Felino: "<<estrellaCirco->getRaza();

    cout<<"\n\t-CAMBIAR EL NOMBRE DEL CIRCO-"<<endl;
    string nuevoCirco;
    cout<<"Digita el nombre del nuevo circo: ";
    getline(cin,nuevoCirco);
    estrellaCirco->setNombreCirco(nuevoCirco);
    cout<<"El nuevo circo donde trabaja el felino es: "<<estrellaCirco->getNombreCirco()<<endl;


    delete minino;
    delete estrellaCirco;
    return 0;
}