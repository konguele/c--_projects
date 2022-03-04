/*Considera la siguiente relación de herencia, la cual involucra 3 clases: Alumno, Deportista y
BecadoDeporte. Esta última representa a aquellos alumnos que son deportistas y por esa razón han
recibido una beca especial del gobierno para premiar sus esfuerzos. Decide qué atributos y métodos
incluir, de tal manera que su programa pueda: 
    a) Declarar dos objetos llamados alumnoJuan y alumnoPedro de tipo Alumno.
    b) Declarar un objeto llamado deporLuis de tipo Deportista.
    c) Declarar dos objetos llamados bdAna y bdCarmen de tipo BecadoDeporte.
    d) Imprimir los datos de todos los objetos declarados.
    e) Actualiza el nombre de la carrera que están estudiando alumnoJuan y bdAna. El dato dado por
    el usuario será el nombre de la nueva carrera.
    f) Actualizar el nombre del entrenador deporLuis y bdCarmen. El dato dado por el usuario será
    el nombre del nuevo entrenador.
    g) Actualiza el monto de la beca de bdAna y bdCarmen. El dato dado por el usuario será el
    porcentaje de incremento de la beca actual.
*/

#include<iostream>
#include "Alumno.h"
#include "Deportista.h"
#include "BecadoDeporte.h"

using namespace std;

int main(int argc,char** argv){
    Alumno* alumnoJuan = new Alumno("Informática");
    Alumno* alumnoPedro = new Alumno("Ingeniería de Sistemas");
    Deportista* deporLuis = new Deportista("Ronaldinho Gaucho");
    BecadoDeporte* bdAna = new BecadoDeporte("Administración","Jordi ENP",1200);
    BecadoDeporte* bdCarmen = new BecadoDeporte("Contabilidad","Nacho Vidal",1350);

    cout<<"\n\t-Mostrando Datos-"<<endl;
    cout<<"Alumno Juan"<<endl;
    alumnoJuan->mostrarDatos();
    cout<<"Alumno Pedro"<<endl;
    alumnoPedro->mostrarDatos();
    cout<<"Deportista Luis"<<endl;
    deporLuis->mostrarDatos();
    cout<<"Becada Ana"<<endl;
    bdAna->mostrarDatos();
    cout<<"Becada Carmen"<<endl;
    bdCarmen->mostrarDatos();

    string nuevaCarrera;
    cout<<"\n\nDigita la nueva carrera del Alumno Juan: "; getline(cin,nuevaCarrera);
    alumnoJuan->setNombreCarrera(nuevaCarrera);
    cout<<"\nDigita la nueva carrera de la Becada en Deportes Ana: "; getline(cin,nuevaCarrera);
    bdAna->setNombreCarrera(nuevaCarrera);
    cout<<"\n\nLa nueva carrera del alumno Juan es: "<<alumnoJuan->getNombreCarrera()<<endl;
    cout<<"\nLa nueva carrera de la Becada en Deporte Ana es: "<<bdAna->getNombreCarrera()<<endl;

    string nuevoEntrenador;
    cout<<"\n\nDigita el nombre del nuevo entrenador del Deportista Luis: ";
    getline(cin,nuevoEntrenador);
    deporLuis->setNombreEntrenador(nuevoEntrenador);
    cout<<"\nDigita el nombre del nuevo entrenador de la Becada en Deportes Carmen: ";
    getline(cin,nuevoEntrenador);
    bdCarmen->setNombreEntrenador(nuevoEntrenador);
    cout<<"\n\nEl nuevo entrenador del Deportista Luis es: "<<deporLuis->getNombreEntrenador()<<endl;
    cout<<"\nEl nuevo entrenador de la Becada en Deportes Carmen es: "<<bdCarmen->getNombreEntrenador()<<endl;

    float incremento;
    cout<<"\n\nDigita el incremento de la Beca de Ana: ";
    cin>>incremento;
    bdAna->setMontoBeca(incremento);
    cout<<"Digita el incremento de la Beca de Carmen: ";
    cin>>incremento;
    bdCarmen->setMontoBeca(incremento);
    cout<<"El nuevo monto de la Beca de Ana es: "<<bdAna->getMontoBeca()<<endl;
    cout<<"El nuevo monto de la Beca de Carmen es: "<<bdCarmen->getMontoBeca()<<endl;

    delete alumnoJuan;
    delete alumnoPedro;
    delete deporLuis;
    delete bdAna;
    return 0;
}