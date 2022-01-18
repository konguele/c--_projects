/* Define una estructura que indique el tiempo empleado por un ciclista en una etapa. 
La estructura debe tener estos campos:
- Horas
- Minutos
- Segundos
Escribe un programa que dado N etapas calcule el tiempo total empleado en correr todas las 
etapas. */

#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

struct Etapas{
    int horas;
    int minutos;
    int segundos;
}et[100];

int main(){
    int n_etapas,horasT=0,minutosT=0,segundosT=0;

    cout<<"Dime el número de etapas: "; cin>>n_etapas;

    for(int i=0;i<n_etapas;i++){
        cout<<"Horas: "; cin>>et[i].horas;
        cout<<"Minutos: "; cin>>et[i].minutos;
        cout<<"Segundos: "; cin>>et[i].segundos;

        horasT += et[i].horas;
        minutosT += et[i].minutos;
        if(minutosT >= 60){
            minutosT -= 60;
            horasT++;
        }
        segundosT += et[i].segundos;
        if(segundosT >= 60){
            segundosT -= 60;
            minutosT++;
        }
        cout<<"\n";
    }

    cout<<"\nTiempo total empleado\n";
    cout<<"Horas; "<<horasT<<endl;
    cout<<"Minutos: "<<minutosT<<endl;
    cout<<"Segundos: "<<segundosT<<endl;

    cin.get();
    return 0;
}