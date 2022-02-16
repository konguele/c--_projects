#include <iostream>
#include "DayYear.h"

using namespace std;

//Comprobamos la igualdad en las fechas
bool DayYear::igual(DayYear& d){
    if(dia==d.dia && mes==d.mes){
        return true;
    }
    else{
        return false;
    }
}

void DayYear::visualizar(){
    cout<<"Mostrando los datos: "<<endl;
    cout<<"Mes: "<<mes<<endl;
    cout<<"Día: "<<dia<<endl;
}