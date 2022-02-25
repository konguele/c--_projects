/*Construir un programa que dada una serie de vehículos caracterizados por su marca, modelo
y precio, imprima las propiedades del vehículo más barato. Para ello, se deberán leer por
teclado las características de cada vehículo y crear una clase que represente a cada uno
de ellos.*/

#include<iostream>
#include<string.h>
#include "Vehiculo.h"

using namespace std;

int main(int argc,char** argv){
    Vehiculo* coches;
    int numeroVehiculos,indiceBarato;
    string marca,modelo;
    float precio;

    cout<<"Digite el número de vehículos: ";
    cin>>numeroVehiculos;

    coches = new Vehiculo[numeroVehiculos]; //Arreglo de objetos
    for(int i=0;i<numeroVehiculos;i++){
        cout<<"\nDigita los datos del vehículo "<<(i+1)<<": "<<endl;
        cin.ignore();
        cout<<"Digita la Marca: "; getline(cin,marca);
        cout<<"Digita el Modelo: "; getline(cin,modelo);
        cout<<"Digita el precio: "; cin>>precio;

        coches[i] = Vehiculo(marca,modelo,precio);
    }

    indiceBarato = Vehiculo::indiceBarato(coches,numeroVehiculos);

    cout<<"El vehículo más barato es: "<<endl;
    (coches+indiceBarato)->mostrarDatos();

    delete[] coches;
    return 0;
}