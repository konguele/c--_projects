/*Define una estructura que indique el tiempo empleado por un ciclista en recorrer
una etapa. La estructura debe tener 3 campos:
- Horas
- Minutos
- Segundos
Escribe un programa que dado 3 etapas calcule el tiempo total empleado en correr todas
las etapas.

NOTA: Usar punteros
 */

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//Estructuras
struct Etapa{
    int horas,min,seg;
}etapas[3],*puntero_etapa = etapas;

//Prototipo de Función
void pedirDatos();
void calcularTiempo(Etapa *);

//Variables globales


//Función principal
int main(){
    pedirDatos();
    calcularTiempo(puntero_etapa);


    cin.get();
    return 0;
}

//Definición de función
void pedirDatos(){
    cout<<"Digita los tiempos empleados: "<<endl;
    for(int i=0;i<3;i++){
        cout<<"Horas: "; cin>>(puntero_etapa+i)->horas;
        cout<<"Minutos: "; cin>>(puntero_etapa+i)->min;
        cout<<"Segundos: "; cin>>(puntero_etapa+i)->seg;
        cout<<"\n";
    }
}

void calcularTiempo(Etapa *puntero_etapa){
    int horasT=0,minutosT=0,segundosT=0;

    for(int i=0;i<3;i++){
        horasT += (puntero_etapa+i)->horas;
        minutosT += (puntero_etapa+i)->min;
        if(minutosT >= 60){
            minutosT -= 60;
            horasT++;
        }
        segundosT += (puntero_etapa+i)->seg;
        if(segundosT >= 60){
            segundosT -= 60;
            minutosT++;
        }
    }

    cout<<"\nMostrando el tiempo total:\n";
    cout<<"Horas: "<<horasT<<endl;
    cout<<"Minutos: "<<minutosT<<endl;
    cout<<"Segundos: "<<segundosT<<endl;
}