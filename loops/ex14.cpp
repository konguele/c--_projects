/* En una clase de 5 alumnos se han realizado 3 exámenes y se requiere
determinar el número de:
    a) Alumnos que aprobaron todos los exámenes.
    b) Alumnos que aprobaron al menos un examen.
    c) Alumnos que aprobaron únicamente el último exámen.
Realice el programa que permita la lectura de los datos y el cálculo de las estadísticas.
*/

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    float examen1,examen2,examen3;
    int aprobadosTodos=0,aprobadosUno=0,aprobadosUltimo=0;

    for(int i=1;i<=5;i++){
        cout<<i<<". Digita la nota del primer exámen: "; cin>>examen1;
        cout<<i<<". Digita la nota del segundo exámen: "; cin>>examen2;
        cout<<i<<". Digita la nota del tercer exámen: "; cin>>examen3;
        cout<<"\n";

        if((examen1>10.5)&&(examen2>10.5)&&(examen3>10.5)){
            aprobadosTodos++;
        }

        if((examen1>10.5)||(examen2>10.5)||(examen3>10.5)){
            aprobadosUno++;
        }
        if((examen1<10.5)&&(examen2<10.5)&&(examen3>10.5)){
            aprobadosUltimo++;
        }

    }

    cout<<"\nAlumnos que aprobaron todos los exámenes: "<<aprobadosTodos<<endl;
    cout<<"\nAlumnos que aprobaron al menos un exámen: "<<aprobadosUno<<endl;
    cout<<"\nAlumnos que aprobaron únicamente el último exámen: "<<aprobadosUltimo<<endl;

    cin.get();
    return 0;
}