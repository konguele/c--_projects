#include<iostream>
#include "Atleta.h"
using namespace std;

float Atleta::getTiempoCarrera(){
    return tiempoCarrera;
}

void Atleta::mostrarDatos(){
    cout<<"Número del Atleta: "<<numeroAtleta<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Tiempo de la carrera: "<<tiempoCarrera<<endl;
}

int Atleta::indiceGanador(Atleta atletas[],int n){
    float tiempoCarrera;
    int indice = 0;

    tiempoCarrera = atletas[0].getTiempoCarrera();
    for(int i=1;i<n;i++){
        if(atletas[i].getTiempoCarrera() < tiempoCarrera){
            tiempoCarrera = atletas[i].getTiempoCarrera();
            indice = i;
        }
    }

    return indice;
}