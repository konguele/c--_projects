/*Una plantilla de función es un modelo de función que el compilador de C++ usará para 
construir diferentes versiones de una misma función, según los tipos de datos que se especifiquen
al invocar a la misma. La plantilla permite escribir funciones que difieren exclusivamente en el
tipo de datos que manejan.

Para definir una plantilla de función se aplica la siguiente sintaxis:

template<class T1,class T2, ...,class Tn> --> Para plantillas de clases
template<typename T1,typename T2, ...,typename Tn> --> Para plantillas de funciones

Aunque se pueden usar ambas en ambos casos.
*/
#include<iostream>
#include "Igual.h"

using namespace std;

//Plantilla de función
template <class T> //Aquí le decimos que solo tendremos un dato genérico, tienen que ser 2 int por ejemplo, no vale 1 int y 1 float
T mayor(T dato1,T dato2){
    if(dato1>=dato2){
        return dato1;
    }
    else{
        return dato2;
    }
}

template <class T,class T2> //Aquí sí le indicamos que pueden ser 2 tipos de dato genérico
T mayor(T dato1,T2 dato2){
    if(dato1>=dato2){
        return dato1;
    }
    else{
        return dato2;
    }
}

template <typename T,typename T2> //Lo mismo que el anterior, pero aquí usamos typename
T menor(T dato1,T2 dato2){
    if(dato1<=dato2){
        return dato1;
    }
    else{
        return dato2;
    }
}

int main(int argc,char** argv){
    cout<<"El mayor de dos números enteros es: "<<mayor(5,9)<<endl;
    cout<<"El mayor de dos número reales es: "<<mayor(4.56,9.32)<<endl;
    cout<<"El mayor de dos caracteres es: "<<mayor('r','z')<<endl;
    cout<<"El mayor de dos números enteros es: "<<mayor(5,4.98)<<endl;
    cout<<"El menor de dos números enteros es: "<<menor(5,4.98)<<endl;
    cout<<"Los valores son iguales: "<<igual(3,3)<<endl;


    return 0;
}