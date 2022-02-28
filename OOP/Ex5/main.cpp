/*Construir un programa para una competencia de atletismo, el programa debe gestionar una serie de
atletas caracterizados por su número de atleta, nombre y tiempo de carrera. AL final, el programa
debe mostrar los datos del atleta ganador de la carrera.*/

#include<iostream>
#include "Atleta.h"

using namespace std;

int main(int argc,char** argv){
    Atleta* atletas;
    int numeroAtletas,numeroAtleta,indiceAtleta;
    string nombre;
    float tiempoCarrera;

    cout<<"Digita el número de atletas que van a competir: "; cin>>numeroAtletas;

    atletas = new Atleta[numeroAtletas];

    for(int i=0;i<numeroAtletas;i++){
        cout<<"\n\tREGISTRA AL ATLETA "<<(i+1)<<": "<<endl;
        cout<<"Digita el número del atleta: "; cin>>numeroAtleta;
        cin.ignore();
        cout<<"Digita el nombre del atleta: "; getline(cin,nombre);
        cout<<"Digita el tiempo de la carrera: "; cin>>tiempoCarrera;

        atletas[i] = Atleta(numeroAtleta,nombre,tiempoCarrera);
    }

    indiceAtleta = Atleta::indiceGanador(atletas,numeroAtletas);

    cout<<"\nHAS GANADO LA CARRERA!!"<<endl;
    (atletas+indiceAtleta)->mostrarDatos();

    return 0;
}