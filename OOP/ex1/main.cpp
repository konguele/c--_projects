/*Definir una clase DayYear con los atributos mes y día, los métodos igual() y visualizar().
    - El mes se registra como un valor entero (1 = enero, 2 = febrero, etc...).
    - El día del mes se registra con otra variable entera día.
    - Escribir un programa que compruebe si una fecha es su cumpleaños. */

#include <iostream>
#include <stdlib.h>
#include "DayYear.h"

using namespace std;

int main(int argc, char** argv){
    DayYear* hoy;
    DayYear* cumple;
    int d,m;

    cout<<"Introduzca la fecha de hoy:"<<endl;
    cout<<"Día: "; cin>>d;
    cout<<"\nMes(En número): "; cin>>m;

    hoy = new DayYear(d,m);

    cout<<"\nIntroduce la fecha de tu cumpleaños:"<<endl;
    cout<<"Día: "; cin>>d;
    cout<<"Mes(En número): "; cin>>m;

    cumple = new DayYear(d,m);

    hoy->visualizar(); //Mostramos la fecha de hoy
    cout<<endl;
    cumple->visualizar(); //Mostramos la fecha del cumple

    if(hoy->igual(*cumple)){
        cout<<"\n\nFeliz Cumpleaños!!!"<<endl;
    }
    else{
        cout<<"\n\nNo es tu cumpleaños :( Que tengas un buen día"<<endl;
    }


    system("pause");
    return 0;
}